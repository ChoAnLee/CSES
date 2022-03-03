#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int number;
	cin>>number;
	long long int sum=(number+1)*number/2;
	long long int sum1=0;
	for(int i=0;i<number-1;i++){
		int y;
		cin>>y;
		sum1+=y;
	}
	cout<<sum-sum1;
		return 0;
}