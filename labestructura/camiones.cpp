#include <iostream>

int main() {
    int i = 0;
    std::cout << "Escribe un numero: ";
    std::cin >> i;
    std::cout << "El numero que escribiste fue el " << i << "\n" << "Ese numero mas 2 es igual a " << (i + 2) << "\n";
    return 0;
}