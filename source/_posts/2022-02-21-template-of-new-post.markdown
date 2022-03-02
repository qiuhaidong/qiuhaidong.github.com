---
layout: post
title: "新建post文件的“头文件”"
date: 2022-02-21T04:39:45+08:00
tags: octopress3.0
author: 丘海东
comments: 
categories: tech-octopress
---
在根目录新建一文件夹`_templates`，文件夹里建一个文件`post`，无后缀，内容是：  
***注意，格式问题，显示有问题，参见原文件***  
---  
layout: {{ layout }}  
title: "{{ title }}"  
date: {{ date }}  
author:  
tags:   
comments: true  
categories:   
---
