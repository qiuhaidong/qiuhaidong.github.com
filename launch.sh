#!/bin/sh
mv /home/dong/.ssh2 /home/dong/.ssh
cd /home/dong/octopress
git pull origin source
rake generate deploy
git add .
git commit -m 'blog'
git push origin source
mv /home/dong/.ssh /home/dong/.ssh2

mv /home/dong/.ssh3 /home/dong/.ssh
mv /home/dong/octopress/source/_posts/ /home/dong/haydnyau/
cd /home/dong/haydnyau
jekyll build
octopress deploy
mv /home/dong/.ssh /home/dong/.ssh3
mv /home/dong/haydnyau/_posts/ /home/dong/octopress/source/
