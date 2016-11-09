#!/bin/sh
cd /home/dong/octopress
git pull origin source
rake generate deploy
