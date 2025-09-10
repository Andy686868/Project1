#!/bin/bash
step=$(echo "$1" | grep -o '[0-9]\+')
git add "$1"
git commit -m "Lesson 9.2 : step $step"
git push
echo "Файл $1 отправлен"