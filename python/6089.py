#CodeUp_python_6089.py

a, r, n = map(int, input().split())
num = a

i = 1
while(i!=n):
    num *= r
    i+=1
    
print(num)
