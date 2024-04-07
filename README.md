# Code Runner

## 语言

目前只支持C++

## 系统

目前只支持Windows，后续会支持Mac/Linux

## 安装

```bash
git clone https://github.com/xhdlphzr/Code-Runner.git
cd ./Windows
setx -m PATH "<你当前目录的绝对路径>"
```

## 使用

`run <.\\目录\\源文件名(不加扩展名)> <.\\目录\\编译文件名(不加扩展名)>`编译并运行

`debug <.\\目录\\源文件名(不加扩展名)> <.\\目录\\编译文件名(不加扩展名)>`编译并调试

`build <.\\目录\\源文件名(不加扩展名)> <.\\目录\\编译文件名(不加扩展名)>`编译

## 注意事项

这里安装的命令应使用git bash(管理员权限)进行运行，若非管理员权限或非git bash运行，若出现其他错误，本项目概不负责

默认的编译指令是`g++ .\\文件.cpp -o .\\文件.exe -g -D DEBUG -O2 -static -std=c++14`，如果你的文件在其他地方请用`.\\目录\\文件`的方式(是双反斜杠)来进行使用

这里使用的标准为c++14，还定义了DEBUG宏哦

# 贡献名单(四月April)

1. xhdlphzr
