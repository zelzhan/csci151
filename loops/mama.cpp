  #include <iostream>
  using namespace std;

  int main ()
  {
  int a;
  int b;
  int c;
  int d;
  int temp;

  cout<<"Enter four integers here:\n"; // Enter four numbers.
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  (a<b)?(temp=a, a=b,	b=temp):(1);
  (a<c)?(temp=a, a=c,	c=temp):(1);
  (a<d)?(temp=a, a=d,	d=temp):(1);
  (b<c)?(temp=b, b=c,	c=temp):(1);
  (b<d)?(temp=b, b=d,	d=temp):(1);
  (c<d)?(temp=c, c=d,	d=temp):(1);

  cout <<a<<" "<<b<<" "<< c <<" "<<d<< '\n';
  return 0;
  }
