def memoize(f):
    memo = {}
    def helper(x):
        if x not in memo:            
            memo[x] = f(x)
        return memo[x]
    return helper

@memoize
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)