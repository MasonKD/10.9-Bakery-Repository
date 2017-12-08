#include <iostream>
using namespace std;

#ifndef BREAD_AND_CAKES_BAKEDGOOD_H
#define BREAD_AND_CAKES_BAKEDGOOD_H
class BakedGood {
public:
	virtual string ToString();
	virtual double DiscountedPrice();
private:
protected:
	int qty;
};
#endif //BREAD_AND_CAKES_BAKEDGOOD_H
