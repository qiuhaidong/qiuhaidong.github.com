---
layout: post
title: "install chrome"
date: 2014-04-26 18:09:48 +0800
comments: true
categories: tech
---
在tweak里安装，chromium偶尔有问题，还是用 chrome stable好  

2015.3.6  

	wget https://dl.google.com/linux/direct/google-chrome-stable_current_i386.deb
	sudo dpkg -i google-chrome-stable_current_i386.deb

如果提示缺失依赖包，执行：  

	sudo apt-get install -f

done.
