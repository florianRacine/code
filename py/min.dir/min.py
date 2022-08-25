def min(L):
    m = L[0]
    iM = 0
    for i in range(1,len(L)):
        if (L[i] < m):
            m = L[i]
            iM = i
    return (m, iM)

M = [1, 3, 9, 0, 3]
m, iM = min(M)

print("min = ", m, " iMin = ", iM)
