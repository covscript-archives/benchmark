import test4
loop
    var fc = 0, ts = runtime.time()
    while runtime.time() - ts < 1000
        test4.hello()
        ++fc
    end
    system.out.println(fc)
end