#!/bin/sh
cd /home/dong/octopress
#rake generate deploy
git add .
#git commit -m 'update'
git commit -m 'ubuntu20.04 octopress2.0'
git push origin source
