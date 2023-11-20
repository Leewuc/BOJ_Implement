def solution(arr1, arr2):
    answer = [[a+b for a,b in zip(*x)] for x in zip(arr1,arr2)]
    return answer
