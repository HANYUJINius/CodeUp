#CodeUp_python_1278.py
n = int(input())

cnt = 0
while(n>0):
    cnt += 1
    n = int(n / 10)

print(cnt)
