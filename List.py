if __name__ == '__main__':
    list=[]
    N = int(input())
    for i in range(N):
        var=input().split()
        if var[0]=='insert':
            list.insert(int(var[1]),int(var[2]))
        elif var[0]=='print':
            print(list)
        elif var[0]=='remove':
            list.remove(int(var[1]))
        elif var[0]=='append':
            list.append(int(var[1]))
        elif var[0]=='sort':
            list.sort()
        elif var[0]=='pop':
            list.pop()
        elif var[0]=='reverse':
            list.reverse()
        