#ifndef _MYMULTIVECTORDOTH_
#define _MYMULTIVECTORDOTH_

#include <vector>

#include "multdimv.h"

namespace mltv {

	class multivector final {
	public:
		multivector(size_t dim);

		size_t get_dim() const;
		double get_coordinate(size_t coord) const;
		void set_coordinate(size_t coord, double value);

	private:
		std::vector<double> coordinates;

	};


	multivector cross_product(const multivector& first, const multivector& second);
	multivector dot_product(const multivector& first, const multivector& second);
}
















#endif