#include <iostream>
using namespace std;

int main()
{
	int a[10];
	int *p = NULL;
	cout<<"sizeof a is :"<<sizeof(a)<<"\nsizeod a[10] : "<<sizeof(a[10])<<endl;
	cout<<"sizeof &a : "<<sizeof(&a)<<"\t sizeof &a[5] : "<<sizeof(&a[10])<<endl;
	cout<<"size of int *p : "<<sizeof(p)<<endl;
	cout<<"Hello Body"<<endl;
	
	return 0;
}