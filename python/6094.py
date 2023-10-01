#CodeUp_python_6094.py

cnt = int(input())
student = list(map(int, input().split()))
min = student[0]

for i in student:
    if i < min:
        min = i

print(min)
