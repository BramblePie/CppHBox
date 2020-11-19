#pragma once

namespace hb
{
	template<class Type, unsigned int size>
	struct Vector
	{
		union {
			Type arr[size];
			struct {
				Type x, y, z, w;
			};
		};

		Type& operator[](unsigned int i)
		{
			return arr[i];
		}

		const Type& operator[](unsigned int i) const
		{
			return arr[i];
		}

	private:
	};

	template<class Type>
	struct Vector<Type, 3>
	{
		union {
			Type arr[3];
			struct {
				Type x, y, z;
			};
		};

		Type& operator[](unsigned int i)
		{
			return arr[i];
		}

		const Type& operator[](unsigned int i) const
		{
			return arr[i];
		}
	};

	template<class Type>
	struct Vector<Type, 2>
	{
		union {
			Type arr[2];
			struct {
				Type x, y;
			};
		};

		Type& operator[](unsigned int i)
		{
			return arr[i];
		}

		const Type& operator[](unsigned int i) const
		{
			return arr[i];
		}
	};

	template<class Type>
	struct Vector<Type, 1>
	{
		union {
			Type arr[1];
			struct {
				Type x;
			};
		};

		Type& operator[](unsigned int i)
		{
			return arr[i];
		}

		const Type& operator[](unsigned int i) const
		{
			return arr[i];
		}
	};
}
