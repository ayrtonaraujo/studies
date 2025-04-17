def teste(n):
    if n <= 0:
        return n
    print(n)
    return n * teste(n-1)

teste(10)