---
layout: post
title: "没有正确路径或权限上传，push"
date: 2022-01-10 22:42:18 +0800
comments: true
categories: tech-octopress 
---
代码如下：  


	dong@Ubuntu:~/octopress$ git push origin source

	ERROR: Repository not found.
	fatal: Could not read from remote repository.
	
	Please make sure you have the correct access rights and the repository exists.


打开文件~/octopress/.git/config，查看  

	[remote "origin"]
		url = git@github.com:haydnyau/haydnyau.github.io.git

我是改了几次，com.git和io.git搞错了  

[和我同样问题的网友](https://blog.csdn.net/weixin_40886892/article/details/80725071)  

[另一个网友的类似问题](https://blog.csdn.net/meng_lemon/article/details/88963157)
