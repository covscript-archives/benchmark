function test(n) {
    return n
}
for (; ;) {
    var fc = 0, ts = (new Date).getTime()
    while ((new Date).getTime() - ts < 1000) {
        test(100)
        ++fc
    }
    console.log(fc)
}