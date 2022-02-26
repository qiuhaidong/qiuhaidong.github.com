---
layout: post
title: "update libreoffice by PPA"
date: 2013-11-15 00:32
comments: true
categories: tech
---
现在最新的LibreOffice套装版本是4.1。每一个后续的版本可以立即在4.1的仓库中找到，直到新的主线版本比如4.2的推出。  

所以，为了在Ubuntu中自动的升级，请添加下面的软件仓库地址。  

	sudo add-apt-repository ppa:libreoffice/ppa 

接着，运行如下命令来升级最新的LibreOffice。  

	sudo apt-get update && sudo apt-get dist-upgrade 


