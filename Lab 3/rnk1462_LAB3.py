# Rohita Konjeti
# 1002141462
# 04-07-2026
# Linux

import os
operations={
    "+" : lambda a, b: a+b,"-" : lambda a, b: a-b,"*" : lambda a, b: a*b,"/" : lambda a, b: a/b,
}

def calculate(number):
    stack =[]
    for token in number.strip().split():
        if token.isdigit():
            stack.append(int(token))
        else:
            right=stack.pop()
            left=stack.pop()
            stack .append(operations[token](left,right))
    return stack[0]

#filePath= os.path.join(os.getcwd(), "input_RPN.txt")
filePath= os.path.join(os.path.split(__file__)[0], "input_RPN.txt")

with open(filePath, "r") as file:
    for line in file:
        if line.strip():
            print(calculate(line))