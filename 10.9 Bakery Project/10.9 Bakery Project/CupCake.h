#include"Cake.h"
#include"BakedGood.h"
#include <iostream>
using namespace std;
#ifndef BREAD_AND_CAKES_CUPCAKE_H
#define BREAD_AND_CAKES_CUPCAKE_H
class CupCake : Cake {
public:
	virtual string ToString();
	virtual double DiscountedPrice();
private:
};
#endif //BREAD_AND_CAKES_CUPCAKE_H
