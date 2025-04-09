---
layout: post
title: "Ubuntu24.04 设置充电保护"
date: 2025-04-08 18:11:10 +0800
author: 丘海东 
tags: ubuntu-charge-protect
comments: true
categories: personal
published: true
---
**编辑这个文件，把数值0（关闭）改为1（开启充电保护模式），保存**  

	/sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode
	
编写一个battery-protect.sh脚本（名字随便），添加命令：  

    sudo gedit /sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode

把脚本添加到启动应用程序里（系统自带的，按win键找到），之后开机时，改数值为1  
<!--more-->



安装 TLP：**虽然我试过没什么作用**，***只能用来看看充电状态***  

    sudo apt install tlp
    sudo gedit /etc/tlp.conf
    
找到以下两行（Ctrl+F），取消注释（删除开头的#），然后根据需要更改数字(充电到百分之几)。  
**DG：改了也没什么作用**  

	START_CHARGE_THRESH_BAT0=70
	STOP_CHARGE_THRESH_BAT0=80
	
保存  
运行命令**检查充电状态** ：  
	
	sudo tlp-stat -b
	
![](https://storage.deepin.org/thread/202303052303521160_image.png)  

参考：
[如何在 Ubuntu 22.04 和 24.04 中设置电池充电限制](https://cn.linux-terminal.com/?p=7554)  
[笔记本充电阈值限制（以联想拯救者Y7000P2020H为例）](https://bbs.deepin.org/post/253376)  

