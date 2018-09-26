#include "multdimv.h"

#include "multimvex.h"

namespace mltv {
	
	void multivector::set_coordinate(size_t coord, double value) {
		if (coord < this->coordinates.size()) {
			this->coordinates[coord] = value;
		}
		else {
			DifferentVecSpaces ex;
			throw ex;
		}
	}

	multivector::multivector(size_t dim) {
		this->coordinates.reserve(dim);
	}

	size_t multivector::get_dim() const {
		return this->coordinates.size();
	}


	double multivector::get_coordinate(size_t coord) const {
		return coordinates[coord];
	}

	multivector operator + (const multivector& first, const multivector& second) {
		if (first.get_dim() != second.get_dim()) {
			DifferentVecSpaces ex;
			throw ex;
		}
		multivector res(first.get_dim());
		for (size_t i = 0; i < res.get_dim(); ++i) {

		}
	}

	multivector dot_product(const multivector& first, const multivector& second) {
		multivector res(first.get_dim());
		for (size_t i = 0; i < res.get_dim(); ++i) {
			
		}
	}

}