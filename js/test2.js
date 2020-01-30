function factor(n) {
    return n > 1 ? n * factor(n - 1) : n
}
for (; ;) {
    var fc = 0, ts = (new Date).getTime()
    while ((new Date).getTime() - ts < 1000) {
        factor(100)
        ++fc
    }
    console.log(fc)
}