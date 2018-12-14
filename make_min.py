def com(a,b):
    return a+b
def stri(s,n):
    i=1
    re=''
    for tt in s:
        if i==n:
            i +=1
            continue
        re = com(re,tt)
        i +=1
    return re
def main(s):
    minn=s
    nn=1
    for ii in s:
        t=stri(s,nn)
        nn+=1
        if t<minn:
            minn=t
    return minn
inp=input()
inp=inp.split()
aa=inp[0]
no=int(inp[1])
for i in range(no):
    aa=main(aa)
print(aa)
    
