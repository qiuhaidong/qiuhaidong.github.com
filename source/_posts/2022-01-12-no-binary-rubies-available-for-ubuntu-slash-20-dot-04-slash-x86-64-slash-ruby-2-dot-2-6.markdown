---
layout: post
title: "No binary rubies available for: ubuntu/20.04/x86_64/ruby-2.2.6"
date: 2022-01-12 19:03:01 +0800
comments: true
categories: tech
---


[No binary rubies available for: ubuntu/20.04/x86_64/ruby-2.2.6;;Error running requirements_debian_libs_install libssl1.0-dev](https://blog.csdn.net/qq_41988167/article/details/106202868)  

原博内容：  

rvm安装低版本ruby报错Error running ‘requirements_debian_libs_install libssl1.0-dev’,Requirements installation failed with status: 100.  

由于参与的一个项目在用2.3.1版本的ruby，所以想用rvm来安装ruby2.3.1。运行报错，需要libssl1.0-dev.  
解决办法：  

- 运行

```
sudo gedit /etc/apt/sources.list
```

在`/etc/apt/sources.list` 中添加下载源 `deb http://security.ubuntu.com/ubuntu bionic-security main`。保存退出。  

- 更新

```
sudo apt update
```

- 安装 

```
apt-cache policy libssl1.0-dev  #（这步我没有做，先不做）
```

然后再安装`rvm install 2.2.6`  

————————————————  
版权声明：本文为CSDN博主「会打滚的咸鱼」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_41988167/article/details/106202868
