#include "Order.h"
#include <iostream>

using namespace std;

Order::Order(const int &number) : number_(number) {}

void Order::addDish(const Dish &d) { dishes_.push_back(d); }
size_t Order::count() const { return dishes_.size(); }
double Order::totalDishesValue() const {
    double sum = 0.0;
    for (const auto &d : dishes_) {
        sum += d.dishPrice();
    }
    return sum;
}
void Order::printOrder() const {
    cout << "Number of order: " << number_ << "\n";
    cout << "Number of dishes: " << dishes_.size() << "\n";
    for (const auto &d : dishes_) {
        cout << "- " << d.name_of_dish() << ", weight: " << d.weight_of_dish() << " gram"
             << ", price: " << d.price_of_dish() << ", sum: " << d.dishPrice() << "\n";
    }
    cout << "Total order cost " << totalDishesValue() << "\n";
}