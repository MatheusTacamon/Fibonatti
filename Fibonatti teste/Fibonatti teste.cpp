#include <iostream>
using namespace std;
bool Fibonacci(int n) {
    int a = 0, b = 1, c = 0;
    if (n == 0 || n == 1) {
        return true;
    }
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    return c == n;
}
int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;
    if (Fibonacci(numero)) {
        cout << numero << " Esta presente na sequencia de Fibonacci.";
    }
    else {
        cout << numero << " Nao esta presente na sequencia de Fibonacci.";
    }
    return 0;
}