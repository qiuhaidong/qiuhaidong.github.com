---
layout: post
title: "curl: (7) Failed to connect to raw.githubusercontent.com port 443 after 28 ms: 拒绝连接"
date: 2022-05-27 15:19:28 +0800
author: 丘海东 
tags: octopress2.0
comments: true
categories: tech-octopress
---
[问题解决：curl: (7) Failed to connect to raw.githubusercontent.com port 443: 拒绝连接](https://blog.csdn.net/u014375643/article/details/115826506)  
https://qiuhaidong.github.io/blog/2022/04/05/octopress2-on-ubuntu-22-dot-04/  
```
sudo apt install curl
curl -sSL https://get.rvm.io | bash -s stable
```
提示：  
```
curl: (7) Failed to connect to raw.githubusercontent.com port 443 after 28 ms: 拒绝连接
```
解决：  
[Failed to connect to raw.githubusercontent.com](https://blog.csdn.net/u014375643/article/details/115826506)  
到这个网址：`https://www.ipaddress.com/`，输入：`raw.githubusercontent.com`，查询，得到IP地址，选择其中一个或多个，修改本地HOSTS：Ubuntu下打开/etc/hosts，添加 IP地址：`185.199.108.133 raw.githubusercontent.com`，重试，不行就重启再试。  

