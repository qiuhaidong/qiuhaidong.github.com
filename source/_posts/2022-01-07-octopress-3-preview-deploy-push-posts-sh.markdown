---
layout: post
title: "Octopress 3.0 脚本运行 build  preview  deploy  push-posts .sh文件"
date: 2022-01-07 06:34:42 +08:00
comments: true
categories: tech
---

preview.sh代码  

	#!/bin/sh
	cd /home/dong/haydnyau
	jekyll build #生成
	jekyll serve
	
=================================
	
deploy.sh代码  

	#!/bin/sh
	cd /home/dong/haydnyau
	jekyll build
	octopress deploy
	
=================================

（不行，这个会造成有些blog页面头尾显示不全）发布，并上传/_posts/源文件，deploy.sh 代码  

	#!/bin/sh
	cd /home/dong/haydnyau
	jekyll build
	mv _posts/ _site/
	octopress deploy
	mv _site/_posts/ .
	
注意这个点 "."
`.` 或者 `./` 表示当前目录
