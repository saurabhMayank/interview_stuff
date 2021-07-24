'''
array should be sorted here
'''


def pair_sum_closest_to_x():
    res_l,res_r =0,0
    l,r,min_dist=0,(len(arr)-1),MAX_VAL
    
    while r>l:
        if(abs((arr[r]+arr[l])-x)<min_dist):
            min_dist=abs((arr[r]+arr[l])-x)
            res_l=l
            res_r=r
        if(arr[r]+arr[l]>x):
            r=r-1    
        else:
            l=l+1
    print_index(res_l,res_r)

def print_index(res_l,res_r):
    print(res_l,res_r)    


n = int(input())
MAX_VAL = 100000000000
arr = []
arr = [int(x) for x in input().split()]
print("-------------------------------")

pair_sum_closest_to_x()