#functions have all of the operations with x and y as input

def additon(x,y):
    return x+y
def subtraction(x,y):
    return x-y
def multiplication(x,y):
    return x*y
def division(x,y):
    if y==0: #does a check for division by 0
        return "Invalid computation"
    return x/y

def values(inputs):
    while True:
        try:
            return float(input(inputs))
        except ValueError:
            print("Invalid number, please enter a new number")

def operation():
    # will promt a user for a valid input until they give one
    while True:
        symbol = input("Enter the symbol (+, -, *,/): ")
        if symbol in('+', '-','*','/'):
            return symbol
        print("Invalid number, please enter a new symbol (+, -, *,/).")

def calculator (x, symbol, y):#helps map the function to the symbol
    operation={'+': additon, 
               '-': subtraction,
               '*': multiplication,
               '/': division}
    return operation[symbol](x,y)

# prompts the user and gets input
x = values("Enter your first number")
symbol = operation()
y = values("Enter your second number")
print("The result is :", calculator(x, symbol, y))