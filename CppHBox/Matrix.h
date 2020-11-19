#pragma once

#include "Vector.h"

namespace hb
{
	template<class Type, unsigned int row_n, unsigned int col_n>
	struct Matrix
	{
		typedef Vector<Type, row_n> col_type;
		typedef Vector<Type, col_n> row_type;

		row_type rows[row_n];

	private:
	};
}
