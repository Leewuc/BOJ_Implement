def solution(a):
    bollon = [False]*len(a)
    
    x = 1e+9+1
    y = 1e+9+1
    
    for i in range(len(a)):
        if a[i] < x:
            x = a[i]
            bollon[i] = True
        
        if a[-1-i] < y:
            y = a[-1-i]
            bollon[-1-i] = True
        
    return sum(bollon)
