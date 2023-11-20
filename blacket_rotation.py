def solution(s):
    answer = 0
    for i in range(len(s)):
        x = s
        for j in range(len(x)):
            if x :
                x = x.replace('()','')
                x = x.replace('{}','')
                x = x.replace('[]','')
        if not x:
            answer += 1
        s = s[1:] + s[0]
    return answer
