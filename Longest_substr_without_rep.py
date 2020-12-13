s = input()
a = set(s)
print(len(a))



'''s = input()
a = set(s)
while len(s)!= 0:
    print(len(a))
print("-1")'''


'''start = end = 0
maxi = 0
while end < len(s) :
    if s[end] not in a:
        a.add(s[end])
        end += 1
        maxi = max(maxi , end-start)
    else:
        a.remove(s[start])
        start = start + 1
print(maxi)'''
