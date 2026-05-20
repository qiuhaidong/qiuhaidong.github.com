---
layout: post
title: "Ubuntu 26.04 开机引导项"
date: 2026-04-30 22:02:57 +0800
author: 丘海东 
tags: daily
comments: true
categories: personal
published: true
---
命令行升级（不是说这里有因果关系），Ubuntu26.04，之后想更改默认启动项，用下面的图形工具，报错。  
[Grub Customizer](https://qiuhaidong.github.io/blog/2025/04/07/boot-grub/)  
尝试改 `/etc/default/grub`，应用：`sudo update-grub`，还是报错。  
再回到图形工具，点击“还原”，（忘了要不要先保存一下），再重新改，  
**行了**。  
