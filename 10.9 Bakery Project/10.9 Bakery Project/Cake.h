#include "BakedGood.h"
#include <iostream>
using namespace std;

#ifndef BREAD_AND_CAKES_CAKE_H
#define BREAD_AND_CAKES_CAKE_H
class Cake : BakedGood {
public:
	virtual string ToString();
	virtual double DiscountedPrice();
private:
};

#endif //BREAD_AND_CAKES_CAKE_H
