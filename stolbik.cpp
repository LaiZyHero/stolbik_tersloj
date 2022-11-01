#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
int a, b;
cin >> a;
cin >> b;

int s = 0, P = 0, S = 0, b1 = b, i = 0;
while(b1 > 0)
{
int s1 = 0, b2 = b1 % 10;
if (b2 != 0) {
int a1 = a, j = 0;
while (a1 > 0) {
int a2 = a1 % 10;
if (a2 != 0) {
s1 += a2 * b2 * pow(10, j);
P += 1;
}
//cout << a2 << " * " << b2 << endl;
a1 = a1 / 10;
++j;
}
}
//cout << "summ = " << s1 << endl;
s1 *= pow(10, i);
b1 = b1 / 10;
++i;
s += s1;
S += 1;
}

cout << "result: " << s << endl;
cout << "Pr = " << P << " Sum = " << S - 1;
}
