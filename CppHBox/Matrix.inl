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
}