#pragma once

namespace hb
{
	template<class Type, unsigned int count>
	struct vector
	{
		union
		{
			Type arr[count];
			struct
			{
				Type x, y, z, w;
			};
		};

		constexpr Type& operator[](unsigned int i);
		constexpr const Type& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr vector<Type, count>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, count>& operator+=(const vector<OtherType, count>& v);
		template<class OtherType>
		constexpr vector<Type, count>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, count>& operator-=(const vector<OtherType, count>& v);
		template<class OtherType>
		constexpr vector<Type, count>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, count>& operator*=(const vector<OtherType, count>& v);
		template<class OtherType>
		constexpr vector<Type, count>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr vector<Type, count>& operator/=(const vector<OtherType, count>& v);

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

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator+(const vector<LeftType, count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator+(const vector<LeftType, count>& l, const vector<RightType, count>& r);
	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator-(const vector<LeftType, count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator-(const vector<LeftType, count>& l, const vector<RightType, count>& r);
	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator*(const vector<LeftType, count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator*(const vector<LeftType, count>& l, const vector<RightType, count>& r);
	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator/(const vector<LeftType, count>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator/(const vector<LeftType, count>& l, const vector<RightType, count>& r);
}

#include "Vector.inl"