# cook your dish here


def check_for_winner(n,a,b,arr):
    base_num=lcm(int(a),int(b))
    
    for item in arr:
        if(item%base_num==0):
            del item
    print(arr)    
    
def gcd(x, y):
   """This function implements the Euclidian algorithm
   to find G.C.D. of two numbers"""

   while(y):
       x, y = y, x % y

   return x


# define lcm function

def lcm(int(x), int(y)):
   """This function takes two
   integers and returns the L.C.M."""

   lcm = (x*y)//gcd(x,y)
   return lcm    


test_cases=int(input(""))

while(test_cases>0):
    test_cases=test_cases-1
    n,a,b=input("").split()
    arr = [int(x) for x in input().split()]
    
    check_for_winner(n,a,b,arr)