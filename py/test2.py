import time
def factor(n):
    if n > 1:
        return n*factor(n - 1)
    else:
        return n
while 1:
    fc = 0
    ts = time.time()
    while time.time() - ts < 1:
        factor(100)
        fc = fc + 1
    print(fc)