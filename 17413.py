from collections import deque
ch = input() + '\n'
stack = deque()
rst = ''
flag = False
for i in ch:
    if not flag:
        if i == '\n' or i == ' ':
            while stack:
                rst += stack.pop()
            rst += ' '
        else:
            if i == "<":
                while stack:
                    rst += stack.pop()
                flag = True
            stack.append(i)
    else:
        flag = True
        stack.append(i)
        if i == ">":
            while stack:
                rst += stack.popleft()
            flag = False
print(rst)
