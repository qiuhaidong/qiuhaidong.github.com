---
layout: post
title: "SSH Keys and HTTPS"
date: 2016-08-22 16:58:26 +0800
comments: true
categories: 
---
[SSH KEYS失效？](https://help.github.com/articles/securing-your-github-pages-site-with-https/)
关于`git pull origin source`or`git push origin source`,若出错：  
<<<<<<< HEAD

    fatal: Could not read from remote repository. 
    Please make sure you have the correct access rights and the repository exists.
SSH keys不用动  

    gedit octopress/.git/config
把`url = git@github.com:qiuhaidong/qiuhaidong.github.com.git`  
改为`url = https://github.com/qiuhaidong/qiuhaidong.github.com.git`  
done.
=======
>>>>>>> 4988377e8fbbfbbfa01330d42d840ffa33e16012

    fatal: Could not read from remote repository. 
    Please make sure you have the correct access rights and the repository exists.
SSH keys不用动  

    gedit octopress/.git/config
把`url = git@github.com:qiuhaidong/qiuhaidong.github.com.git`  
改为`url = https://github.com/qiuhaidong/qiuhaidong.github.com.git`  
done.
