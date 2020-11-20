#include <stdexcept>

namespace cppb
{
#pragma region Selector operators

#ifdef _DEBUG
#define return_in_range if (i < count()) return arr[i];	\
	throw std::out_of_range("index out of range");

#else
#define return_in_range() return arr[i];

#endif // _DEBUG

	template<class _T, unsigned int _Count>
	inline constexpr _T& vector<_T, _Count>::operator[](unsigned int i)
	{
		return_in_range
	}

	template<class _T, unsigned int _Count>
	inline constexpr const _T& vector<_T, _Count>::operator[](unsigned int i) const
	{
		return_in_range
	}

	template<class _T>
	inline constexpr _T& vector<_T, 3>::operator[](unsigned int i)
	{
		return_in_range
	}

	template<class _T>
	inline constexpr const _T& vector<_T, 3>::operator[](unsigned int i) const
	{
		return_in_range
	}

	template<class _T>
	inline constexpr _T& vector<_T, 2>::operator[](unsigned int i)
	{
		return_in_range
	}

	template<class _T>
	inline constexpr const _T& vector<_T, 2>::operator[](unsigned int i) const
	{
		return_in_range
	}
	template<class _T>
	inline constexpr _T& vector<_T, 1>::operator[](unsigned int i)
	{
		return_in_range
	}

	template<class _T>
	inline constexpr const _T& vector<_T, 1>::operator[](unsigned int i) const
	{
		return_in_range
	}

#pragma endregion

#pragma region Unary operators

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator+=(const OtherType s)
	{
		x += static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator+=(const OtherType s)
	{
		x += static_cast<_T>(s);
		y += static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator+=(const OtherType s)
	{
		x += static_cast<_T>(s);
		y += static_cast<_T>(s);
		z += static_cast<_T>(s);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& cppb::vector<_T, _Count>::operator+=(const OtherType s)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] += static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator+=(const vec<OtherType>& v)
	{
		x += static_cast<_T>(v.x);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator+=(const vec2<OtherType>& v)
	{
		x += static_cast<_T>(v.x);
		y += static_cast<_T>(v.y);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator+=(const vec3<OtherType>& v)
	{
		x += static_cast<_T>(v.x);
		y += static_cast<_T>(v.y);
		z += static_cast<_T>(v.z);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& vector<_T, _Count>::operator+=(const vector<OtherType, _Count>& v)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] += static_cast<_T>(v.arr[i]);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator-=(const OtherType s)
	{
		x -= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator-=(const OtherType s)
	{
		x -= static_cast<_T>(s);
		y -= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator-=(const OtherType s)
	{
		x -= static_cast<_T>(s);
		y -= static_cast<_T>(s);
		z -= static_cast<_T>(s);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& vector<_T, _Count>::operator-=(const OtherType s)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] -= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator-=(const vec<OtherType>& v)
	{
		x -= static_cast<_T>(v.x);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator-=(const vec2<OtherType>& v)
	{
		x -= static_cast<_T>(v.x);
		y -= static_cast<_T>(v.y);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator-=(const vec3<OtherType>& v)
	{
		x -= static_cast<_T>(v.x);
		y -= static_cast<_T>(v.y);
		z -= static_cast<_T>(v.z);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& vector<_T, _Count>::operator-=(const vector<OtherType, _Count>& v)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] -= static_cast<_T>(v.arr[i]);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator*=(const OtherType s)
	{
		x *= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator*=(const OtherType s)
	{
		x *= static_cast<_T>(s);
		y *= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator*=(const OtherType s)
	{
		x *= static_cast<_T>(s);
		y *= static_cast<_T>(s);
		z *= static_cast<_T>(s);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& vector<_T, _Count>::operator*=(const OtherType s)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] *= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator*=(const vec<OtherType>& v)
	{
		x *= static_cast<_T>(v.x);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator*=(const vec2<OtherType>& v)
	{
		x *= static_cast<_T>(v.x);
		y *= static_cast<_T>(v.y);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator*=(const vec3<OtherType>& v)
	{
		x *= static_cast<_T>(v.x);
		y *= static_cast<_T>(v.y);
		z *= static_cast<_T>(v.z);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& vector<_T, _Count>::operator*=(const vector<OtherType, _Count>& v)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] *= static_cast<_T>(v.arr[i]);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator/=(const OtherType s)
	{
		x /= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator/=(const OtherType s)
	{
		x /= static_cast<_T>(s);
		y /= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator/=(const OtherType s)
	{
		x /= static_cast<_T>(s);
		y /= static_cast<_T>(s);
		z /= static_cast<_T>(s);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& vector<_T, _Count>::operator/=(const OtherType s)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] /= static_cast<_T>(s);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec<_T>& vector<_T, 1>::operator/=(const vec<OtherType>& v)
	{
		x /= static_cast<_T>(v.x);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec2<_T>& vector<_T, 2>::operator/=(const vec2<OtherType>& v)
	{
		x /= static_cast<_T>(v.x);
		y /= static_cast<_T>(v.y);
		return *this;
	}

	template<class _T>
	template<class OtherType>
	inline constexpr vec3<_T>& vector<_T, 3>::operator/=(const vec3<OtherType>& v)
	{
		x /= static_cast<_T>(v.x);
		y /= static_cast<_T>(v.y);
		z /= static_cast<_T>(v.z);
		return *this;
	}

	template<class _T, unsigned int _Count>
	template<class OtherType>
	inline constexpr vector<_T, _Count>& vector<_T, _Count>::operator/=(const vector<OtherType, _Count>& v)
	{
		for (unsigned int i = 0; i < _Count; i++)
			arr[i] /= static_cast<_T>(v.arr[i]);
		return *this;
	}

#pragma endregion

#pragma region Binary operators

	template<class LeftType, class RightType, unsigned int _Count>
	inline constexpr vector<LeftType, _Count> operator+(const vector<LeftType, _Count>& l, const RightType s)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] + static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator+(const RightType s, const vector<LeftType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = static_cast<LeftType>(s) + r.arr[i];
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator+(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] + static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator-(const vector<LeftType, _Count>& l, const RightType s)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] - static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator-(const RightType s, const vector<LeftType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = static_cast<LeftType>(s) - r.arr[i];
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator-(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] - static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator*(const vector<LeftType, _Count>& l, const RightType s)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] * static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator*(const RightType s, const vector<LeftType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = static_cast<LeftType>(s) * r.arr[i];
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator*(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] * static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator/(const vector<LeftType, _Count>& l, const RightType s)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] / static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator/(const RightType s, const vector<LeftType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = static_cast<LeftType>(s) / r.arr[i];
		return result;
	}

	template<class LeftType, class RightType, unsigned int _Count>
	constexpr vector<LeftType, _Count> operator/(const vector<LeftType, _Count>& l, const vector<RightType, _Count>& r)
	{
		vector<LeftType, _Count> result;
		for (unsigned int i = 0; i < _Count; i++)
			result.arr[i] = l.arr[i] / static_cast<LeftType>(r.arr[i]);
		return result;
	}

#pragma endregion
}