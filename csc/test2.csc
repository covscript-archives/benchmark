constant factor = [](n) -> n > 1 ? n*self(n - 1) : n
loop
    var fc = 0, ts = runtime.time()
    while runtime.time() - ts < 1000
        factor(100)
        ++fc
    end
    system.out.println(fc)
end