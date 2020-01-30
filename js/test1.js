for (; ;) {
    var fc = 0, ts = (new Date).getTime()
    while ((new Date).getTime() - ts < 1000) {
        ++fc
    }
    console.log(fc)
}