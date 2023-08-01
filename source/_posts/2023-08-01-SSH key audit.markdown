---
layout: post
title: "ERROR: We're doing an SSH key audit.Please visit to approve this key so we know it's safe."
date: 2023-08-01 01:16:09 +0800
author: 丘海东 
tags: octopress
comments: true
categories: tech
published: true
---
错误代码：  

	dong@Ubuntu:~$ ./launch.sh 
	ERROR: We're doing an SSH key audit.
	Reason: unverified automatically (private key found in a public repository)
	Please visit https://github.com/settings/keys/………………
	to approve this key so we know it's safe.
	
	Fingerprint:
	SHA256:......
	
	fatal: 无法读取远程仓库。

	请确认您有正确的访问权限并且仓库存在。

解决方法：  
重新生成 ssh key  
或者  
到Github账号里，https://github.com/settings/keys/...  Approve 验证原来的 ssh key




