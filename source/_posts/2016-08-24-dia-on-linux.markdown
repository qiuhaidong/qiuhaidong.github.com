---
layout: post
title: "dia on linux"
date: 2016-08-24 22:46:45 +0800
comments: true
categories: tech
---
DIA,流程图绘制软件  
install:  

    sudo apt-get install dia
    
关于输入中文:  

    sudo vim /usr/bin/dia
    
把`dia-normal --integrated "$@"`注释掉，在前面加`#`  

在下面添加:  

    dia-normal "$@"
    
![dia](https://raw.githubusercontent.com/qiuhaidong/qiuhaidong.github.com/source/source/images/dia.png)
