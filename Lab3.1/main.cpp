#include "Dish.h"
#include "Order.h"
#include <iostream>
using namespace std;

int main() {
    Order order(1);
    order.addDish(Dish("Duck meat", 300, 250));
    order.addDish(Dish("Caesar salad", 250, 175));
    order.printOrder();
    cout << "\nCheck: all dishes = " << order.count() << "\n";
    return 0;
}
