---
layout: post
title: "failed when: gem install therubyracer"
date: 2016-11-10 00:55:00 +0800
comments: true
categories: tech
---
dong@ubuntu:~/octopress$ gem install therubyracer  

	ERROR:  Error installing therubyracer:
		invalid gem: package is corrupt, exception while verifying: undefined method `size' for nil:NilClass (NoMethodError) in /home/dong/.rvm/gems/ruby-2.3.1/cache/libv8-3.16.14.15-x86_64-linux.gem

corrupt:broken;the package is broken,so remove /home/dong/.rvm/gems/ruby-2.3.1/cache/libv8-3.16.14.15-x86_64-linux.gem,then,redownload and reinstall again,sucessed.
