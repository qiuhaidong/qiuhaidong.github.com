---
layout: post
title: "博文页增加Recent Posts等侧边栏"
date: 2022-02-21T21:43:06+08:00
author: 丘海东
tags: octopress3.0
comments: true
categories: tech-octopress
---
博客根目录，文件`index.html`，找到`Recent Posts`这一大段内容，复制，打开`_layouts/post.html`，找到：  
```
    <div class="right">
        <div class="wrap">
```
复制到其后面。  

因为只复制一段老是有错，现在我是把`index.html`的`<div class="right">`右边栏一直到最后的内容，代替了`_layouts/post.html`右边栏一直到最后的内容。  
# 🤪😀
