---
layout: post
title: "newpost error: libgedit-gtksourceview-WARNING, Failed to load style scheme file"
date: 2026-05-04 04:30:15 +0800
author: 丘海东 
tags: daily
comments: true
categories: personal
published: true
---
Ubuntu 26.04，新建blog提示错误：  

	dong@dong-Ubuntu:~$ ./newpost.sh 
	*********************

	(gedit:8630): libgedit-gtksourceview-WARNING **: 04:11:11.080: Failed to load style scheme file '/usr/share/libgedit-gtksourceview-300/styles/Yaru.xml': 第 3 行第 1 个字符出错： attribute 'version' invalid for element 'style-scheme'

	(gedit:8630): libgedit-gtksourceview-WARNING **: 04:11:11.081: Failed to load style scheme file '/usr/share/libgedit-gtksourceview-300/styles/Yaru-dark.xml': 第 3 行第 1 个字符出错： attribute 'version' invalid for element 'style-scheme'


找到这两个文件，先备份（到阿里云盘），然后把第二行的`version="1.0"`删除。  
![Yaru.xml, Yaru-dark.xml](https://wx3.sinaimg.cn/large/780bc50fgy1icsyi44l0gj213w0hmqch.jpg)
就不再提示错误了。  
如果以后出现其他问题，把它们改回来。


