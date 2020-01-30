import time
while 1:
    fc = 0
    ts = time.time()
    while time.time() - ts < 1:
        fc = fc + 1
    print(fc)