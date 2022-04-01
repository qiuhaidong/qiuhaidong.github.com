#!/bin/sh
mv /home/dong/.ssh2 /home/dong/.ssh
cd /home/dong/octopress
rake generate deploy
git add .
git commit -m 'blog'
git push origin source
mv /home/dong/.ssh /home/dong/.ssh2
