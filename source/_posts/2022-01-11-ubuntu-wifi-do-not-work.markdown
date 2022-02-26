---
layout: post
title: "ubuntu 安装后wifi无法使用"
date: 2022-01-11 04:38:50 +0800
comments: true
categories: tech
---
### 原文件是ubuntu16.04安装了octopress2.0，升级到ubuntu18.04，新建此文件，可以运行，没报错，然后改成这个内容  
首先利用`rfkill`命令查看目前无线传输设备的状态，`rfkill`是一个命令行工具，可使用它查询和更改系统中启用了RFKill的设备。  

rfkill的常用方法为:  

	rfkill list all
	#  获得设备列表

	rfkill block [index|type]
	#  通过索引或类型禁用设备

	rfkill unblock [index|type]
	#  通过索引或类型启用设备

当前设备状态如下：  

	rfkill list all
	输出：
	0: phy0: Wireless LAN
		Soft blocked: no
		Hard blocked: yes
	1: acer-wireless: Wireless LAN
		Soft blocked: no
		Hard blocked: no

通过rfkill启用/禁用设备无法对硬件阻塞产生作用。  

由于笔记本只有一个无线网卡，这两个模块应该是有冲突  

使用命令lsmod | grep acer可以看出系统启动了acer_wmi模块  

通过查找资料后，解决方法为禁用acer_wmi模块。  



解决方法：

通过在/etc/modprobe.d/文件夹下，编辑blacklist.conf文件，最后一行添加内容：  `blacklist acer_wmi`  

	sudo gedit /etc/modprobe.d/blacklist.conf

重启  
wifi自动为打开状态，此时rfkill list all命令结果如下:

	rfkill list all
	
	0: phy0: Wireless LAN
	Soft blocked: no
	Hard blocked: no


版权声明：本文为CSDN博主「Monkey_D_Shuai」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/ls12165/article/details/68189943


[原文链接](https://blog.csdn.net/ls12165/article/details/68189943?spm=1001.2101.3001.6650.1&utm_medium=distribute.pc_relevant.none-task-blog-2~default~CTRLIST~default-1.no_search_link&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2~default~CTRLIST~default-1.no_search_link&utm_relevant_index=2)


[另一篇博文](https://blog.csdn.net/weixin_34305091/article/details/116951261?spm=1001.2101.3001.6650.1&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1.no_search_link&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1.no_search_link&utm_relevant_index=2)
