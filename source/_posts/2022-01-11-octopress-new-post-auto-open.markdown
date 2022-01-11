---
layout: post
title: "octopress 自动打开编辑 插入本地图片 程序"
date: 2022-01-11 22:42:33 +0800
comments: true
categories: tech-octopress
---
### 自动打开文件编辑

`rake new_post["file name"]`后自动打开对应的markdown文件  

`Rakefile`文件，上面位置，添加定义：  

	editor = "gedit"
	
然后在`new_post`命令后面添加：  

	  if #{editor}
	    system "#{editor} #{filename}"
	  end
	  
	  
### 插入本地图片

将图片放到`octopress/source/images/`下，然后在Markdown文件中直接引用即可。也可以直接引用网络上的图片。  

为了方便管理，可以在images下对自己添加的图片建立目录区分，比如：`images/2013/12`。  

语法与插入超链接类似：  

	格式显示有问题，请看原文，或下面的图片{% img /images/麦迪科比.jpg %}
	
{% img /images/自动打开-本地图片-程序.png %}

{% img /images/麦迪科比.jpg %}


### test code in blog
看原文  

```
c++
int main()
{
	cout<<"hello world"<<endl;
};

```














