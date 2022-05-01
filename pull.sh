#!/bin/sh
mv /home/dong/.ssh2 /home/dong/.ssh
cd /home/dong/octopress
git pull origin source
rake generate deploy
mv /home/dong/.ssh /home/dong/.ssh2
