---
layout: post
title: "Could not find a JavaScript runtime"
date: 2015-03-05 13:10:34 +0800
comments: true
categories: tech
---
以下是两条命令的输出结果：  
第一条：  

	dong@Ubuntu:~/octopress$ rake generate
	## Generating Site with Jekyll
    	write source/stylesheets/screen.css
	/home/dong/.rvm/gems/ruby-1.9.3-p551/gems/execjs-2.3.0/lib/execjs/runtimes.rb:45:in `autodetect': Could not find a JavaScript runtime. See https://github.com/sstephenson/execjs for a list of available runtimes. (ExecJS::RuntimeUnavailable)
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/execjs-2.3.0/lib/execjs.rb:5:in `<module:ExecJS>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/execjs-2.3.0/lib/execjs.rb:4:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee_script.rb:1:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee_script.rb:1:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee-script.rb:1:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee-script.rb:1:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-coffeescript-1.0.1/lib/jekyll-coffeescript.rb:2:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-coffeescript-1.0.1/lib/jekyll-coffeescript.rb:2:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:46:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:46:in `block in gracefully_require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:44:in `each'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:44:in `gracefully_require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll.rb:166:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/bin/jekyll:6:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/bin/jekyll:6:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/jekyll:23:in `load'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/jekyll:23:in `<main>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/ruby_executable_hooks:15:in `eval'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/ruby_executable_hooks:15:in `<main>'

第二条：  

	dong@Ubuntu:~/octopress$ rake preview
	Starting to watch source with Jekyll and Compass. Starting Rack on port 4000
	/home/dong/.rvm/gems/ruby-1.9.3-p551/gems/execjs-2.3.0/lib/execjs/runtimes.rb:45:in `autodetect': Could not find a JavaScript runtime. See https://github.com/sstephenson/execjs for a list of available runtimes. (ExecJS::RuntimeUnavailable)
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/execjs-2.3.0/lib/execjs.rb:5:in `<module:ExecJS>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/execjs-2.3.0/lib/execjs.rb:4:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee_script.rb:1:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee_script.rb:1:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee-script.rb:1:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/coffee-script-2.3.0/lib/coffee-script.rb:1:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-coffeescript-1.0.1/lib/jekyll-coffeescript.rb:2:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-coffeescript-1.0.1/lib/jekyll-coffeescript.rb:2:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:46:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:46:in `block in gracefully_require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:44:in `each'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll/deprecator.rb:44:in `gracefully_require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/lib/jekyll.rb:166:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/bin/jekyll:6:in `require'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/jekyll-2.5.3/bin/jekyll:6:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/jekyll:23:in `load'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/jekyll:23:in `<main>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/ruby_executable_hooks:15:in `eval'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/ruby_executable_hooks:15:in `<main>'
	>>> Compass is watching for changes. Press Ctrl-C to Stop.
	[2015-03-05 12:32:30] INFO  WEBrick 1.3.1
	[2015-03-05 12:32:30] INFO  ruby 1.9.3 (2014-11-13) [i686-linux]
	[2015-03-05 12:32:30] INFO  WEBrick::HTTPServer#start: pid=2889 port=4000
 		write public/stylesheets/screen.css
	127.0.0.1 - - [05/Mar/2015:12:32:49 +0800] "GET / HTTP/1.1" 404 - 0.0610
	127.0.0.1 - - [05/Mar/2015:12:32:50 +0800] "GET /favicon.ico HTTP/1.1" 404 - 0.0015
	127.0.0.1 - - [05/Mar/2015:12:32:53 +0800] "GET / HTTP/1.1" 404 - 0.0013
	127.0.0.1 - - [05/Mar/2015:12:37:50 +0800] "GET / HTTP/1.1" 404 - 0.0007
	127.0.0.1 - - [05/Mar/2015:12:37:51 +0800] "GET / HTTP/1.1" 404 - 0.0007
	^Z
	[1]+  已停止               rake preview

解决方法：  
执行命令：  

	gem install execjs
	gem install therubyracer
	
may fail,[check this](http://stackoverflow.com/questions/20888318/error-install-rubyracer-with-error-invalid-gem-package-is-corrupt) ,[or](https://qiuhaidong.github.io/blog/2016/11/10/failed-when-gem-install-therubyracer/)  

	sudo apt-get install nodejs
	
done.
