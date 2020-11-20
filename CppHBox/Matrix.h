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

	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const matrix<LeftType, row_l_n, col_l_n>& l, const RightType s);
	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const RightType s, const matrix<LeftType, row_l_n, col_l_n>& r);
	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const matrix<LeftType, row_l_n, col_l_n>& l, const matrix<RightType, row_l_n, col_l_n>& r);

	// Braket-like rules with vector matrix operators
	// a vector on the left ( as long as as many columns of the matrix ) acts as a row vector going over every row of the matrix, vice versa

	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator+(const matrix<LeftType, row_l_n, col_l_n>& m, const vector<RightType, row_l_n>& v);
	template<class LeftType, class RightType, unsigned int row_r_n, unsigned int col_r_n>
	constexpr matrix<LeftType, row_r_n, col_r_n> operator+(const vector<LeftType, col_r_n>& v, const matrix<RightType, row_r_n, col_r_n>& m);
	template<class LeftType, class RightType, unsigned int row_l_n, unsigned int col_l_n>
	constexpr matrix<LeftType, row_l_n, col_l_n> operator-(const matrix<LeftType, row_l_n, col_l_n>& m, const vector<RightType, row_l_n>& v);
	template<class LeftType, class RightType, unsigned int row_r_n, unsigned int col_r_n>
	constexpr matrix<LeftType, row_r_n, col_r_n> operator-(const vector<LeftType, col_r_n>& v, const matrix<RightType, row_r_n, col_r_n>& m);

	// Matrix, matrix multiplication A_mn * B_np = C_mp
	template<class LeftType, class RightType, unsigned int m, unsigned int n, unsigned int p>
	constexpr auto operator*(const matrix<LeftType, m, n>& l, const matrix<RightType, n, p>& r)->matrix<LeftType, m, p>;
}

#include "Matrix.inl"