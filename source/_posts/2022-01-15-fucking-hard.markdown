---
layout: post
title: 好艰难---把Gemfile和Gemfile.lock文件删除
date: 2022-01-15T02:48:34+08:00
tags: rough octopress3.0
comments: octopress3.0
categories: tech-octopress
---

怎么都不行  
用octopress3.0创建theme blog，可能因为
## 网络不行？

一直卡在那里，一动不动  
`bundle` 和 `bundle install` 也是一动不动  
这是没有成功的，后面会报错  
重复，直到ok  

## 对了，我把Gemfile和Gemfile.lock文件删除，就没报错了

正常来说，rvm安装ruby就行了，如果还不行，再用`apt` ubuntu官方源安装一次  

```
sudo apt install ruby
```

