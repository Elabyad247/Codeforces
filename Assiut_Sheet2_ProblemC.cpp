#include <iostream>
using namespace std;

int main() {

    int N,X;
    int even=0,odd=0,positive=0,negative=0;
    cin>>N;

    for (N;N>0;N--) {
        cin>>X;
        if (X==0) {
            even++;
            continue;
        }

        if (X>0 && X%2==0) {
            positive++;
            even++;
        }
        else if (X>0 && X%2!=0) {
            positive++;
            odd++;
        }
        else if (X<0 && X%2==0) {
            negative++;
            even++;
        }
        else if (X<0 && X%2!=0) {
            negative++;
            odd++;
        }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative;

    return 0;
}
