#include <iostream>
using namespace std;

int main() {
	int X,div,isprime=0;
	cin>>X;
	div = X/2;
	for (int i = 2;i<=div;i++) {
		if (X%i == 0) {
			cout<<"NO";
			isprime = 1;
			break;
		}
	}
	
	if (isprime == 0) {
		cout<<"YES";
	}
	
	return 0;
}
