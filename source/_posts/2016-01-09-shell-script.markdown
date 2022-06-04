---
layout: post
title: "pull push.sh shell脚本"
date: 2016-01-09 17:08
comments: true
categories: tech-octopress
---
[参见原博](https://github.com/qinjx/30min_guides/blob/master/shell.md)  

新建文本，扩展名为sh，扩展名并不影响脚本的执行，见名知意即可，若是用PHP编写，扩展名就用php  
终端下先执行：  

    rvm use 1.9.3

再执行脚本  
代码：  

    #!/bin/sh
    cd /home/dong/octopress
    git pull origin source
    rake generate deploy
    
保存即可(文件名为pull.sh)  
运行脚本，终端命令：  

    chmod +x pull.sh
    ./pull.sh
    
别漏了前面的符号.  

push.sh  

    #!/bin/sh
    cd /home/dong/octopress
    rake generate deploy
    git add .
    git commit -m 'update'
    git push origin source


或者建好后修改文件属性，权限，允许作为程序执行文件（ubuntu16.04）
