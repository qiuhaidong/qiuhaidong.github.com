---
layout: post
title: "octopress 自动打开文件 插入本地图片 程序"
date: 2022-01-11 22:42:33 +0800
comments: true
categories: tech-octopress
---

### 添加功能：自动打开文件编辑
`rake new_post["file name"]` 后自动打开博客文件  
编辑`Rakefile`文件，上面位置，添加定义：  
```
	editor = "gedit"
```
然后在`new_post`命令后面添加：  
```
if #{editor}
  system "#{editor} #{filename}"
end
```
	  	  
### 插入本地图片
将图片放到`octopress/source/images/`下，然后在Markdown文件中可直接引用，用法：  

	格式显示有问题，请看原文，或下面的图片{% img /images/麦迪科比.jpg %}
	
{% img /images/自动打开-本地图片-程序.png %}  
{% img /images/麦迪科比.jpg %}  

#### 前后行3个```显示代码，且有显示行数
 
```
c++
int main()
{
	cout<<"hello world"<<endl;
};

```

