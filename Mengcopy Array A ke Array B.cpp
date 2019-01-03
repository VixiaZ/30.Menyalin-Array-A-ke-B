#include <iostream>
using namespace std;

int main ()
{
	int list[100],list2[100];
	int n;
	int i,j;
	
	cout << "Berapa Banyak data Array yang ingin di copy = ";
	cin >> n;
	
	cout << "\n Masuk Data Arraynya :"<<endl;
	
	for (i=0;i<n;i++)
	{
		cin >>list [i];
	}
	cout<<"\nini adalah Array Yang di copy di atas :"<<endl;
	for (i=0;i<n;i++)
	{
		list2[i]=list[i];
	}// arrat yang di copy
	for (i=0;i<n;i--)
	
	cout<<list2[i]<<endl;
}
