#include <iostream>
using namespace std;
int main()
{
  int n,index;
  cout << "Enter the size of an array: ";
  cin >> n;
  int a[n];
  cout << "Enter array elements:\n";
  for (int i = 0; i < n; i++)
  cin >> a[i];
   cout << "Enter the deletion index position of an array: ";
  cin >> index;
   for(int i=index;i<n;i++)
   {
       a[i]=a[i+1];
   }

  cout << "New Array after deletion:"<<endl;
  for (int i=0; i<n-1; i++)
  {
      cout << a[i] << " ";
  }
  return 0;
}
