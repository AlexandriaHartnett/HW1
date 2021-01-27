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

  int totalPrice = price * quantity;
  std::cout << "Total Price: " << totalPrice << std::endl;
  return 0;
}
