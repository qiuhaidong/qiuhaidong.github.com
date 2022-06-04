---
layout: post
title: "SQL2000:某个程序安装已在安装计算机上创建挂起的文件操作"
date: 2016-09-03 19:16:20 +0800
comments: true
categories: tech
---
1. 在添加/删除程序中彻底删除sql server
2. 将没有删除的sql server目录也删除掉
3. 打开注册表编辑器，在HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager中找到PendingFileRenameOperations项目，并删除它。这样就可以清除安装暂挂项目
4. 删除注册表中跟sql server相关的键

*或者使用:SQL安装挂起解决工具免安装版.exe*  
**DG：在安装盘C或D，搜索sql，会看到一个关于sql的编辑注册表项——SQL2000安装挂起.reg**
