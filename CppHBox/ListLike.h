#pragma once

#include <stdexcept>

template<class T>
struct Stack
{
	virtual ~Stack() {};
	virtual void Push(T v) = 0;
	virtual T Pop() = 0;
	virtual T& Top() = 0;
	virtual const T& Top() const = 0;
};

template<class T>
struct Node
{
	T value;
	Node<T>* next;
};

template<class T>
struct LinkedStack : Stack<T>
{
	~LinkedStack()
	{
		Node<T>* i;
		while (top)
		{
			i = top;
			top = top->next;
			delete i;
		}
	}

	void Push(T v) override
	{
		top = new Node<T>{ v,top };
	}

	T Pop() override
	{
		Node<T>* r = top;
		top = top->next;
		T rv = r->value;
		delete r;
		return rv;
	}

	T& Top() override
	{
		return top->value;
	}

	const T& Top() const override
	{
		return top->value;
	}

private:
	Node<T>* top = 0;
};

template<class T>
struct List
{
	virtual ~List() {}

	/// <summary>
	/// Gets the number of elements in list
	/// </summary>
	/// <returns>Number of elements in list</returns>
	virtual const size_t _Count() const = 0;

	/// <summary>
	/// Gets the number of reserved elements
	/// </summary>
	/// <returns>Number of spaces for elements</returns>
	virtual const size_t capacity() const = 0;

	virtual T& operator[](const size_t i) = 0;
	virtual const T& operator[](const size_t i) const = 0;

	/// <summary>
	/// Adds an elements to the end of the list
	/// </summary>
	/// <param name="item">to add to list</param>
	virtual void add(const T item) = 0;

	/// <summary>
	/// Inserts an element at a given index
	/// </summary>
	/// <param name="item">to insert</param>
	/// <param name="index">to insert at</param>
	virtual void insert(const T item, const size_t index) = 0;

	virtual bool contains(const T& item) const = 0;

	virtual size_t find(const T& item) const = 0;

	virtual T removeAt(const size_t index) = 0;

	virtual bool remove(const T& item) = 0;

	virtual void clear() = 0;
};

template<class T>
struct ArrayList : List<T>
{
	~ArrayList()
	{
		clear();
	}

	/// <summary>
	/// Gets the number of elements in list
	/// O(1)
	/// </summary>
	/// <returns>Number of elements in list</returns>
	const size_t _Count() const override
	{
		if (last < first)
			return 0;
		return (last + 1) - first;
	}

	/// <summary>
	/// Gets the number of reserved elements
	/// O(1)
	/// </summary>
	/// <returns>Number of spaces for elements</returns>
	const size_t capacity() const override
	{
		return (cap + 1) - first;
	}

	T& operator[](const size_t i) override
	{
		if (i < _Count())
			return first[i];
		throw std::range_error("Index out of range");
	}

	const T& operator[](const size_t i) const override
	{
		if (i < _Count())
			return first[i];
		throw std::range_error("Index out of range");
	}

	/// <summary>
	/// Adds an elements to the end of the list
	/// O(1) / O(N)
	/// </summary>
	/// <param name="item">to add to list</param>
	void add(const T item) override
	{
		if (last + 1 <= cap)
		{
			last++;
			*last = item;
		}
		else
		{
			size_t n = capacity() * 2;
			T* r = new T[n];
			for (size_t i = 0; i < capacity(); i++)
				r[i] = first[i];

			r[capacity()] = item;
			last = &r[capacity()];
			cap = &r[n - 1];
			delete[] first;
			first = r;
		}
	}

	/// <summary>
	/// Inserts an element at a given index
	/// O(N)
	/// </summary>
	/// <param name="item">to insert</param>
	/// <param name="index">to insert at</param>
	void insert(const T item, const size_t index) override
	{
		if (index == _Count())
			add(item);
		else if (index > _Count())
			throw std::range_error("Index out of range");
		else
		{
			add(*last);
			for (size_t i = _Count() - 2; i > index; i--)
				first[i] = first[i - 1];
			first[index] = item;
		}
	}

	bool contains(const T& item) const override
	{
		for (T* itr = first; itr != last; itr++)
			if (*itr == item)
				return true;
		return false;
	}

	size_t find(const T& item) const override
	{
		size_t i = -1;
		for (T* itr = first; itr < last; itr++)
		{
			i++;
			if (*itr == item)
				return i;
		}
		return i;
	}

	T removeAt(const size_t index) override
	{
		T r = (*this)[index];
		for (T* itr = &first[index]; itr < last; itr++)
			*itr = *(itr + 1);

		return r;
	}

	bool remove(const T& item) override
	{
		for (T* itr = first; itr < last; itr++)
		{
			if (*itr == item)
			{
				for (; itr < last; itr++)
					*itr = *(itr + 1);
				return true;
			}
		}
		return false;
	}

	void clear() override
	{
		delete[] first;
		first = 0;
		last = 0;
		cap = 0;
	}

private:
	T* first = new T[4];
	T* last = first - 1;
	T* cap = first + 3;
};
