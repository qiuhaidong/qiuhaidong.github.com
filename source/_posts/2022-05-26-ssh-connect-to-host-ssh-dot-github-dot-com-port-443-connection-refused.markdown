---
layout: post
title: "ssh: connect to host ssh.github.com port 443: Connection refused"
date: 2022-05-26 14:21:22 +0800
author: 丘海东 
tags: ssh
comments: true
categories: tech-octopress
---
出现标题问题，打开：[IPAddress.com](https://www.ipaddress.com/) ，有时会出现403禁止访问的错误，要点一下`Go to Homepage`才行。输入：`ssh.github.com`，得到IP地址：  
`140.82.113.36`  
`140.82.114.35`  
修改本地hosts：  
```
cd /etc
sudo gedit hosts
```
添加：  
```
140.82.113.36          ssh.github.com
140.82.114.35          ssh.github.com
```
![](http://r.photo.store.qq.com/psc?/V53xBhKC4JFvE03uTNAL1QWxNF3K6JJT/bqQfVz5yrrGYSXMvKr.cqWdkQXFWB88lLNe9b.pKPd.bOkeCQ1XnXqIwv6SR2DItDkSBuzvyRWfXmXV4k8yccpRrk38TrDNSADQdQqoUnfE!/r)

#### 22端口无法连接：
[ssh: connect to host github.com port 22: Connection timed out](https://qiuhaidong.github.io/blog/2022/04/23/ssh-connect-to-host-github-dot-com-port-22-connection-timed-out/)  

[curl: (7) Failed to connect to raw.githubusercontent.com port 443: 拒绝连接](https://blog.csdn.net/u014375643/article/details/115826506)
