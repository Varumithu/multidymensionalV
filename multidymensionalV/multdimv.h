#ifndef _MYMULTIVECTORDOTH_
#define _MYMULTIVECTORDOTH_

#include <vector>

class multivector final {
public:
	size_t get_dim() {
		return this->coordinates.size();
	}
	double get_coordinate(size_t coord) {
		return coordinates[coord];
	}


private:
	std::vector<double> coordinates;

};
















#endif