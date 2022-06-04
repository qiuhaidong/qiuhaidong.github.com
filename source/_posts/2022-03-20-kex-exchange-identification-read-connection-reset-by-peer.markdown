---
layout: post
title: "kex_exchange_identification: read: Connection reset by peer"
date: 2022-03-20 10:32:48 +0800
author: 丘海东 
tags: ssh
comments: true
categories: tech-octopress
---
有時會出現標題的錯誤，ssh無法連接服務器，試過網上的幾種方法都不行，其實是國內網絡經常封鎖github，過段時間就好了。  
update:  
#### 1. 收到邮件：  
GitGuardian检测到您的GitHub帐户中暴露了以下OpenSSH私钥。  
GitGuardian has detected the following OpenSSH Private Key exposed within your GitHub account.  
新建key即可。  
#### 2. 如果把SSH key上传到仓库，会提示安全验证：
```
ERROR: We're doing an SSH key audit.
Reason: unverified automatically (private key found in a public repository)
Please visit https://github.com/settings/keys/********
to approve this key so we know it's safe.

Fingerprint:
SHA256:***********************************************

fatal: 无法读取远程仓库。

请确认您有正确的访问权限并且仓库存在。
```

