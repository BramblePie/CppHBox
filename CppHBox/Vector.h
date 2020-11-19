#pragma once

namespace hb
{
	template<class Type, unsigned int size>
	struct vector
	{
		union
		{
			Type arr[size];
			struct
			{
				Type x, y, z, w;
			};
		};

		constexpr Type& operator[](unsigned int i);
		constexpr const Type& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vector<Type, size>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, size>& operator+=(const vector<OtherType, size>& v);
		template<class OtherType>
		constexpr vector<Type, size>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, size>& operator-=(const vector<OtherType, size>& v);
		template<class OtherType>
		constexpr vector<Type, size>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, size>& operator*=(const vector<OtherType, size>& v);
		template<class OtherType>
		constexpr vector<Type, size>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, size>& operator/=(const vector<OtherType, size>& v);

	private:
	};

	template<class Type>
	using vec4 = vector<Type, 4>;

	template<class Type>
	using vec3 = vector<Type, 3>;

	template<class Type>
	using vec2 = vector<Type, 2>;

	template<class Type>
	using vec = vector<Type, 1>;

	template<class Type>
	struct vector<Type, 3>
	{
		union
		{
			Type arr[3];
			struct
			{
				Type x, y, z;
			};
		};

		constexpr Type& operator[](unsigned int i);
		constexpr const Type& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vec3<Type>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vec3<Type>& operator+=(const vec3<OtherType>& v);
		template<class OtherType>
		constexpr vec3<Type>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vec3<Type>& operator-=(const vec3<OtherType>& v);
		template<class OtherType>
		constexpr vec3<Type>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vec3<Type>& operator*=(const vec3<OtherType>& v);
		template<class OtherType>
		constexpr vec3<Type>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vec3<Type>& operator/=(const vec3<OtherType>& v);
	};

	template<class Type>
	struct vector<Type, 2>
	{
		union
		{
			Type arr[2];
			struct
			{
				Type x, y;
			};
		};

		constexpr Type& operator[](unsigned int i);
		constexpr const Type& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vec2<Type>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vec2<Type>& operator+=(const vec2<OtherType>& v);
		template<class OtherType>
		constexpr vec2<Type>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vec2<Type>& operator-=(const vec2<OtherType>& v);
		template<class OtherType>
		constexpr vec2<Type>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vec2<Type>& operator*=(const vec2<OtherType>& v);
		template<class OtherType>
		constexpr vec2<Type>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vec2<Type>& operator/=(const vec2<OtherType>& v);
	};

	template<class Type>
	struct vector<Type, 1>
	{
		union
		{
			Type arr[1];
			struct
			{
				Type x;
			};
		};

		constexpr Type& operator[](unsigned int i);
		constexpr const Type& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vec<Type>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vec<Type>& operator+=(const vec<OtherType>& v);
		template<class OtherType>
		constexpr vec<Type>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vec<Type>& operator-=(const vec<OtherType>& v);
		template<class OtherType>
		constexpr vec<Type>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vec<Type>& operator*=(const vec<OtherType>& v);
		template<class OtherType>
		constexpr vec<Type>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vec<Type>& operator/=(const vec<OtherType>& v);
	};

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator+(const vector<LeftType, size>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator+(const vector<LeftType, size>& l, const vector<RightType, size>& r);
	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator-(const vector<LeftType, size>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator-(const vector<LeftType, size>& l, const vector<RightType, size>& r);
	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator*(const vector<LeftType, size>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator*(const vector<LeftType, size>& l, const vector<RightType, size>& r);
	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator/(const vector<LeftType, size>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator/(const vector<LeftType, size>& l, const vector<RightType, size>& r);
}

#include "Vector.inl"