def fun(s):
    l = []
    for i in range(len(s)):
        if s[i] in l:
            l.remove(s[i])
        else:
            l.append(s[i])
    if (len(s)%2 == 0 and len(l)== 0 or len(s)%2 == 1 and len(l) == 1):
        return True
    else:
        return False

t = int(input())
for _ in range(t):
    s = input()
    ans = fun(s)
    if ans:
        print("True")
    else:
        print("False")
        
'''To find if a string can be rearranged to from a palindrome
1
aabb -
true ''' 

