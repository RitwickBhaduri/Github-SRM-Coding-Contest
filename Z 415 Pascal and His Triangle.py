def printPascal(n):  
    for l in range(0,n):
        for i in range(0,l+1) : 
            print(binomialCoeff(l,i),"",end="") 
        print()
def binomialCoeff(n,k): 
    r=1
    if(k>n-k): 
        k=n-k 
    for i in range(0,k): 
        r=r*(n-i) 
        r=r//(i+1) 
    return r 
n = int(input())
printPascal(n) 
