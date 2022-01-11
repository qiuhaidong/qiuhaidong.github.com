---
layout: post
title: "侧边栏增加分类 category"
date: 2022-01-10 23:00:59 +0800
comments: true
categories: tech-octopress
---

### 三步

## Step 1

### 添加 `category_list` 插件  

在 `octopress\plugins\` 文件夹里面，新建一个文件，名为：`category_list_tag.rb`。并将下面的代码粘贴到里面。  

	module Jekyll
	  class CategoryListTag < Liquid::Tag
	    def render(context)
	      html = ""
	      categories = context.registers[:site].categories.keys
	      categories.sort.each do |category|
	        posts_in_category = context.registers[:site].categories[category].size
 	       category_dir = context.registers[:site].config['category_dir']
	        category_url = File.join(category_dir, category.gsub(/_|\P{Word}/, '-').gsub(/-{2,}/, '-').downcase)
        	html << "<li class='category'><a href='/#{category_url}/'>#{category} (#{posts_in_category})</a></li>\n"
	      end
	      html
	    end
	  end
	end
	
	Liquid::Template.register_tag('category_list', Jekyll::CategoryListTag)


这个插件会向`liquid`注册一个名为`category_list`的`tag`，该`tag`就是以`li`的形式将站点所有的`category`组织起来。如果要将`category`加入到侧边导航栏，需要增加一个`aside`。  

## Step 2

### 增加 `aside`  

在 `octopress\source\_includes\asides\` 文件夹里面，新建一个文件，名为：`category_list.html` 。并粘贴下面的代码：  
 

**注意**： 去掉 `%` 前面的2个 `\`  
这里如果不加上`\`，markdown格式会显示`category_list`的内容。我是为了正确显示代码才加上的  


	<section>
	  <h1>Categories</h1>
	  <ul id="categories">
	    {\% category_list \%}
	  </ul>
	</section>



## Step 3

### `_config.yml` 文件 ，修改 `default_asides`  

打开 `octopress\_config.yml` 文件，修改里面的 `default_asides` 这一行，将 `asides/category_list.html` 添加进去。  

	default_asides: [asides/category_list.html, ......]

这里可以修改侧边栏的顺序  

## ok

[原博](http://www.aobosir.com/blog/2016/10/12/octopress-build-static-blog-site-add-categories-list-for-site-sidebar/)





