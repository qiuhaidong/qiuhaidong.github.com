---
layout: post
title: "ssh: connect to host ssh.github.com port 443: Connection refused"
date: 2022-05-26 14:21:22 +0800
author: 丘海东 
tags: ssh
comments: true
categories: tech-octopress
---
出现标题问题，打开：https://www.ipaddress.com/ ，输入：ssh.github.com，得到IP地址：140.82.113.36  
修改本地hosts：  
```
cd /etc
sudo gedit hosts
```
添加：  
```
140.82.113.36          ssh.github.com
```
![](http://r.photo.store.qq.com/psc?/V53xBhKC4JFvE03uTNAL1QWxNF3K6JJT/bqQfVz5yrrGYSXMvKr.cqZo6WH1X5zq1scrqswOm8fS9l09Mi6H.MbrsVf*fxbUulZKAQcvk4*w7*HR1XLeSYSUhil9pvoSNH*DWt32gRPw!/r)
