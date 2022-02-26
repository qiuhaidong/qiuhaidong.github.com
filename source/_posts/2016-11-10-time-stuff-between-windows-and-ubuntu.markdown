---
layout: post
title: "windows10和Ubuntu双系统，时间不对"
date: 2016-11-10 21:37 +0800
categories: tech
---
[原博文](http://www.cnblogs.com/qf19910623/p/5559514.html)  

windows10和ubuntu16.04双系统，仍然出现了喜闻乐见的老问题，装完后，在windows下时区不对，之前的老办法是：  

    sudo gedit /etc/default/rcS
    utc=yes 改成 utc=no

然而并没有什么效果，ubuntu16.04里面根本就没有utc这一项！  
后来谷歌了半天找到了一个完美解决办法：  
先在ubuntu下更新一下时间，确保时间无误：  

    sudo apt-get install ntpdate
    sudo ntpdate time.windows.com

然后将时间更新到硬件上：  

    sudo hwclock --localtime --systohc

重新进入windows10，发现时间恢复正常了！
