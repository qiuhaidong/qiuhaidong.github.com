---
layout: post
title: "screen light"
date: 2016-11-19 11:53:44 +0800
comments: true
categories: tech
---
	sudo gedit /etc/default/grub
更改为：(斜黑体部分)  

GRUB_CMDLINE_LINUX_DEFAULT="quiet splash"  
GRUB_CMDLINE_LINUX="***acpi_osi=Linux***"  

(东哥：13.04、16.04按Fn有效调节)  

	sudo update-grub
