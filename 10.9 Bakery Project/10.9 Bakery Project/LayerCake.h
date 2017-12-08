#include"Cake.h"
#include"BakedGood.h"
#include <iostream>
using namespace std;
#ifndef BREAD_AND_CAKES_LAYERCAKE_H
#define BREAD_AND_CAKES_LAYERCAKE_H
class LayerCake : Cake {
public:
	virtual string ToString();
	virtual double DiscountedPrice();
private:
};
#endif //BREAD_AND_CAKES_LAYERCAKE_H
