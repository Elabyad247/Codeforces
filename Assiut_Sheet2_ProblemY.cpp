#include <iostream>
using namespace std;

int main() {
    int n1=0 , n2=1, n3=0;
    int N;
    cin>>N;
    for(int i=0;i<N;i++) {
        if (i==0) {
            cout<<n1<<" ";
            continue;
        }
        if (i==1) {
            cout<<n2<<" ";
            continue;
        }
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
    }


    return 0;
}
