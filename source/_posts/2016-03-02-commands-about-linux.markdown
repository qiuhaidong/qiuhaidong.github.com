---
layout: post
title: "Commands about Linux"
date: 2016-03-02 21:26 +0800
categories: tech
---
2016-03-02 21:26  
shell: 命令行解释器  
Linux**命令格式**: 命令名 [选项] [参数1] [参数2] ……   
命令与参数之间，参数与参数之间用空格隔开  
立即**关机**:  `sudo shutdown-h now` 或者 `sudo halt` （Ubuntu不行，在最后画面不动,停机但不关电源）或者`sudo poweroff`  
立即**重启**:  `sudo shutdown-r now` (Ubuntu不行)或者 `sudo reboot`（行）  
`ls`  
`cd  dir`  
**复制**: `cp /.../.../sourcefile /.../.../targetfile` 有重命名的功能  
`cp file1 file2` #在当前目录为file1创建一个副本file2  
`cp file ~/target/` #复制当前目录下的file到主目录下的target目录中，保持原文件名  
`cp file1 file2 ~/target/` #把file1、file2俩个文件复制到target目录，保持原文件名  
-p: 保持文件属性 `cp -p file ~/target/`  
-R: 若被复制对象有目录，则把该目录下的子目录和子目录下的文件都复制  
**移动**: `mv` #有重命名的功能  
`mv file1 file2` #把file1重命名为file2  
`mv file1 file2 ~/target/` 把这两个文件都移动到…… #最后一个参数（/target/）必须是目录  
**创建目录**: `mkdir dir`  
**删除目录**: `rmdir dir`  (空目录)  
**删除文件**: `rm file`  
`rm`用于删除文件，若使用参数`-r`或`-R`，则可删除目录  
`-r`,`-R`:递归删除，无论目录下是否有东西  
`-i`: 删除前先询问  
`-f`: 强制删除  
`rm -i test*`: 删除所有文件名以test开头的文件  
`rm -rf test/`: 删除目录test,无论是否是空目录  
**超级用户**:`sudo su -`  
统计文件信息: `wc [-l] [-w] [-c] filename` (行数，单词数，字符数)  
`--version`  
`--help`  
`man`  
Linux中，一个文件是一组数据的集合，可理解为一个字符流或字节流，Linux并不为文件设计内部结构，而是把文件都理解为无结构的数据集合。  
所以:新建并打开文件可直接说编辑该文件即可（test.c文件之前并未存在）:  

    sudo gedit test.c

