#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
#include <vector>
using namespace std;

int countDigits( int &x ) {
    int temp;
    int count = 0;
    // Store to temporary variable.
    temp = x;
    
    while(temp != 0) {

        // Increment counter
        count++;

        // Remove last digit of 'temp'
        temp /= 10;
    }
    return count;
}

int main() {
    int p;
    int N;

    cout<<"P: ";
    cin>>p;
    int x = 0;

    while (true) {
        if ( x > 9 ) {
            if ( x != (p) ){
                N = x / (10 ^ countDigits(x)) % 10;
            }
            else {
                cout<<N<<endl;
                break;
            }
            x += 2;
        }
        else {
            if ( x != (p) ) {
                N = x;
            } else {
                cout<<N<<endl;
                break;
            }
            x++;
        }
    }

}