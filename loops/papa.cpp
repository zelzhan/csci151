# include <iostream>

using namespace std;

int main()
{
int a, b, c, d, big, other1, other2, other3;

cout << "Please enter 4 numbers: ";
cin >> a >> b >> c >> d;

( a > b && a > c && a> d )?(big = a, other1 = b, other2 = c, other3 = d):((b > a && b > c && b > d)?(big = b, other1 = a, other2 = c, other3 = d):(( c > a && c > b && c > d )?(big = c, other1 = a, other2 = b, other3 = d):(big = c, other1 = a, other2 = b, other3 = d)));

std::cout << big << '\n';
return 0;
}
