#include <iostream>
using namespace std;

int main() {
	int N,num,revs=0;
	cin>>N;
	num = N;
	while (N) {
		revs = revs*10+N%10;
		N = N/10;
	}
	if (num == revs) {
		cout<<revs<<endl<<"YES";
	}
	else {
		cout<<revs<<endl<<"NO";
	}
	return 0;
}
