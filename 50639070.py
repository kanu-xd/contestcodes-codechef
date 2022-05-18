# cook your dish here
import math
try:

    T = int(input())
    for i in range(T):
        N = int(input())
        ar = list(map(int, input().split()))
        
        count_odd = 0
        count_even = 0
        
        for num in ar:
            if num % 2:
                count_odd += 1
            else:
                count_even += 1
        
        num_odd = math.ceil(N/2)
        num_even = math.floor(N/2)
        
        maximum_value = min(count_odd, num_even) + min(count_even, num_odd)
        
        print(maximum_value)
except EOFError as e:
    print(end="")