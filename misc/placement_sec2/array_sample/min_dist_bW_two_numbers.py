'''
  Find the min distance b/w two numbers in an unsorted array assuming that duplicates are also there....Hme min dist original array mei nikalna
  hai,sort karne pe cheezein mess up ho jaayengi
'''

def min_dist():
    x_ind=[]
    y_ind=[]
    for i in range(0,len(arr)):
        if(arr[i]==x):
            x_ind.append(i)
        elif(arr[i]==y):
            y_ind.append(i)
    find_dist(x_ind,y_ind)

def find_dist(x,y):
    diff=MAX_VAL
    for i in range(0,len(x)):
        for j in range(i,len(y)):
            if(abs(x[i]-y[j]) < diff):
                diff=abs(x[i]-y[j])
    print(diff)


arr = []
arr = [int(x) for x in input().split()]
x=int(input())
y=int(input())
MAX_VAL = 100000000000
print("-------------------------------")

min_dist()

