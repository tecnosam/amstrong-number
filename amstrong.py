


n = int(input("N: "))

def check_amstrong(x):
    y = 0
    for i in str(x):
        y += int(i)**n
    if ( y == x ):
        return True
    return False

# space = [i for i in range( 10**(n-1), int( "9"*n ))]
# for i in filter(check_amstrong, space):
#     print(i)

# OR

for i in range( 10**(n-1), int( 10**n )):
    if (check_amstrong( i ) == True):
        print(i)
    else:
        continue
