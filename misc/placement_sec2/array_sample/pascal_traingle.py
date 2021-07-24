def solve(A):
    pt = []
    print(A)
    for i in range (0,A):
        temp = []
        if(i==0):
            temp.append(1)
            pt.append(temp)
        else:
            temp2=pt[i-1]
            temp.append(1)
            print(temp2)
            for i in range(0,len(temp2)-1):
                num = temp2[i]+temp2[i+1]
                temp.insert(num)
            temp.append(1)  
            pt.append(temp)
    print(pt)

num = int(input())
solve(num)