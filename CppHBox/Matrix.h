#pragma once

#include "Vector.h"

namespace hb
{
	template<class Type, unsigned int row_n, unsigned int col_n>
	struct matrix
	{
		typedef vector<Type, row_n> col_type;
		typedef vector<Type, col_n> row_type;

		row_type rows[row_n];

		row_type& operator[](unsigned int i)
		{
			return rows[i];
		}

		const row_type& operator[](unsigned int i) const
		{
			return rows[i];
		}

	private:
	};
}
