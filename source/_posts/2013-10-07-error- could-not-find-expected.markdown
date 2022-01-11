---
layout: post
title: "Error: could not find expected ':'"
date: 2013-10-07 11:14
comments: true
categories: tech
---

#### 出现错误要先看提示代码，知道错在哪里，如：

	dong@ubuntu:~/octopress$ rake generate
	## Generating Site with Jekyll
	identical source/stylesheets/screen.css 
	/home/dong/.rvm/rubies/ruby-1.9.3-p448/lib/ruby/1.9.1/psych.rb:203:in `parse': (/home/dong/octopress/_config.yml): could not find expected ':' while scanning a simple key at line 10 column 1 (Psych::SyntaxError)
		from /home/dong/.rvm/rubies/ruby-1.9.3-p448/lib/ruby/1.9.1/psych.rb:203:in `parse_stream'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p448/lib/ruby/1.9.1/psych.rb:151:in `parse'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p448/lib/ruby/1.9.1/psych.rb:127:in `load'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p448/lib/ruby/1.9.1/psych.rb:297:in `block in load_file'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p448/lib/ruby/1.9.1/psych.rb:297:in `open'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p448/lib/ruby/1.9.1/psych.rb:297:in `load_file'
		from /home/dong/.rvm/gems/ruby-1.9.3-p448/gems/jekyll-0.12.0/lib/jekyll.rb:130:in `configuration'
		from /home/dong/.rvm/gems/ruby-1.9.3-p448/gems/jekyll-0.12.0/bin/jekyll:221:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p448/bin/jekyll:23:in `load'
		from /home/dong/.rvm/gems/ruby-1.9.3-p448/bin/jekyll:23:in `<main>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p448/bin/ruby_executable_hooks:15:in `eval'
		from /home/dong/.rvm/gems/ruby-1.9.3-p448/bin/ruby_executable_hooks:15:in `<main>'
		
代码已经说得很清楚了，就是***/home/dong/octopress/_config.yml***，这个文件，***could not find expected ':'*** while scanning a simple key ***at line 10 column 1*** (Psych::SyntaxError)  
**就是'：'后面忘了加空格**

