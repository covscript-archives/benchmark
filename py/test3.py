import time
def test(n):
    return n
while 1:
    fc = 0
    ts = time.time()
    while time.time() - ts < 1:
        test(100)
        fc = fc + 1
    print(fc)