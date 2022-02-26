---
layout: post
title: "Error: Jekyll-paginate 分頁功能錯誤，依赖缺失"
date: 2022-02-24T04:02:35+08:00
author: 丘海东
tags: octopress3.0
comments: true
categories: tech-octopress
---

## [原博：](https://gaohaoyang.github.io/)

## jekyll-paginate 依赖缺失

因为 jekyll 3 中默认安装已经没有这个分页组件了，官方把这个分页组件插件化了，因此要独立安装。详情见 [https://jekyllrb.com/docs/pagination/](https://jekyllrb.com/docs/pagination/)。

### 错误呈现

在启动 jekyll 服务的时候出现以下错误：

```
jekyll serve
Configuration file: c:/gitWorkSpace/blog-based-on-jekyll-3/_config.yml
  Dependency Error: Yikes! It looks like you don't have jekyll-paginate or one of its dependencies installed. In order to use Jekyll as currently configured, you'll need to install this gem. The full error message from Ruby is: 'cannot load such file -- jekyll-paginate' If you run into trouble, you can find helpful resources at http://jekyllrb.com/help/!
jekyll 3.1.2 | Error:  jekyll-paginate
```

### 解决方法

我们安装这个插件到本地即可。

```
gem install jekyll-paginate
Fetching: jekyll-paginate-1.1.0.gem (100%)
Successfully installed jekyll-paginate-1.1.0
Parsing documentation for jekyll-paginate-1.1.0
Installing ri documentation for jekyll-paginate-1.1.0
Done installing documentation for jekyll-paginate after 3 seconds
1 gem installed
```

