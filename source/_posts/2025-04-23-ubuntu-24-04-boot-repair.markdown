---
layout: post
title: "Ubuntu24.04 修复引导"
date: 2025-04-23 04:26:33 +0800
author: 丘海东 
tags: ubuntu-boot-repair
comments: true
categories: personal
published: true
---
[原文：Ubuntu引导修复grub](https://shuyeidc.com/wp/75597.html)  
1. 制作一个Ubuntu系统盘，try Ubuntu  

	sudo add-apt-repository ppa:yannubuntu/boot-repair
	sudo apt-get update
	sudo apt-get install boot-repair
	
注意，添加软件源才能安装  
打开软件，选择“推荐修复”，等待完成  
好了，开机  

	sudo update-grub

用grub customizer，调整一下
