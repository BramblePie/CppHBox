#pragma once

namespace cppb
{
	template<class, unsigned int>
	struct vector;

	template<class _T>
	using vec4 = vector<_T, 4>;

	template<class _T>
	using vec3 = vector<_T, 3>;

	template<class _T>
	using vec2 = vector<_T, 2>;

	template<class _T>
	using vec = vector<_T, 1>;

	template<class _T, unsigned int _Count>
	struct vector
	{
		union
		{
			_T arr[_Count] = {};
			struct
			{
				_T x, y, z, w;
			};
		};

		using _CountType = decltype(_Count);

		constexpr vector() = default;
		constexpr vector(const vector<_T, _Count>& v) = default;

		template<class... ListType>
		constexpr vector(ListType... ss) : arr{ ss... } {}

#define fill_rest std::fill(&arr[4], &arr[_Count], 0)
		constexpr vector(_T s) { for (_CountType i = 0; i < _Count; i++) arr[i] = s; }
		constexpr vector(_T x, _T y, _T z, _T w) : x(x), y(y), z(z), w(w) { fill_rest; }

		constexpr vector(const vec<_T>& v1, _T y, _T z, _T w) : x(v1.x), y(y), z(z), w(w) { fill_rest; }
		constexpr vector(const vec2<_T>& v2, _T z, _T w) : x(v2.x), y(v2.y), z(z), w(w) { fill_rest; }
		constexpr vector(const vec3<_T>& v3, _T w) : x(v3.x), y(v3.y), z(v3.z), w(w) { fill_rest; }

		static constexpr _CountType count() { return _Count; }

		constexpr _T& operator[](unsigned int i);
		constexpr const _T& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vector<_T, _Count>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vector<_T, _Count>& operator+=(const vector<OtherType, _Count>& v);

		template<class OtherType>
		constexpr vector<_T, _Count>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vector<_T, _Count>& operator-=(const vector<OtherType, _Count>& v);

		template<class OtherType>
		constexpr vector<_T, _Count>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vector<_T, _Count>& operator*=(const vector<OtherType, _Count>& v);

		template<class OtherType>
		constexpr vector<_T, _Count>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vector<_T, _Count>& operator/=(const vector<OtherType, _Count>& v);

	private:
	};

	template<class _T>
	struct vector<_T, 3>
	{
		union
		{
			_T arr[3];
			struct
			{
				_T x, y, z;
			};
		};

		constexpr vector() = default;
		constexpr vector(const vector<_T, 3>& v) = default;

		template<class... ListType>
		constexpr vector(ListType... ss) : arr{ ss... } {}

		constexpr vector(_T s) : x(s), y(s), z(s) {}
		constexpr vector(_T x, _T y, _T z) : x(x), y(y), z(z) {}
		constexpr vector(const vec<_T>& v1, _T y, _T z) : x(v1.x), y(y), z(z) {}
		constexpr vector(const vec2<_T>& v2, _T z) : x(v2.x), y(v2.y), z(z) {}

		constexpr unsigned int count() const { return 3; }

		constexpr _T& operator[](unsigned int i);
		constexpr const _T& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vec3<_T>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vec3<_T>& operator+=(const vec3<OtherType>& v);

		template<class OtherType>
		constexpr vec3<_T>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vec3<_T>& operator-=(const vec3<OtherType>& v);

		template<class OtherType>
		constexpr vec3<_T>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vec3<_T>& operator*=(const vec3<OtherType>& v);

		template<class OtherType>
		constexpr vec3<_T>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vec3<_T>& operator/=(const vec3<OtherType>& v);
	};

	template<class _T>
	struct vector<_T, 2>
	{
		union
		{
			_T arr[2];
			struct
			{
				_T x, y;
			};
		};

		constexpr vector() = default;
		constexpr vector(const vector<_T, 2>& v) = default;

		template<class... ListType>
		constexpr vector(ListType... ss) : arr{ ss... } {}

		constexpr vector(_T s) : x(s), y(s) {}
		constexpr vector(_T x, _T y) : x(x), y(y) {}
		constexpr vector(const vec<_T>& v1, _T y) : x(v1.x), y(y) {}

		constexpr unsigned int count() const { return 2; }

		constexpr _T& operator[](unsigned int i);
		constexpr const _T& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vec2<_T>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vec2<_T>& operator+=(const vec2<OtherType>& v);

		template<class OtherType>
		constexpr vec2<_T>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vec2<_T>& operator-=(const vec2<OtherType>& v);

		template<class OtherType>
		constexpr vec2<_T>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vec2<_T>& operator*=(const vec2<OtherType>& v);

		template<class OtherType>
		constexpr vec2<_T>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vec2<_T>& operator/=(const vec2<OtherType>& v);
	};

	template<class _T>
	struct vector<_T, 1>
	{
		union
		{
			_T arr[1];
			struct
			{
				_T x;
			};
		};

		constexpr vector() = default;
		constexpr vector(const vector<_T, 1>& v) = default;

		template<class... ListType>
		constexpr vector(ListType... ss) : arr{ ss... } {}

		constexpr vector(_T x) : x(x) {}

		constexpr unsigned int count() const { return 1; }

		constexpr _T& operator[](unsigned int i);
		constexpr const _T& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vec<_T>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vec<_T>& operator+=(const vec<OtherType>& v);

		template<class OtherType>
		constexpr vec<_T>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vec<_T>& operator-=(const vec<OtherType>& v);

		template<class OtherType>
		constexpr vec<_T>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vec<_T>& operator*=(const vec<OtherType>& v);

		template<class OtherType>
		constexpr vec<_T>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vec<_T>& operator/=(const vec<OtherType>& v);
	};

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator+(const vector<LeftType, _Count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator+(const RightType s, const vector<LeftType, _Count>& r);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator+(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r);

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator-(const vector<LeftType, _Count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator-(const RightType s, const vector<LeftType, _Count>& r);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator-(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r);

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator*(const vector<LeftType, _Count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator*(const RightType s, const vector<LeftType, _Count>& r);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator*(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r);

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator/(const vector<LeftType, _Count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator/(const RightType s, const vector<LeftType, _Count>& r);
	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator/(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r);
}

#include "Vector.inl"