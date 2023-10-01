#CodeUp_python_6086.py

num = int(input())
sum = 0

for i in range(1, num+1):
    sum += i
    if sum >= num:
        break

print(sum)
