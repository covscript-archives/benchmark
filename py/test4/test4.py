import test4
import time
while 1:
    fc = 0
    ts = time.time()
    while time.time() - ts < 1:
        test4.hello()
        fc = fc + 1
    print(fc)