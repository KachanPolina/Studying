#include "Dish.h"
using namespace std;

Dish::Dish(const string &name_of_dish, double weight_of_dish, double price_of_dish)
    : name(name_of_dish), weight(weight_of_dish), price(price_of_dish) {}

const string &Dish::name_of_dish() const { return name; }
double Dish::weight_of_dish() const { return weight; }
double Dish::price_of_dish() const { return price; }
double Dish::dishPrice() const { return weight * price; }