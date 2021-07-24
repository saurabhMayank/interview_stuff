'''
subarray is the contiguous array within an array and we have to find such a subarray from the array that we have input so that its sum is 
largest of all the subarrays that can be formed.Only condition is that elements in subarray should be contiguous 
'''
'''
 kadan's algo is not valid for all -ve array
'''

def find_max_sum_of_subarray():
    max_end_here = 0
    max_sum_so_far = 0
    start=0
    s=0
    end=0

    for i in range(0,len(arr)):
        max_end_here=max_end_here+arr[i]

        if(max_end_here < 0):
            max_end_here=0
            s=i+1
        elif(max_sum_so_far < max_end_here):
            max_sum_so_far = max_end_here
            start=s
            end=i
    
    print_max_sum(max_sum_so_far,start,end)

def print_max_sum(max_sum_so_far,start,end):
    print(max_sum_so_far)
    print(start,end)


arr=[]
arr = [int(x) for x in input().split()]

print("----------------------")
find_max_sum_of_subarray()