---
layout: post
title: "Ubuntu启动问题 : no symbol table"
date: 2018-09-05 09:17:32 +0800
comments: true
categories: tech
---
[参见原博：error : no symbol table](https://askubuntu.com/questions/965070/no-symbol-table-error-after-upgrading-to-17-04)  
升级到ubuntu18.04后，开机出现：  

***error：no symbol table***  
***press any key to continue...***  

    sudo fdisk -l  

This will list all partitions on your HDD (find under Type section the Ubuntu or Linux and its Device (like `/dev/sda`)) then, do:  

    sudo grub-install /dev/sda  

note that is sda and NOT sda1  

    sudo update-grub  

    sudo reboot  
