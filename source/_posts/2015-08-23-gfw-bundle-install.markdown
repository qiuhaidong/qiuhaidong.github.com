---
layout: post
title: "GFW rubygems bundle install"
date: 2015-08-23 01:16:00 +0800
comments: true
categories: tech
---

2022-01-05:最新网址：https://gems.ruby-china.com/  
**这个不行了**：2016-10-28:最新网址：https://gems.ruby-china.org **这个不行了**  
封网，rubygems.org 不行了  
`bundle install`  自然也不行  
点算？  
https://gems.ruby-china.com/ 是一个完整的 rubygems.org 镜像，用以代替官网  
用法：  

	gem sources --remove https://rubygems.org/
	gem sources -a https://gems.ruby-china.com/
	gem sources -l

输出：  

	*** CURRENT SOURCES ***  

	https://gems.ruby-china.com  

确保只有 https://gems.ruby-china.com/  

###但是这样也不行，还得到octopress文件夹，打开Gemfile文件，编辑：  

        source "https://gems.ruby-china.com"

Ubuntu 14.04，安装octopress,执行  

	bundle install
		
一直提示缺少各种 gem 包，例如：  

	```
	Gem::RemoteFetcher::FetchError: SSL_connect SYSCALL returned=5 errno=0 state=unknown state (https://rubygems.global.ssl.fastly.net/gems/safe_yaml-1.0.4.gem)
	An error occurred while installing safe_yaml (1.0.4), and Bundler cannot continue.
	Make sure that `gem install safe_yaml -v '1.0.4'` succeeds before bundling.

	```

按提示输入命令 `gem install safe_yaml -v '1.0.4'` 安装依赖项，但是安装了一个又一个，一个又一个，实在太多太慢太麻烦了  

解决方法：  

修改octopress文件夹里的Gemfile文件：  

把：  
`source "https://rubygems.org"`  
改为：  
`source "https://gems.ruby-china.com"`  
再执行：  

	bundle install

完美通过。	
