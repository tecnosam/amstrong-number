#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
using namespace std;


bool checkArmstrong(int n)
{
    int dig=log10(n)+1;	// Total number of digits of n
    int res=0,x=n;
    /* find sum of all the digits
    raised to the power of the number of digits */  
    while(n>0)
    {
        res+=pow(n%10,dig);
        n/=10;
    }
    // If satisfies Armstrong condition
    if(res==x)
        return true;
    else
        return false;
}

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
        if ( checkArmstrong(i) == true ) {
            cout<<i<<endl;
        }
        else {
            continue;
        }
    }
    return 0;
}
