from math import factorial
def solution(n, k):
    answer = []
    num = [i for i in range(1,n+1)]
    while not n == 0:
        fn = factorial(n) // n
        index = k // fn if k % fn else k // fn -1
        answer.append(num.pop(index))
        n,k = n-1,k%fn
    return answer
