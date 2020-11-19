#include "Vector.h"
namespace hb
{
#pragma region Selector operators

	template<class Type, unsigned int size>
	inline constexpr Type& vector<Type, size>::operator[](unsigned int i)
	{
		return arr[i];
	}

	template<class Type, unsigned int size>
	inline constexpr const Type& vector<Type, size>::operator[](unsigned int i) const
	{
		return arr[i];
	}

	template<class Type>
	inline constexpr Type& vector<Type, 3>::operator[](unsigned int i)
	{
		return arr[i];
	}

	template<class Type>
	inline constexpr const Type& vector<Type, 3>::operator[](unsigned int i) const
	{
		return arr[i];
	}

	template<class Type>
	inline constexpr Type& vector<Type, 2>::operator[](unsigned int i)
	{
		return arr[i];
	}

	template<class Type>
	inline constexpr const Type& vector<Type, 2>::operator[](unsigned int i) const
	{
		return arr[i];
	}
	template<class Type>
	inline constexpr Type& vector<Type, 1>::operator[](unsigned int i)
	{
		return arr[i];
	}

	template<class Type>
	inline constexpr const Type& vector<Type, 1>::operator[](unsigned int i) const
	{
		return arr[i];
	}
#pragma endregion

#pragma region Unary operators

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator+=(const OtherType s)
	{
		x += static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator+=(const OtherType s)
	{
		x += static_cast<Type>(s);
		y += static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator+=(const OtherType s)
	{
		x += static_cast<Type>(s);
		y += static_cast<Type>(s);
		z += static_cast<Type>(s);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& hb::vector<Type, size>::operator+=(const OtherType s)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] += static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator+=(const vec<OtherType>& v)
	{
		x += static_cast<Type>(v.x);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator+=(const vec2<OtherType>& v)
	{
		x += static_cast<Type>(v.x);
		y += static_cast<Type>(v.y);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator+=(const vec3<OtherType>& v)
	{
		x += static_cast<Type>(v.x);
		y += static_cast<Type>(v.y);
		z += static_cast<Type>(v.z);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& vector<Type, size>::operator+=(const vector<OtherType, size>& v)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] += static_cast<Type>(v.arr[i]);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator-=(const OtherType s)
	{
		x -= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator-=(const OtherType s)
	{
		x -= static_cast<Type>(s);
		y -= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator-=(const OtherType s)
	{
		x -= static_cast<Type>(s);
		y -= static_cast<Type>(s);
		z -= static_cast<Type>(s);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& vector<Type, size>::operator-=(const OtherType s)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] -= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator-=(const vec<OtherType>& v)
	{
		x -= static_cast<Type>(v.x);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator-=(const vec2<OtherType>& v)
	{
		x -= static_cast<Type>(v.x);
		y -= static_cast<Type>(v.y);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator-=(const vec3<OtherType>& v)
	{
		x -= static_cast<Type>(v.x);
		y -= static_cast<Type>(v.y);
		z -= static_cast<Type>(v.z);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& vector<Type, size>::operator-=(const vector<OtherType, size>& v)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] -= static_cast<Type>(v.arr[i]);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator*=(const OtherType s)
	{
		x *= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator*=(const OtherType s)
	{
		x *= static_cast<Type>(s);
		y *= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator*=(const OtherType s)
	{
		x *= static_cast<Type>(s);
		y *= static_cast<Type>(s);
		z *= static_cast<Type>(s);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& vector<Type, size>::operator*=(const OtherType s)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] *= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator*=(const vec<OtherType>& v)
	{
		x *= static_cast<Type>(v.x);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator*=(const vec2<OtherType>& v)
	{
		x *= static_cast<Type>(v.x);
		y *= static_cast<Type>(v.y);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator*=(const vec3<OtherType>& v)
	{
		x *= static_cast<Type>(v.x);
		y *= static_cast<Type>(v.y);
		z *= static_cast<Type>(v.z);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& vector<Type, size>::operator*=(const vector<OtherType, size>& v)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] *= static_cast<Type>(v.arr[i]);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator/=(const OtherType s)
	{
		x /= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator/=(const OtherType s)
	{
		x /= static_cast<Type>(s);
		y /= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator/=(const OtherType s)
	{
		x /= static_cast<Type>(s);
		y /= static_cast<Type>(s);
		z /= static_cast<Type>(s);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& vector<Type, size>::operator/=(const OtherType s)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] /= static_cast<Type>(s);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec<Type>& vector<Type, 1>::operator/=(const vec<OtherType>& v)
	{
		x /= static_cast<Type>(v.x);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec2<Type>& vector<Type, 2>::operator/=(const vec2<OtherType>& v)
	{
		x /= static_cast<Type>(v.x);
		y /= static_cast<Type>(v.y);
		return *this;
	}

	template<class Type>
	template<class OtherType>
	inline constexpr vec3<Type>& vector<Type, 3>::operator/=(const vec3<OtherType>& v)
	{
		x /= static_cast<Type>(v.x);
		y /= static_cast<Type>(v.y);
		z /= static_cast<Type>(v.z);
		return *this;
	}

	template<class Type, unsigned int size>
	template<class OtherType>
	inline constexpr vector<Type, size>& vector<Type, size>::operator/=(const vector<OtherType, size>& v)
	{
		for (unsigned int i = 0; i < size; i++)
			arr[i] /= static_cast<Type>(v.arr[i]);
		return *this;
	}

#pragma endregion

#pragma region Binary operators

	template<class LeftType, class RightType, unsigned int size>
	inline constexpr vector<LeftType, size> operator+(const vector<LeftType, size>& l, const RightType s)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] + static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator+(const vector<LeftType, size>& l, const vector<RightType, size>& r)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] + static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator-(const vector<LeftType, size>& l, const RightType s)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] - static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator-(const vector<LeftType, size>& l, const vector<RightType, size>& r)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] - static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator*(const vector<LeftType, size>& l, const RightType s)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] * static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator*(const vector<LeftType, size>& l, const vector<RightType, size>& r)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] * static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator/(const vector<LeftType, size>& l, const RightType s)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] / static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int size>
	constexpr vector<LeftType, size> operator/(const vector<LeftType, size>& l, const vector<RightType, size>& r)
	{
		vector<LeftType, size> result;
		for (unsigned int i = 0; i < size; i++)
			result.arr[i] = l.arr[i] / static_cast<LeftType>(r.arr[i]);
		return result;
	}

#pragma endregion
}