---
layout: post
title: "改hosts文件，指定IP"
date: 2025-04-24 23:47:10 +0800
author: 丘海东 
tags: ip
comments: true
categories: tech
published: true
---
网站无法访问，则改hosts文件，指定IP  
到：[https://www.ipaddress.com](https://www.ipaddress.com/)，找到网站的IP  
```
sudo gedit /etc/hosts
```
格式：IP (空格) 域名，如：`140.82.114.36      ssh.github.com`
