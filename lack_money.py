def solution(price, money, count):
    x = (2*price+price*(count-1))*count/2
    if x <= money:
        return 0
    return x - money
