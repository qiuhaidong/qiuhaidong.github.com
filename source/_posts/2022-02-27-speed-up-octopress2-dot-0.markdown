---
layout: post
title: "加速Octopress2.0，太慢了"
date: 2022-02-27 00:54:38 +0800
tags: octopress2.0
comments: true
categories: tech-octopress
---
## [原博](https://droidyue.com/blog/2014/06/22/fix-octopress-slow-loading-speed-issue-in-china-mainland/) 
## 清理没用的服务
以下修改均修改`_config.yml`,以下可以根据自己的需要进行去除。  

**去除Disqus评论**  
打开文件找到`Disqus Comments`，按照下面在每一行前面加#注释掉即可  

```
# Disqus Comments
#disqus_short_name: 
#disqus_show_comment_count: true
```

**去掉Github仓库展示**  

```
# Github repositories
#github_user: 
#github_repo_count: 
#github_show_profile_link: true
#github_skip_forks: true
```

**去除Twitter按钮**  
**去除Google+相关**  
**去除Pinboard服务**  
**去除Delicious评论,去除后可能没有评论系统**  
**去除Facebook Like**  

## 替换快速的请求资源
其实，真正解决加速的重要环节可能是这里，因为Octopress很多依赖于Google的库和资源。  

### 解决Google Analytics巨慢的问题
对于使用Google Analytics来说，加在ga.js这个文件简直是要命的慢，这里我使用自己存放在七牛CDN上的js.  http://droidyue-tools.qiniudn.com/ga.js 已验证，完全可以正常收集数据。  
参考如下，修改`source/_includes/google_analytics.html`  

```
 _gaq.push(['_trackPageview']);

 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src='http://droidyue-tools.qiniudn.com/ga.js';
 var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
 })();
   </script>
```
   
### 解决fonts.googleapis.com蜗牛慢
这里我们使用数字公司提供的Google Fonts大陆解决方案，使用`fonts.useso.com`替换`fonts.googleapis.com`。  
修改文件`/source/_includes/custom/head.html`  

```
 <!--Fonts from Google"s Web font directory at http://google.com/webfonts -->
<link href="http://fonts.useso.com/css?family=PT+Serif:regular,italic,bold,bolditalic" rel="stylesheet" type="text/css">
<link href="http://fonts.useso.com/css?family=PT+Sans:regular,italic,bold,bolditalic" rel="stylesheet" type="text/css">
```

### 解决ajax.googleapis.com慢的问题
修改`source/_includes/head.html`  

```
<script src="//ajax.useso.com/ajax/libs/jquery/1.9.1/jquery.min.js"></script>
<script>!window.jQuery && document.write(unescape('%3Cscript src="./javascripts/lib/jquery.min.js"%3E%3C/script%3E'))</script>
<script src="/javascripts/octopress.js" type="text/javascript"></script>
```

### 總結

导致网站慢的原因其实是加载Google的资源，当然我们不能怨Google.经过测试，使用数字公司的解决方法之后，国内国外访问速度都是可以的。这里还是推荐以下数字公司的这个解决方案http://libs.useso.com/
