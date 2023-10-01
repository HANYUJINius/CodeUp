#CodeUp_python_6092.py

cnt = int(input())
num = list(map(int, input().split()))
student = [0] * 23

for i in num:
    student[i-1] += 1
    
for i in student:
    print(i, end = ' ')
