//All test cases passed
#include<iostream>
using namespace std;
int main()
{
  int row,col,srow,scol,rsum=0,csum=0;
  int array[50][50];
  cin>>row;
  cin>>col;
  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
      cin>>array[i][j];
  cin>>srow;
  cin>>scol;
  for(int i=srow, j=0;j<col;j++)
  	rsum=rsum+array[i][j];
  for(int i=0,j=scol;i<row;i++)
    if(array[srow][scol]!=array[i][j])
   	 csum=csum+array[i][j];
  cout<<rsum+csum;
  return 0;
}
