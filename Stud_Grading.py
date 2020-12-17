t = int(input())
for _ in range(t):
    n = int(input())
    if n<43:
        print(n)
    elif n%5 >= 3:
        print((n//5+1)*5)
    else:
        print(n)
'''
4 //t
73 // greater than 43 and 75 - 73 < 3 so , gets rounded 
67  // 70 - 67 !< 3 so.. 
38  // <43
33
o/p :
75
67
38
33
'''
