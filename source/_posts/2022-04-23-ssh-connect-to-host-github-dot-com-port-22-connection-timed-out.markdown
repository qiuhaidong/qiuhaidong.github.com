---
layout: post
title: "ssh: connect to host github.com port 22: Connection timed out"
date: 2022-04-23 01:55:21 +0800
author: 丘海东 
tags: ssh
comments: true
categories: tech-octopress
---
```
dong@Ubuntu:~$ ssh -T git@github.com
ssh: connect to host github.com port 22: Connection timed out
```
[解决 ssh: connect to host github.com port 22: Connection timed out](https://segmentfault.com/a/1190000040896781)  

[ssh: connect to host github.com port 22: Connection timed out](https://stackoverflow.com/questions/15589682/ssh-connect-to-host-github-com-port-22-connection-timed-out)  

如果你电脑上的git能在大部分地方进行同步，但是在某处地方的网络下无法同步，并且运行git pull或git push长久没有反映，最后出现ssh: connect to host github.com port 22: Connection timed out，很可能是你的网络供应商（比如广电网）在出口防火墙上屏蔽了22端口，这意味着你将无法访问其他主机的22端口。  
对此，github提供了一种解决方案，允许你使用443端口进行ssh连接，因为443端口是访问https网站所必须的，大部分防火墙都会允许通过，但如果使用代理服务器可能产生干扰。如果连443端口都被屏蔽，那你应该无法浏览这篇文章。  
运行这段命令，看看是否有成功提示，如果成功，则可以使用这个解决方案。  
```
ssh -T -p 443 git@ssh.github.com
```
简单地配置一下，让你每次ssh连接github都通过443端口。如果你使用Linux，在`~/.ssh/config`内(新建config文件，无后缀)，添加这些内容，指明ssh连接git@github.com或git@ssh.github.com走443端口。  
```
Host github.com
Hostname ssh.github.com
Port 443
User git #这行可能不需要也行
```

或者这一段：  
```
Host github.com
Hostname ssh.github.com
PreferredAuthentications publickey
IdentityFile ~/.ssh/id_rsa
Port 443
User git

Host gitlab.com
Hostname altssh.gitlab.com
PreferredAuthentications publickey
IdentityFile ~/.ssh/id_rsa
Port 443
User git
```

我的：把`config`文件复制到.ssh2和.ssh3文件夹  
改ssh2-3文件夹名，测试：  
```
ssh -T git@github.com
```
#### 如果443端口也失败，试试改hosts

[ssh: connect to host ssh.github.com port 443: Connection refused](https://qiuhaidong.github.io/blog/2022/05/26/ssh-connect-to-host-ssh-dot-github-dot-com-port-443-connection-refused/)
