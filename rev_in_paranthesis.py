def rev(s , l):
    st = []
    for i in range(l):
        if (s[i] == '('):
            st.append(i)
        elif (s[i] == ')'):
            t = s[st[-1]:i + 1]
            s = s[:st[-1]] + t[::-1] + st[i + 1:]
            del st[-1]
    res = ""
    for i in range(l):
        if (s[i] != ')' and s[i] != '('):
            res += (s[i])
    return res
s = "(bar)"
l = len(s)
st = [i for i in s]
print(rev(s,l))

# (bar) ---> rab
