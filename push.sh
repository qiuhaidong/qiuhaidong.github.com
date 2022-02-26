#!/bin/sh
cd /home/dong/octopress
rake generate deploy
git add .
git commit -m '20220226'
git push origin source
