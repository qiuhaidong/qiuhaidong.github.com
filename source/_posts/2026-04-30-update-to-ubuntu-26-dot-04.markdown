---
layout: post
title: "用命令行升级到Ubuntu 26.04"
date: 2026-04-30 21:34:30 +0800
author: 丘海东 
tags: daily
comments: true
categories: personal
published: true
---
参考：[如何优雅地升级到 Ubuntu 26.04 LTS](https://www.bilibili.com/opus/1194724902391775251)  
Ubuntu 25.10系统可以立即升级（有时要等待几天，分批推送），而Ubuntu 24.04 LTS系统将在Ubuntu 26.04.1发布后获得标准升级路径。  
### 首先，最重要的：备份。   
然后，先更新现有系统到最新：  

	sudo apt update
	sudo apt upgrade
	
开始版本升级，请运行：  

	sudo do-release-upgrade
	
如果Ubuntu尚未提供新版本（尚未推送），请遵循您当前版本的标准支持发布流程。  

但您想立即升级，可以添加 -d 参数强制检查开发/发布版本：  

	sudo do-release-upgrade -d
	
该工具将禁用第三方仓库，将apt源更新为指向Ubuntu 26.04的仓库，并开始下载所需的软件包。在此过程中，您将多次收到提示。当询问服务是否应自动重启时，输入 y。当询问配置文件时，如果您没有进行自定义更改，则输入 Y以接受软件包维护者的版本；否则保留您的当前版本以避免丢失自定义设置。  

升级过程在一个GNU screen会话中运行，如果连接断开，它会自动重新附加。此过程可能需要一段时间，具体取决于软件包数量、您的硬件和互联网速度。  

安装完新软件包后，工具会询问是否要删除过时的软件。输入 d以先查看列表，或输入 y以继续删除。  

当升级完成时，系统会提示您重新启动系统。输入 y以重启并完成升级。  

验证升级，系统启动后，登录并检查Ubuntu版本：  

	lsb_release -a
	
确认内核版本：  

	uname -r
