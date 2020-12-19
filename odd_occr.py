def findodd(x):
    res = 0
    for i in x:
        res = res ^ i
    return res
x = [int(x) for x in input().split()]
print(findodd(x))
