E = 0.005
'''' you have to input function in this format:
2x^3=== 2*x**3

an example:
2*x**3-8*x**3+9*x+9 ..this is function 2x^3-8x^2+9x+9



'''
s = input("give me function : ")
# print(s)
a, b = map(float, input("give a,b : ").split())


def fn(x):
    return eval(s)


if fn(a)*fn(b) >= 0:
    print("Wrong Interval")
else:
    while abs(b-a) >= E:
        x = (a+b)/2
        if abs(fn(x)) < E:
            break
        elif fn(x)*fn(b) > 0:
            b = x
        else:
            a = x


x = (a+b)/2
print("Root: ", x)
