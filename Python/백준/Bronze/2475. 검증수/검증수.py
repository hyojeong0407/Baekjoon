verification = map(int, input().split())

result = 0

for i in verification:
    result += i ** 2

print(result % 10)