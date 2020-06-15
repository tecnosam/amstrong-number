#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
using namespace std;

bool check_amstrong(int &x, int &n) {
    int y = 0;
    // create s tring version of it for iteration
    string xx = to_string(x);
    for (int i = 0; i < xx.length(); i++) {
        int temp = boost::lexical_cast<int>(xx[i]);
        y = y + pow(temp, n);
    }
    if ( x == y ) {
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    cout<<"running"<<endl;
    for ( int i = 10^(n-1); i < 10^n; i++ ) {
        if ( check_amstrong(i, n) == true ) {
            cout<<i<<endl;
        }
        else {
            continue;
        }
    }
    return 0;
}
