#include <iostream>

using namespace std;

int main(){

  struct product {
    int weight;
    double price;
  };
  product apple;
  product banana, melon;

  // struct product {
  //   int weight;
  //   double price;
  // } apple, banana, melon;

  apple.weight = 1;
  apple.price = 100;
  banana.weight = 1;
  banana.price = 200;
  melon.weight = 5;
  melon.price = 300;

return 0;

}

