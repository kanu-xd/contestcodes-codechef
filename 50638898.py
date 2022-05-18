# cook your dish here
try:
    T = int(input())
    for i in range(T):
     n, a, b = map(int, input().split())
    
     string = input()
    
     count_1 = string.count('1')
     count_0 = string.count('0')
    
     total_cost = count_1 * b + count_0 * a
     print(total_cost)
except EOFError as e:
    print(end="")