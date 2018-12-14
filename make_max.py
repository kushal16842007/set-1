def st(a,b):
    s1=a+b
    s2=b+a
    if s1>s2:
        return s1
    else:
        return s2
# a=3 30 34 5 9
aa=input()
a=aa.split()
restr=''
for i in a:
    restr=st(restr,i)
print(restr)
