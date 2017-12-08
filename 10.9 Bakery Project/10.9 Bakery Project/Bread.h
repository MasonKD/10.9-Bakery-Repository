#include "BakedGood.h"
#include <iostream>
using namespace std;
#ifndef BREAD_AND_CAKES_BREAD_H
#define BREAD_AND_CAKES_BREAD_H
class Bread : BakedGood {
	virtual string ToString();
	virtual double DiscountedPrice();
public:
private:
};

#endif //BREAD_AND_CAKES_BREAD_H
