#Mayo 29, 2020
#Reto Final Analisis y Diseno de Algoritmos
#nadia garcia

def suma(N = "1100100010101", M = "1111010011"):
    #Extra bit for carry
    n = [0]
    m = [0]
    ans = []
    res = ""

    #Create lists with numbers
    for num in N:
        n.append(int(num))
    for num in M:
        m.append(int(num))

    #Make them same size
    if( len(n) > len(m) ):
        for i in range(len(n) - len(m)):
            m.insert(0,0)
    else:
        for i in range(len(m) - len(n)):
            n.insert(0,0)

    carry = 0

    #first sum
    for i in range(len(n)):
        sum = n[i] + m[i]
        ans.append(sum)

    #sum normalization
    for i in range(1, len(ans) + 1):
        ans[-i] += carry
        if ans[-i] == -1:
            ans[-i] = 1
            carry = 1
        elif ans[-i] == 2:
            ans[-i] = 0
            carry = -1
        elif ans[-i] == 3:
            ans[-i] = 1
            carry = 1
        else:
            carry = 0

    #string concatenation
    for i in ans:
        res += str(i)

    return(int(res))

def main():

    #N = input()
    #M = input()
    print(suma())

main()
