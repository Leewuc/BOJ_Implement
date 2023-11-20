def solution(n, money):
    mem = [0]*(n+1)
    mem[0] = 1
    for i in money:
        for j in range(i,n+1):
            mem[j] += mem[j-i]
    answer = mem[n] % 1000000007
    return answer
