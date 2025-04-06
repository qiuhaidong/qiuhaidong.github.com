---
layout: post
title: "windows11和Ubuntu24.04双系统，时间不对"
date: 2025-04-07 06:59:28 +0800
author: 丘海东 
tags: daily
comments: true
categories: personal
published: true
---

[新博文](https://blog.csdn.net/weixin_42066135/article/details/144369653)  

先在ubuntu下更新一下时间，确保时间无误：  

    sudo apt-get install ntpdate
    sudo ntpdate time.windows.com

简单来说，在Ubuntu24.04中，hwclock已经被淘汰了，并采用了timedatectl去代替它。 因此我们可以在联网状态中使用下列代码实现Ubuntu与Windows的时间同步。  

    sudo timedatectl set-local-rtc 1

