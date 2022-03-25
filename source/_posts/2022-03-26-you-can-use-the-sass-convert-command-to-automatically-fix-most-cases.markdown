---
layout: post
title: "You can use the sass-convert command to automatically fix most cases---Ruby 2.3.1"
date: 2022-03-26 01:05:55 +0800
author: 丘海东 
tags: ruby2.3.1
comments: true
categories: tech
---
octopress-2.0，ruby-**2.3.1**，ubuntu20.04，可以运行（修改这blog后）  
octopress-2.0，ruby-**2.5.9**，ubuntu20.04，可以运行（修改这blog后）  
[原网页](https://stackoverflow.com/questions/35949660/compass-sass-deprecation-warning)  
[百度缓存网页](http://cache.baiducontent.com/c?m=Xxdd763vX7YjRNeeOiILGLerW1Lrc_ceIQ3hCNMB9gwdzDHZoy_PikcN75GYpR9DFB3vxBUcejQkaSvlN3gZEfAPpNN-08FVQIDyZHTNJgPwSgoB3NKL4_GS4nx_XrCC-BUaRNwAuECMpWgq8wxzkIpLErbpEqlwK68Qi6soQwepLTgid54lohbxMlnl6PQpNH2t__da7lDpAsRwCb6EY-y40SooyRN5jX-9ufBiajUS0lec_A47rZ0vRgOYP12W&p=8d7d8e0285cc43dd08e297780f568f&newp=c273c00586cc42a95aa9c7710f408f231610db2151d3da146b82c825d7331b001c3bbfb42220150ed3c6796204af4259e8f033783d0923a3dda5c91d9fb4c57479cc&s=2a38a4a9316c49e5&user=baidu&fm=sc&query=You+can+use+the+sass%2Dconvert+command+to+automatically+fix+most+cases%2E&qid=c0e3498b0000d650&p1=1)  

I just installed and Compass & Sass as described here.  

I got the following warning when I ran `compass watch` for the first time. What exactly does it mean? What should I do to fix it, do I need to do anything?  

```
$ (master) compass watch
>>> Compass is watching for changes. Press Ctrl-C to Stop.
DEPRECATION WARNING on line 87 of /Library/Ruby/Gems/2.0.0/gems/compass-core-1.0.3/stylesheets/compass/css3/_deprecated-support.scss: #{} interpolation near operators will be simplified
in a future version of Sass. To preserve the current behavior, use quotes:

  unquote('"$moz-"#{$experimental-support-for-mozilla} "$webkit-"#{$experimental-support-for-webkit} "$opera-"#{$experimental-support-for-opera} "$microsoft-"#{$experimental-support-for-microsoft} "$khtml-"#{$experimental-support-for-khtml}')

You can use the sass-convert command to automatically fix most cases.

DEPRECATION WARNING on line 92 of /Library/Ruby/Gems/2.0.0/gems/compass-core-1.0.3/stylesheets/compass/css3/_deprecated-support.scss: #{} interpolation near operators will be simplified
in a future version of Sass. To preserve the current behavior, use quotes:

  unquote('"$ie6-"#{$legacy-support-for-ie6} "$ie7-"#{$legacy-support-for-ie7} "$ie8-"#{$legacy-support-for-ie8}')

You can use the sass-convert command to automatically fix most cases.

    write css/styles.css
```

#### 1 Answer :  

To fix the error message, just change the ***line 87*** from your "**_deprecated-support.scss**" file to this:  

```
    // A debug tool for checking browser support
@mixin debug-support-matrix($experimental: true, $ie: true) {
    @debug '#{"$moz-"}$experimental-support-for-mozilla'
                 '#{"$webkit-"}$experimental-support-for-webkit'
                 '#{"$opera-"}$experimental-support-for-opera'
                 '#{"$microsoft-"}$experimental-support-for-microsoft'
                 '#{"$khtml-"}$experimental-support-for-khtml';
    @debug '#{"$ie6-"}$legacy-support-for-ie6'
                 '#{"$ie7-"}$legacy-support-for-ie7'
                 '#{"$ie8-"}$legacy-support-for-ie8';
}
```

The file can be found at your **/home/dong/.rvm/gems/ruby-2.3.1/gems/compass-core-1.0.3/stylesheets/compass/css3/_deprecated-support.scss**
