#include <iostream>
#include <string>


int main() {
  std::string entrada, saida = "";
  int length = 0;

  std::cout << "Digite uma string" << std::endl;
  std::cin >> entrada;
  length = entrada.length();

  for(int i = length; i>=0; i--) {
    saida += entrada[i - 1];
  }
  std::cout << saida;

  return 0;
}