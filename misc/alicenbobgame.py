


def check_for_winner(n,a,b,arr):
    base_num=lcm(int(a),int(b))
    lcm_num=[]
    bob_num=[]
    alice_num=[]
    new_arr=[]
    bob=0
    alice=0
    attack=0
    start=0
    
    if a==1:
        print("BOB")
        return
    elif b==1:
        print("ALICE")
        return
        
    for item in arr:
        if(item%base_num==0 and base_num!=0):
            lcm_num.append(item)
            
    if len(lcm_num)!=0 and base_num==a:
        if len(lcm_num) > 1:
            lcm_num = list(set(lcm_num)-set(a))
            attack=1
        bob=bob+1
        start=1         #Alice's chance to play
            
    new_arr=list(set(arr)-set(lcm_num))
    
    if attack==1:
        alice=alice+1
        start=0         #BOB's chance to play
        new_arr = list(set(new_arr)-set(base_num))
        
        
    for item in new_arr:
        if start==1:
            if(item%int(b)==0):     
                alice_num.append(item)
                alice=alice+1
                
            elif(item%int(a)==0):
                bob_num.append(item)
                bob=bob+1
                
        elif start==0:
            if(item%int(b)==0):     
                bob_num.append(item)
                bob=bob+1
                
            elif(item%int(a)==0):
                alice_num.append(item)
                alice=alice+1
            
    if(alice>=bob):
        print("ALICE")
    else:
        print("BOB")
        
    
def gcd(x, y):
   """This function implements the Euclidian algorithm
   to find G.C.D. of two numbers"""

   while(y):
       x, y = y, x % y

   return x


# define lcm function

def lcm(x,y):
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