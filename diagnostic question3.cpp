// All Testcase passed

#include<iostream>
#include<cmath>
using namespace std;
void fib(int n,int size) {
   int f[n];
   int i,s;
   f[0] = 0;
   f[1] = 1;
   for (i = 2; i < n; i++)
   {
      f[i] = f[i-1] + f[i-2];
   }
   for (i = 0; i < n; i++)
   {
        if(size==1)
        {
            cout<<"0";
            break;
        }
        else if(f[i]>=pow(10,size-1))
        {
            cout<<i;
            break;
        }
   }

}
int main () {
   int n = 100;
   int num;
   cin>>num;
   fib(n,num);
   return 0;
}
