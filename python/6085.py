#CodeUp_python_6085.py

w, h, b = map(int, input().split())

total = w*h*b/8/1024/1024

print("%.2f MB" %total)
