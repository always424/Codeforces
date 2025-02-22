for _ in range(int(input())):
    x = int(input())
    a = []
    cnt = 1
    
    while x != 0:
        last = x % 10
        if last != 0:
            a.append(last * cnt)
        x //= 10
        cnt *= 10 
    print(len(a))
    for num in a:
        print(num,end=" ")
