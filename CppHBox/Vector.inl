namespace hb
{
#pragma region Selector operators

	template<class Type, unsigned int count>
	inline constexpr Type& vector<Type, count>::operator[](unsigned int i)
	{
		return arr[i];
	}

	template<class Type, unsigned int count>
	inline constexpr const Type& vector<Type, count>::operator[](unsigned int i) const
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& hb::vector<Type, count>::operator+=(const OtherType s)
	{
		for (unsigned int i = 0; i < count; i++)
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& vector<Type, count>::operator+=(const vector<OtherType, count>& v)
	{
		for (unsigned int i = 0; i < count; i++)
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& vector<Type, count>::operator-=(const OtherType s)
	{
		for (unsigned int i = 0; i < count; i++)
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& vector<Type, count>::operator-=(const vector<OtherType, count>& v)
	{
		for (unsigned int i = 0; i < count; i++)
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& vector<Type, count>::operator*=(const OtherType s)
	{
		for (unsigned int i = 0; i < count; i++)
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& vector<Type, count>::operator*=(const vector<OtherType, count>& v)
	{
		for (unsigned int i = 0; i < count; i++)
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& vector<Type, count>::operator/=(const OtherType s)
	{
		for (unsigned int i = 0; i < count; i++)
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

	template<class Type, unsigned int count>
	template<class OtherType>
	inline constexpr vector<Type, count>& vector<Type, count>::operator/=(const vector<OtherType, count>& v)
	{
		for (unsigned int i = 0; i < count; i++)
			arr[i] /= static_cast<Type>(v.arr[i]);
		return *this;
	}

#pragma endregion

#pragma region Binary operators

	template<class LeftType, class RightType, unsigned int count>
	inline constexpr vector<LeftType, count> operator+(const vector<LeftType, count>& l, const RightType s)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] + static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator+(const vector<LeftType, count>& l, const vector<RightType, count>& r)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] + static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator-(const vector<LeftType, count>& l, const RightType s)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] - static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator-(const vector<LeftType, count>& l, const vector<RightType, count>& r)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] - static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator*(const vector<LeftType, count>& l, const RightType s)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] * static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator*(const vector<LeftType, count>& l, const vector<RightType, count>& r)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] * static_cast<LeftType>(r.arr[i]);
		return result;
	}

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator/(const vector<LeftType, count>& l, const RightType s)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] / static_cast<LeftType>(s);
		return result;
	}

	template<class LeftType, class RightType, unsigned int count>
	constexpr vector<LeftType, count> operator/(const vector<LeftType, count>& l, const vector<RightType, count>& r)
	{
		vector<LeftType, count> result;
		for (unsigned int i = 0; i < count; i++)
			result.arr[i] = l.arr[i] / static_cast<LeftType>(r.arr[i]);
		return result;
	}

#pragma endregion
}