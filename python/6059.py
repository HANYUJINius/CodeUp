#CodeUp_python_6079.py

num = int(input())
sum = 0

for i in range(1,num):
    sum += i
    if sum >= num:
        break
print(i)
