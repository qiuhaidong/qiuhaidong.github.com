---
layout: post
title: "windows本地浏览器没有启动 explorer do not start up on windows"
date: 2016-11-13 18:51 +0800
categories: tech
---
[原帖](https://zhidao.baidu.com/question/588254618.html)  
**DG works：**  
**打开系统组策略编辑器就是gpedit.msc，找到“用户配置”——“Windows设置”项——脚本（注销与登录）——登录（添加，将脚本路径改为Explorer.exe的路径，如：C:\windows\Explorer.exe）即可。这样在登录时系统会再加载一次Explorer.exe就可以显示出桌面了。但也有如我的状况，gpedit.msc打不开。**  



关于explorer.exe加载不了 无法显示任务栏与桌面解决办法  
Ctrl+Alt+Del打开“Windows任务管理器”，发现进程里没有Explorer.exe。说明系统启动时候没有加载Explorer.exe。(explorer是Windows程序管理器或者Windows资源管理器，它用于管理Windows图形壳，包括开始菜单、任务栏、桌面和文件管理。删除该程序会导致Windows图形界面无法适用。)  
点击“Windows任务管理器”-->“文件”-->“新建任务（运行……）”敲入Explorer.exe看看是否能够执行，如果不能执行说明系统的winnt目录下没有Explorer.exe这个文件或者Explorer.exe文件损坏。  
首先尝试下面的方法：  
1  
**打开系统组策略编辑器就是gpedit.msc，找到“用户配置”——“Windows设置”项——脚本（注销与登录）——登录（添加，将脚本路径改为Explorer.exe的路径，如：C:\windows\Explorer.exe）即可。这样在登录时系统会再加载一次Explorer.exe就可以显示出桌面了。但也有如我的状况，gpedit.msc打不开。**  
2  
打开注册表，找到子键“HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer”，新建“DWORD”值“NoDesktop”，其值为“1”。（这个是我在网上搜索的方法，为什么要使用这个健值我不清楚。）再检查注册表....HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winlogon\Shell 
看是否为explorer.exe，不是的话自己改.  

第一个，把Explorer加入进程：  
开始菜单→运行→输入“regedit”，回车→打开注册表内的HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run\项，在该项下新建一个名称为“Explorer.exe”的新字符串值，编辑该值，数据为你系统中Explorer.exe的位置。  
第二个，取消开机项目  
开始菜单→运行→输入“msconfig”，回车→在『启动』选项卡中，找到那个安装程序的对应的值（如果不知道就把一些没有必要的全部去掉），去掉前面的“√”，保存，退出。  
重启电脑。
