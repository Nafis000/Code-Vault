n = int(input())

for i in range(n):
    x = int(input())

    if x == 0:
        print("Fib(0) = 0")
        continue
    elif x == 1:
        print("Fib(1) = 1")
        continue

    fib1 = 0
    fib2 = 1

    for j in range(x-1):
        fib1, fib2 = fib2, fib1+fib2

    print(f'Fib({x}) = {fib2}')