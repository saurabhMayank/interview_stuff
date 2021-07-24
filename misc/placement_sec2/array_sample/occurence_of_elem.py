'''
  Count the occurences of a particular elem in a sorted array..Occurences of all the item will be printed
'''

def occurence_of_elem():
    count=[0]*len(arr)

    for item in arr:
        count[item]=count[item]+1
        
    print(count)

arr = []
arr = [int(x) for x in input().split()]

print("-------------------------------")

occurence_of_elem()