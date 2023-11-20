def solution(genres, plays):
    answer = []
    cnt = {}
    ii = {}
    for idx,(g,p) in enumerate(zip(genres,plays)):
        if g not in cnt:
            cnt[g] = p
            ii[g] = [(p,idx)]
        else:
            cnt[g] += p
            ii[g].append((p,idx))
    a = []
    for i in cnt:
        a.append((cnt,i))
    a.sort(reverse=True)
    for e,i in enumerate(a):
        ii[i[1]].sort(key=lambda x: (-x[0],x[1]))
        if len(ii[i[1]]) == 1:
            answer.append(ii[i[1]][0][1])
        else:
            for j in range(2):
                answer.append(ii[i[1]][j][1])
    return answer
