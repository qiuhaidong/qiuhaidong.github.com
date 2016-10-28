---
layout: post
title: "install again"
date: 2016-10-28 02:22:00 +0800
comments: true
categories: tech
---
再一次安装，又有新的变化：  
安装git，直接`sudo apt-get install git`,不必添加安装源ppa。  
安装rvm，直接上官网查找命令，其实也就是安装最新版的rvm，而不是安装stable版的。  
ruby不再使用1.9.3的版本，自己上官网查一查，看最新的版本是多少就用多少，比如2.3.1。用旧版会导致很多gem依赖包无法安装。  
rubygems bundle install的网址也变化了，最新的是[Ruby China](https://gems.ruby-china.org)，可到最初的官网查看更改告示。
