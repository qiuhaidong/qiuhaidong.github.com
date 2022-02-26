---
layout: post
title: "TCPServer Error: Address already in use - bind(2)"
date: 2015-03-05 13:29:29 +0800
comments: true
categories: tech
---
在执行命令  

	rake preview

时，输出：  

	dong@Ubuntu:~/octopress$ rake preview  
	Starting to watch source with Jekyll and Compass. Starting Rack on port 4000  
	>>> Compass is watching for changes. Press Ctrl-C to Stop.  
	Configuration file: /home/dong/octopress/_config.yml  
	[2015-03-05 13:22:19] INFO  WEBrick 1.3.1  
	[2015-03-05 13:22:19] INFO  ruby 1.9.3 (2014-11-13) [i686-linux]  
	[2015-03-05 13:22:19] WARN  TCPServer Error: Address already in use - bind(2)  
	/home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/utils.rb:85:in `initialize': Address already in use - bind(2) (Errno::EADDRINUSE)
		from /home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/utils.rb:85:in `new'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/utils.rb:85:in `block in create_listeners'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/utils.rb:82:in `each'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/utils.rb:82:in `create_listeners'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/server.rb:82:in `listen'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/server.rb:70:in `initialize'
		from /home/dong/.rvm/rubies/ruby-1.9.3-p551/lib/ruby/1.9.1/webrick/httpserver.rb:45:in `initialize'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/rack-1.6.0/lib/rack/handler/webrick.rb:32:in `new'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/rack-1.6.0/lib/rack/handler/webrick.rb:32:in `run'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/rack-1.6.0/lib/rack/server.rb:286:in `start'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/rack-1.6.0/lib/rack/server.rb:147:in `start'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/gems/rack-1.6.0/bin/rackup:4:in `<top (required)>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/rackup:23:in `load'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/rackup:23:in `<main>'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/ruby_executable_hooks:15:in `eval'
		from /home/dong/.rvm/gems/ruby-1.9.3-p551/bin/ruby_executable_hooks:15:in `<main>'
            Source: source
       Destination: public
	      Generating... 
                    done.
	    write public/stylesheets/screen.css
	 Auto-regeneration: enabled for 'source'

解决方法：  
执行：  

	sudo netstat -tulpn |grep 4000

得到：

	dong@Ubuntu:~/octopress$ sudo netstat -tulpn | grep 4000
	[sudo] password for dong: 
	tcp        0      0 127.0.0.1:4000          0.0.0.0:*               LISTEN      2889/rackup  

执行：  

	kill -9 2889

得到：  

	dong@Ubuntu:~/octopress$ kill -9 2889
	dong@Ubuntu:~/octopress$

done.
