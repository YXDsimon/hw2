#include <iostream>
using namespace std;
void func(unsigned char image[5][5])
{
    // unsigned char a[5][5] = {};
    // image = a;
    image[0][0] = 'c';
}
int main()
{
    unsigned char p[5][5];
    func(p);
    cout << p[0][0];
    // for (int i = 0; i < 3; i++)
    return 0;
}