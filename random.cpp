#include "bits/stdc++.h"
using namespace std;
const int MAX = 10;
const int MAX2 = 10;
const int MAX3 = 2;

int main()
{
	srand(time(NULL));
	int n = rand() % MAX + 1;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		a[i]=rand()%10+1;
	}
	// if(l > r) swap(l, r);
	cout << n<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}