#ifndef DISH_H
#define DISH_H
#include <string>

using namespace std;

class Dish {
private:
    string name;
    double weight;
    double price;
public:
    Dish(const string &name_of_dish, double weight_of_dish, double price_of_dish);
    const string &name_of_dish() const;
    double weight_of_dish() const;
    double price_of_dish() const;
    double dishPrice() const;
};
#endif