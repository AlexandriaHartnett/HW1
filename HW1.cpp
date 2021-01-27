#include <iostream> 

int main() {
  std::string name;
  std::cout << "Product Name: ";
  std::cin >> name;

  int price;
  std::cout << "Wholesale Price: ";
  std::cin >> price;

  int quantity; 
  std::cout << "Quantity: ";
  std::cin >> quantity;

  double markup;
  std::cout << "Markup: ";
  std::cin >> markup;

  int totalPrice = price * quantity;
  double retailPrice = totalPrice * (1 + markup);
  double profit = retailPrice - totalPrice;
  
  std::cout << name<< ", "
	    << price << ", "
	    << quantity << ", "
	    << price << ", "
	    << totalPrice << ", "
	    << retailPrice << ", "
	    << profit << std::endl;
  return 0;
}
