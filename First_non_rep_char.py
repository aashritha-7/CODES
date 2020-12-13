def Charcount(s) :
        chars = 256
        count = [0] * chars
        for i in s:
                count[ord(i)] += 1
        return count
def Nonrep(s):
        count = Charcount(s)
        index = -1
        k = 0
        for i in s:
                if count[ord(i)] == 1:
                        index = k
                        break
                k += 1
        return index
t = int(input())
for _ in range(t):
    s = input()
    ind = Nonrep(s)
    if ind == -1:
        print("_")
    else:
        print(s[ind])
