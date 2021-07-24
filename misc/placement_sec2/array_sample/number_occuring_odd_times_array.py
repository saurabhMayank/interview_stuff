'''
XOR karne se hme odd occuring number isiliye mil rha hai kyonki baaki sab even occuring hai bs yahi ek odd occuring hai toh hota
kya hai jab hm hm array ki numbers ko XOR kar rhe hai toh baaki sab apne aap se kisi tarah ek baar aur xor ho jaayenge
lekin odd occuring hai wo apne aap se 2 baar xor hoga toh last mei wahi bachenge
'''

def number_occuring_odd_times():
    res=0
    for index in range(0,len(arr)):
        print(arr[index])
        print(res)
        res=res^arr[index]
        print(res)
        print("*****************")
    return res


arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

print(number_occuring_odd_times())