// You can change n to whatever or standardd input
const n = 3;


function check_amstrong(x) {
    // placeholder 
    let y = 0
    // converts to string so that we can iterate over the digits
    xx = x.toString()
    for (let i = 0; i < xx.length; i++ ) {
        y += parseInt(xx[i]) ** n;
    }
    // if the placeholder equals the digit then its an amstrong
    if ( x == y ) {
        return true;
    }
    return false;
}

for ( let i = 10**(n-1); i <= 10**n; i++ ) {
    if (check_amstrong( i ) == true) {
        console.log( i )
    }
}
