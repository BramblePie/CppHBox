#include "Matrix.h"

namespace cppb
{
	template<class _T, unsigned int row_n, unsigned int col_n>
	inline constexpr typename matrix<_T, row_n, col_n>::row_type& matrix<_T, row_n, col_n>::operator[](unsigned int i)
	{
		return rows[i];
	}

	template<class _T, unsigned int row_n, unsigned int col_n>
	inline constexpr const typename matrix<_T, row_n, col_n>::row_type& matrix<_T, row_n, col_n>::operator[](unsigned int i) const
	{
		return rows[i];
	}

#pragma region Unary operators

	template<class _T, unsigned int row_n, unsigned int col_n>
	template<class OtherType>
	inline constexpr matrix<_T, row_n, col_n>& cppb::matrix<_T, row_n, col_n>::operator+=(const OtherType s)
	{
		for (unsigned int i = 0; i < row_n; i++)
			rows[i] += s;
		return *this;
	}

	template<class _T, unsigned int row_n, unsigned int col_n>
	template<class OtherType>
	inline constexpr matrix<_T, row_n, col_n>& matrix<_T, row_n, col_n>::operator+=(const matrix<OtherType, row_n, col_n>& m)
	{
		for (unsigned int i = 0; i < row_n; i++)
			rows[i] += m.rows[i];
		return *this;
	}

	template<class _T, unsigned int row_n, unsigned int col_n>
	template<class OtherType>
	inline constexpr matrix<_T, row_n, col_n>& matrix<_T, row_n, col_n>::operator-=(const OtherType s)
	{
		for (unsigned int i = 0; i < row_n; i++)
			rows[i] -= s;
		return *this;
	}

	template<class _T, unsigned int row_n, unsigned int col_n>
	template<class OtherType>
	inline constexpr matrix<_T, row_n, col_n>& matrix<_T, row_n, col_n>::operator-=(const matrix<OtherType, row_n, col_n>& m)
	{
		for (unsigned int i = 0; i < row_n; i++)
			rows[i] -= m.rows[i];
		return *this;
	}

	template<class _T, unsigned int row_n, unsigned int col_n>
	template<class OtherType>
	inline constexpr matrix<_T, row_n, col_n>& matrix<_T, row_n, col_n>::operator*=(const OtherType s)
	{
		for (unsigned int i = 0; i < row_n; i++)
			rows[i] *= s;
		return *this;
	}

	template<class _T, unsigned int row_n, unsigned int col_n>
	template<class OtherType>
	inline constexpr matrix<_T, row_n, col_n>& matrix<_T, row_n, col_n>::operator/=(const OtherType s)
	{
		for (unsigned int i = 0; i < row_n; i++)
			rows[i] /= s;
		return *this;
	}
#pragma endregion

#pragma region Binary operators

	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const matrix<LeftType, row_l_n, col_l_n>& l, const RightType s)
	{
		matrix<LeftType, row_l_n, col_l_n> result = l;
		return result += s;
	}

	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const RightType s, const matrix<LeftType, row_l_n, col_l_n>& r)
	{
		matrix<LeftType, row_l_n, col_l_n> result = r;
		return result += s;
	}

	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const matrix<LeftType, row_l_n, col_l_n>& l, const matrix<RightType, row_l_n, col_l_n>& r)
	{
		matrix<LeftType, row_l_n, col_l_n> result = l;
		return result += r;
	}

	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const matrix<LeftType, row_l_n, col_l_n>& m, const vector<RightType, row_l_n>& v)
	{
		matrix<LeftType, row_l_n, col_l_n> result;
		for (unsigned int i = 0; i < col_l_n; i++)
			for (unsigned int j = 0; j < row_l_n; j++)
				result[i][j] = m[i][j] + v[i];
		return result;
	}

	template<class LeftType, class RightType, unsigned int row_r_n, unsigned int col_r_n>
	constexpr matrix<LeftType, row_r_n, col_r_n> operator+(const vector<LeftType, col_r_n>& v, const matrix<RightType, row_r_n, col_r_n>& m)
	{
		matrix<LeftType, row_r_n, col_r_n> result;
		for (unsigned int i = 0; i < col_r_n; i++)
			for (unsigned int j = 0; j < row_r_n; j++)
				result[i][j] = v[j] + m[i][j];
		return result;
	}

	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator-(const matrix<LeftType, row_l_n, col_l_n>& m, const vector<RightType, row_l_n>& v)
	{
		matrix<LeftType, row_l_n, col_l_n> result;
		for (unsigned int i = 0; i < col_l_n; i++)
			for (unsigned int j = 0; j < row_l_n; j++)
				result[i][j] = m[i][j] - v[i];
		return result;
	}

	template<class LeftType, class RightType, unsigned int row_r_n, unsigned int col_r_n>
	constexpr matrix<LeftType, row_r_n, col_r_n> operator-(const vector<LeftType, col_r_n>& v, const matrix<RightType, row_r_n, col_r_n>& m)
	{
		matrix<LeftType, row_r_n, col_r_n> result;
		for (unsigned int i = 0; i < col_r_n; i++)
			for (unsigned int j = 0; j < row_r_n; j++)
				result[i][j] = v[j] - m[i][j];
		return result;
	}

	template<class LeftType, class RightType, unsigned int m, unsigned int n, unsigned int p>
	constexpr auto operator*(const matrix<LeftType, m, n>& l, const matrix<RightType, n, p>& r) -> matrix<LeftType, m, p>
	{
		matrix<LeftType, m, p> result;
		for (unsigned int i = 0; i < m; i++)
		{
			for (unsigned int j = 0; j < p; j++)
			{
				LeftType sum = static_cast<LeftType>(0);
				for (unsigned int k = 0; k < n; k++)
					sum += l[i][k] * r[k][j];
				result[i][j] = sum;
			}
		}
		return result;
	}

#pragma endregion
}