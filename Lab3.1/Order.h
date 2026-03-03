#ifndef ORDER_H
#define ORDER_H
#include "Dish.h"
#include <string>
#include <vector>
using namespace std;

class Order {
private:
    int number_;
    vector<Dish> dishes_;
public:
    Order(const int &number);
    void addDish(const Dish &d);
    size_t count() const;
    double totalDishesValue() const;
    void printOrder() const;
};
#endif