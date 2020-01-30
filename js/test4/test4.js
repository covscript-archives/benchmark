test4=require("./build/Release/test4.node")
for (; ;) {
    var fc = 0, ts = (new Date).getTime()
    while ((new Date).getTime() - ts < 1000) {
        test4.hello()
        ++fc
    }
    console.log(fc)
}