---
layout: post
title: "安装ruby2.6.9，Error running __rvm_make -j4"
date: 2022-04-05 22:22:58 +0800
author: 丘海东 
tags: octopress2.0
comments: true
categories: tech-octopress
---
```
rvm install 2.6.9
```
提示错误：  
```
Error running '__rvm_make -j4',
please read /home/dong/.rvm/log/1649165570_ruby-2.6.9/make.log

There has been an error while running make. Halting the installation.
......
```

**解决：**  

```
rvm pkg install openssl
rvm remove 2.6.9
rvm install 2.6.9 -C --with-openssl-dir=$HOME/.rvm/usr
```
