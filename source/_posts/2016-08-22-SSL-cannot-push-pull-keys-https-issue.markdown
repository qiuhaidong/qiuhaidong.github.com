---
layout: post
title: "路径权限错误，无法pull push: not read from remote repository. correct access rights and the repository exists."
date: 2016-08-22 16:58:26 +0800
comments: true
categories: tech-octopress
---
[SSH KEYS认证方式改动](https://help.github.com/articles/securing-your-github-pages-site-with-https/)
关于`git pull origin source`or`git push origin source`,若出错：  

    fatal: Could not read from remote repository. 
    Please make sure you have the correct access rights and the repository exists.

SSH keys不用动  

    gedit octopress/.git/config

把`url = git@github.com:qiuhaidong/qiuhaidong.github.com.git`  
改为`url = https://github.com/qiuhaidong/qiuhaidong.github.com.git`  
[参见此Blog，9楼](http://bbs.csdn.net/topics/390909877)  
done.  
`pull`or`push`时或会报错，但不影响功能，多用几次就好了。
