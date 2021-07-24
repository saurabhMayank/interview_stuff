'''
Pair of elements from the array whose sum is equal to the given number X
'''

def find_pair():
    consc_pair=[]
    for i in range(0,len(arr)):
        for j in range(0,len(arr)):
            if(n == arr[i]+arr[j]):
                consc_pair.append(arr[i])
                consc_pair.append(arr[j])
    extract_pairs(consc_pair)

def extract_pairs(consc_pair):
    print(consc_pair)
    


arr = []
arr = [int(x) for x in input().split()]
n =int(input())

print("-------------------------------")
find_pair()