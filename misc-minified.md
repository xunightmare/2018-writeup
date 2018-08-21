# misc-minified
## 看了别人的writeup，自己跟着做了一遍，具体的原理也不清楚，先记录一下如何操作

使用StegSolve.jar打开图片：
![](http://pdt2ibwo5.bkt.clouddn.com/201808212117_962.png)

然后保存`green plane 0`通道的图片，和`alpha plane 0`通道进行XOR，就能够得到flag
![](http://pdt2ibwo5.bkt.clouddn.com/201808212134_99.png)

后续会去了解详细的原理，希望能够弄懂
