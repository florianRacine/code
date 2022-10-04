def kParmisN(k, n):
    print(k, " ", n)
    if (k==0):
        return 1
    elif (k>n):
        return 0
    else:
        return kParmisN(k-1,n-1)+kParmisN(k-1,n)

print(kParmisN(3,4))
