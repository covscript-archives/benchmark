loop
    var fc = 0, ts = runtime.time()
    while runtime.time() - ts < 1000
        ++fc
    end
    system.out.println(fc)
end