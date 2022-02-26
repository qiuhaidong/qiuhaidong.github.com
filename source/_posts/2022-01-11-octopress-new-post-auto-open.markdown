---
layout: post
title: "Octopress2.0 自动打开文件 插入本地图片 程序"
date: 2022-01-11 22:42:33 +0800
comments: true
categories: tech-octopress
---

[教程](http://blog.lessfun.com/blog/2013/12/05/config-the-octopress-blog-after-deployed/)  

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

![语法冲突，不能显示正确代码，看图片](https://qiuhaidong.github.io/images/%E8%87%AA%E5%8A%A8%E6%89%93%E5%BC%80-%E6%9C%AC%E5%9C%B0%E5%9B%BE%E7%89%87-%E7%A8%8B%E5%BA%8F.png)

![kobi t-mac](https://qiuhaidong.github.io/images/%E9%BA%A6%E8%BF%AA%E7%A7%91%E6%AF%94.jpg)

#### 前后行3个```显示代码，且有显示行数
 
```
c++
int main()
{
	cout<<"hello world"<<endl;
};

```

