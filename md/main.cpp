#include <iostream>

using namespace std;
/*444*/
void d(int *n, int len )
{
   for(int i=0; i<len; i++)
    cout<<*(n+i)<<"  ";
    cout<<endl;
}
int main()
{ int a[5];
    d(a,5);

  int *p=a;

  p+=2;
  *p=3;

  d(a,5);
    return 0;
}
