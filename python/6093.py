#CodeUp_python_6093.py

cnt = int(input())
student = list(map(int, input().split()))
student.reverse()

for i in range(cnt):
    print(student[i], end = " ")
