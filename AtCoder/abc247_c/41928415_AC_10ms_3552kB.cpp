#include <iostream>
int a, b, n;
void f(int i)
{
    if (i == 1)
    {
        std::cout << "1 ";
        return;
    }

    f(i-1);
    std:: cout << i << " " ;
    f(i-1);

}
int main() {
    std::cin >> n;
    f(n);
    return 0;
}
