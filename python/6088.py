#CodeUp_python_6088.py

a, d, n = map(int, input().split())
num = a

i = 1
while(i!=n):
    num += d
    i+=1
    
print(num)
