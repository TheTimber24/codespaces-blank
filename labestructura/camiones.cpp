#include <iostream>

int main() {
    int i = 0;
    std::cout << "Escribe un numero: ";
    std::cin >> i;
    std::cout << "El numero que escribiste fue el " << i << "\n" << "Ese numero mas 4 es igual a " << (i + 4) << "\n";
    return 0;
}