---
layout: post
title: "back to top返回頂部按鈕"
date: 2022-02-27 18:52:33 +0800
author: 丘海东 
tags: 
comments: true
categories: tech-octopress
---
[教程1](https://www.jianshu.com/p/fe0e089a985c)  
[教程2](https://www.cnblogs.com/biglucky/p/4148867.html)  

### 实现返回按钮功能
首先创建`source/javascripts/top.js`，添加如下代码实现滑动返回顶部效果:  

``` javascript
function goTop(acceleration, time)
{
        acceleration = acceleration || 1;  //加速度
        time = time || 16;  //时间间隔 (毫秒)

        var x1 = 0;
        var y1 = 0;
        var x2 = 0;
        var y2 = 0;
        var x3 = 0;
        var y3 = 0;

        if (document.documentElement)
        {
                x1 = document.documentElement.scrollLeft || 0;
                y1 = document.documentElement.scrollTop || 0;
        }
        if (document.body)
        {
                x2 = document.body.scrollLeft || 0;
                y2 = document.body.scrollTop || 0;
        }
        var x3 = window.scrollX || 0;
        var y3 = window.scrollY || 0;
        
        // 滚动条到页面顶部的水平距离
        var x = Math.max(x1, Math.max(x2, x3));
        // 滚动条到页面顶部的垂直距离
        var y = Math.max(y1, Math.max(y2, y3));

        // 滚动距离 = 目前距离 / 速度, 因为距离原来越小, 速度是大于 1 的数, 所以滚动距离会越来越小
        var speed = 1 + acceleration;
        window.scrollTo(Math.floor(x / speed), Math.floor(y / speed));

        // 如果距离不为零, 继续调用迭代本函数
        if(x > 0 || y > 0)
        {
                var invokeFunction = "goTop(" + acceleration + ", " + time + ")";
                window.setTimeout(invokeFunction, time);
        }
}
```

### 自定义返回按钮格式
创建`source/_includes/custom/totop.html`，设置返回顶部按钮样式和位置  
其中的`width、height、right、bottom`为图片在网页中的位置，可根据图片大小自行设定，示例代码如下：  

``` html
<!--返回顶部开始-->
<div id="full" style="width:30px; height:30px; position:fixed; right:13px; bottom:13px; z-index:100; text-align:center; background-color:transparent; cursor:pointer;">
<a href="#" onclick="goTop();return false;"><img src="/images/top.png" border=0 alt="返回顶部"></a>
</div>
<script src="/javascripts/top.js" type="text/javascript"></script>
<!--返回顶部结束-->
```

### 选择按钮图片
找到自己喜爱的返回按钮图片，命名为`top.png`后添加到`source/images`目录中（或修改`totop.html`中图片的路径），文件名和`totop.html`中的一致就可以了，可以自己命名。  

然后把`totop.html` 引入到文件中，考虑到进到具体每一篇blog里面也有这个功能，我们把这个文件在`foot.html`中引入，修改:`octopress/source/_includes/custom/footer.html`，添加一行：  
![octopress/source/_includes/custom/footer.html](http://r.photo.store.qq.com/psc?/V53xBhKC4JFvE03uTNAL1QWxNF3K6JJT/TmEUgtj9EK6.7V8ajmQrEMHNMi9RBV8SPCiQjrpiIVqTO0oBBa1zGSTDwX1cxXY1I0xQDhEyJNc9d2jqFOe5QAet0C9GvAgWzpRjxvDQ7Sc!/r)  

``` html
  {\% include custom/totop.html \%}  //记得去除两个\号
```

bug提醒：如果post文件中有上面这一行代码（没有\号），blog网站首页和这篇博文页，会有返回按钮图片错误
