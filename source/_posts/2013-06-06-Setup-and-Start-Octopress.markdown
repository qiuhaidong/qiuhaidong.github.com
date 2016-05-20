---
layout: post
title: "Setup and Start Octopress"
date: 2013-06-06 20:54
comments: true
categories: 
---
##Before You Begin

###Install Git

	sudo apt-add-repository ppa:git-core/ppa
	sudo apt-get update
	sudo apt-get install git

**Install Ruby 1.9.3 using either rbenv or RVM**  

**Install RVM:**

        curl -L https://get.rvm.io | bash -s stable --ruby

*Be sure to **follow** any subsequent instructions as guided by the installation process.*  

**Install Ruby 1.9.3**

	rvm install 1.9.3
	rvm use 1.9.3
	rvm rubygems latest

Run`ruby --version`to be sure you’re using Ruby 1.9.3

###Setup Octopress

	git clone git://github.com/imathis/octopress.git octopress
	cd octopress    # If you use RVM, You'll be asked if you trust the .rvmrc file (say yes).
	ruby --version  # Should report Ruby 1.9.3

Next, install dependencies

	gem install bundler
	rbenv rehash    # If you use rbenv, rehash to be able to run the bundle command
	bundle install

Install the default Octopress theme.

	rake install

###Next Steps

**1. Set up deployment**  
**2. Configure your blog**  
**3. Start blogging with Octopress**

##Deploying to Github Pages

###Before Deploying to Github Pages,Set Up Git

**Username**  

First you need to tell git your name, so that it can properly label the commits you make.

	git config --global user.name "Your Name Here"
	# Sets the default name for git to use when you commit

**Email**  

Git saves your email address into the commits you make. We use the email address to associate your commits with your GitHub account.

	git config --global user.email "your_email@example.com"
	# Sets the default email for git to use when you commit

**Password caching**  

To use this option, you need to turn on the credential helper so that git will save your password in memory for some time:

	git config --global credential.helper cache
	# Set git to use the credential memory cache

##Generating SSH Keys

###Step 1: Check for SSH keys  

First, we need to check for existing ssh keys on your computer. Open up Terminal and run:

	cd ~/.ssh
	# Checks to see if there is a directory named ".ssh" in your user directory

If it says "No such file or directory" go to **step 2**. Otherwise, you already have an existing keypair, and you can skip to **step 3**.

###Step 2: Generate a new SSH key  

To generate a new SSH key, enter the code below. We want the default settings so when asked to enter a file in which to save the key, just press enter.

	ssh-keygen -t rsa -C "your_email@example.com"

Now you need to enter a passphrase.  

Which should give you something like this:

	Your identification has been saved in /home/you/.ssh/id_rsa.
	Your public key has been saved in /home/you/.ssh/id_rsa.pub.
	The key fingerprint is:
	01:0f:f4:3b:ca:85:d6:17:a1:7d:f0:68:9d:f0:a2:db your_email@example.com

###Step 3: Add your SSH key to GitHub

	sudo apt-get install xclip
	# Downloads and installs xclip. If you don't have `apt-get`, you might need to use another installer (like `yum`)
	
	xclip -sel clip < ~/.ssh/id_rsa.pub
	# Copies the contents of the id_rsa.pub file to your clipboard

**Add your SSH key to GitHub**	

###Step 4: Test everything out

	ssh -T git@github.com

if cout<<

	Hi username! You've successfully authenticated, but GitHub does not provide shell access.

If that username is correct, you've successfully set up your SSH key. Don't worry about the shell access thing, you don't want that anyway.  

If you see "access denied" please consider using HTTPS instead of SSH. If you need SSH start at these instructions for diagnosing the issue.

##Now Go Back to：Deploying to Github Pages

	rake setup_github_pages

***This will ask you for something***

Next run:

	rake generate
	rake deploy

This will generate your blog, copy the generated files into _deploy/, add them to git, commit and push them up to the master branch. In a few seconds you should get an email from Github telling you that your commit has been received and will be published on your site.

***Don’t forget*** to commit the source for your blog.

	git add .           # don't forget the "."
	git commit -m 'your message'
	git push origin source

##Configuring Octopress

###*edit _config.yml*

###Main Configs

	url:                # For rewriting urls for RSS, etc
	title:              # Used in the header and title tags
	subtitle:           # A description used in the header
	author:             # Your name, for RSS, Copyright, Metadata
	simple_search:      # Search engine for simple site search
	description:        # A default meta description for your site
	date_format:        # Format dates using Ruby's date strftime syntax
	subscribe_rss:      # Url for your blog's feed, defauts to /atom.xml
	subscribe_email:    # Url to subscribe by email (service required)
	category_feeds:     # Enable per category RSS feeds (defaults to false in 2.1)
	email:              # Email address for the RSS feed if you want it.
	
##Blogging Basics

###new blog：

	rake new_post["title"]

###Generate & Preview(生成&预览)

	rake generate   # Generates posts and pages into the public directory
	rake watch      # Watches source/ and sass/ for changes and regenerates
	rake preview    # Watches, and mounts a webserver at http://localhost:4000

If you want to work on posts without publishing them, you can add a `published: false` to your post’s YAML header. You can preview these posts with `rake preview` on your local server, but they won’t get published by `rake generate`.

###发布：

	rake deploy

#OK！That's it.  

2015-8-28  
[这篇博文](http://justcoding.iteye.com/blog/1954645)讲得很好，推荐看看
