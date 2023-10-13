#CodeUp_python_1173.py
h , m = map(int, input().split())

if h == 0:
    if m >= 30:
        m -= 30
    else:
        h = 23
        m += 30
elif h <= 23:
    if m >= 30:
        m -= 30
    else:
        h -= 1
        m += 30

print("%d %d" %(h,m))
