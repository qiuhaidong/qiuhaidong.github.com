---
layout: post
title: "RVM用法"
date: 2022-03-26 02:37:09 +0800
author: 丘海东 
tags: rvm
comments: true
categories: rvm
---
[原文](https://cloud.tencent.com/developer/ask/34591)  
列出可用的ruby版本以安装类型：  

```
rvm list known
```

然后从已知的列表中安装，输入：  

```
rvm install VERSION_NUMBER
```

然后使用你已经安装的ruby版本：  

```
rvm use VERSION_NUMBER
```

你可以使一个特定的ruby版本成为你的默认系统版本：  

```
rvm use VERSION_NUMBER --default
```

要删除gem版本，保持gemsets：  

```
rvm uninstall VERSION_NUMBER
```

删除ruby等：  

```
rvm remove VERSION_NUMBER
```

要了解你的ruby环境以及它们的安装位置/别名：  

```
rvm info
```

