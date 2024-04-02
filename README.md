# Code Runner

## 语言

目前只支持C++

## 系统

目前只支持Windows，后续会支持Mac/Linux

## 安装

```bash
$ git clone https://github.com/xhdlphzr/Code-Runner.git
```

并把当前文件夹加入环境变量(Path)即可使用

## 使用

`run <文件名(不用扩展名)>`编译并运行

`debug <文件名(不用扩展名)>`编译并调试

## 注意事项

默认的编译指令是`g++ ./source/文件 -o ./build/文件 -g -D DEBUG -std=c++14`，所以你的目录下面必须有source(源代码)文件夹和build(编译文件)文件夹，不然会报错

这里使用的标准为c++14，还定义了DEBUG宏哦

# 贡献名单(四月April)

1. xhdlphzr
