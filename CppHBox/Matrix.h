#pragma once

#include "Vector.h"

namespace cppb
{
	template<class _T, unsigned int row_n, unsigned int col_n>
	struct matrix
	{
		typedef vector<_T, row_n> col_type;
		typedef vector<_T, col_n> row_type;

		row_type rows[row_n];

		using _CountType = decltype(row_n);

		constexpr _CountType row_count() const { return row_n; }
		constexpr _CountType col_count() const { return col_n; }

		constexpr row_type& operator[](unsigned int i);
		constexpr const row_type& operator[](unsigned int i) const;

		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator+=(const OtherType s);
		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator+=(const matrix<OtherType, row_n, col_n>& m);

		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator-=(const OtherType s);
		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator-=(const matrix<OtherType, row_n, col_n>& m);

		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator*=(const OtherType s);
		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator*=(const matrix<OtherType, row_n, col_n>& m);

		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator/=(const OtherType s);
		template<class OtherType>
		constexpr matrix<_T, row_n, col_n>& operator/=(const matrix<OtherType, row_n, col_n>& m);

	private:
	};
}

#include "Matrix.inl"