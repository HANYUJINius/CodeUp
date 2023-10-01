#CodeUp_python_6084.py

h, b, c, s = map(int,input().split())

total = h*b*c*s / 8/1024/1024

print("%.1f MB" %total)
