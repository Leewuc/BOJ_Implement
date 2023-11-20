def solution(strings, n):
    answer = sorted(strings,key=lambda a : (a[n],a))
    return answer
