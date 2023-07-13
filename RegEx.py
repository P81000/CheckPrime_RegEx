import re

def is_prime(n):
    return not re.match(r'^1?$|^(11+?)\1+$', '1' * n)

print(is_prime(10))  # False
print(is_prime(11))  # True
print(is_prime(12))  # False
print(is_prime(13))  # True