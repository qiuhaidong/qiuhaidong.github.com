---
layout: post
title: "how to ‘git’ Octopress"
date: 2015-08-25 13:58:37 +0800
comments: true
categories: tech
---
如何为已经存在于Github上的Octopress搭建本地环境  
大部分步骤和全新搭建时差不多，这里只列出不同的那几步  
···安装其他···  
clone `source` 分支：  

    git clone -b source git@github.com:username/repositoryname.git octopress
    
换成我的具体命令就是:  

    git clone -b source git@github.com:qiuhaidong/qiuhaidong.github.com.git octopress
    
clone `master` 分支：  
`master` 分支存放在 `_deploy`目录  

    cd octopress
    git clone git@github.com:username/repositoryname.git _deploy
    
具体命令：  

    git clone git@github.com:qiuhaidong/qiuhaidong.github.com.git _deploy
    
···其他步骤···  
另个重要命令：  
拉取：  

    cd octopress
    git pull origin source
    cd _deploy
    git pull origin master
    
推送：  

    cd octopress
    git add .
    git commit -m 'my message'
    git push origin source
