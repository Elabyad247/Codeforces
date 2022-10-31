#include <iostream>
using namespace std;

int main() {

    int T,N;
    cin>>T;
	long long fact=1;
    for (T;T>0;T--) {
        cin>>N;
        for (N;N>0;N--) {
        	fact*=N;
		}
		cout<<fact<<endl;
		fact=1;
    }

    return 0;
}
