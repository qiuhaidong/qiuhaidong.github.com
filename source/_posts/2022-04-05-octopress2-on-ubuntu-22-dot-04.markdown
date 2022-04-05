---
layout: post
title: "Ubuntu 22.04安装Octopress 2.0和3.0"
date: 2022-04-05 22:03:16 +0800
author: 丘海东 
tags: octopress2.0
comments: true
categories: tech-octopress
---
以后重装系统，记得把octopress、haydnyau、ssh2、ssh3文件夹、.gitconfig，打包备份，并上传网盘。  
### Octopress 2.0
```
git --version
sudo apt install git
```
然后配置git，把之前的octopress-haydnyau和ssh2-ssh3文件夹和.gitconfig文件复制到主目录，改ssh文件夹名，`ssh -T git@github.com`，ok  
```
python2 --version
sudo apt install python2

ruby --version
```
没有  
到rvm官网  
```
gpg2 --recv-keys 409B6B1796C275462A1703113804BB82D39DC0E3 7D2BAF1CF37B13E2069D6956105BD0E739499BDB
```
提示：  
```
Command 'gpg2' not found, but can be installed with:
sudo apt install gnupg2
```
```
sudo apt install gnupg2
gpg2 --recv-keys 409B6B1796C275462A1703113804BB82D39DC0E3 7D2BAF1CF37B13E2069D6956105BD0E739499BDB

curl -sSL https://get.rvm.io | bash -s stable
```
提示：  
```
Command 'curl' not found, but can be installed with:
sudo apt install curl
```
```
sudo apt install curl
curl -sSL https://get.rvm.io | bash -s stable
```
提示：  
```
curl: (7) Failed to connect to raw.githubusercontent.com port 443 after 28 ms: 拒绝连接
```
解决：  
[Failed to connect to raw.githubusercontent.com](https://blog.csdn.net/u014375643/article/details/115826506)  
到这个网址：`https://www.ipaddress.com/`，输入：`raw.githubusercontent.com`，查询，得到IP地址，选择其中一个或多个，修改本地HOSTS：Ubuntu下打开/etc/hosts，添加 IP地址：`185.199.108.133 raw.githubusercontent.com`，重试，不行就重启再试。  
```
curl -sSL https://get.rvm.io | bash -s stable
```
提示：  
```  
* To start using RVM you need to run `source /home/dong/.rvm/scripts/rvm`
    in all your open shell windows, in rare cases you need to reopen all shell windows.
Thanks for installing RVM
```
```
source /home/dong/.rvm/scripts/rvm
```
重启命令行  
```
rvm --version
rvm install 2.6.9
```
提示错误：  
```
Error running '__rvm_make -j4',
please read /home/dong/.rvm/log/1649165570_ruby-2.6.9/make.log

There has been an error while running make. Halting the installation.
......
```

**解决：**  

```
rvm pkg install openssl
rvm remove 2.6.9
rvm install 2.6.9 -C --with-openssl-dir=$HOME/.rvm/usr
```
```
ruby --version
rvm use 2.6.9 --default

gem install bundler
bundle install
```
[更改sass-convert](https://qiuhaidong.github.io/blog/2022/03/26/you-can-use-the-sass-convert-command-to-automatically-fix-most-cases/)
  
```
rake generate
......
```
之后就都是常规操作。  



### Octopress 3.0

安装好Octopress 2.0之后，其他的依赖都安装好了，只需要：  
```
gem install octopress
```
好了。
