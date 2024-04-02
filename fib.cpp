#include <iostream>
#include <string>

bool fib(int num) {
  if(num == 0) {
    return true;
  }
  int prevNum = 0, nextNum = 1, aux;

  while(nextNum < num) {
    aux = prevNum;
    prevNum = nextNum;
    nextNum = aux + nextNum;
 
    if(nextNum == num) return true;
  }

  return false;
}

int main() {
  int num;

  std::cout << "Digite um número" << std::endl;
  std::cin >> num;

  std::string result = fib(num) ? "pertence" : "não pertence";

  std::cout << result;

  return 0;
}