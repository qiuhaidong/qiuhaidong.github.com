#!/bin/sh
cd /home/dong/octopress
rake generate deploy
git add .
git commit -m 'update'
git push origin source
