键字：LittlevGL GUI仿真，Code::Blocks 17.12 


做个笔记，有需要的坛友可以做个参考。

关键点我都做了截图，虽然如此，可能还是会有遗漏。。。


其实，很简单的，感兴趣就开始吧。

安装环境：
win10 64bit
Code::Blocks 17.12 
SDL2



首先，安装Code::Blocks 17.12 

Code::Blocks 是我常用工具之一，主要用来做些 C 代码的逻辑或算法测试，推荐！

下图是官方简介




官网下载：http://www.codeblocks.org/downloads/26
版本选择：codeblocks-17.12mingw-setup.exe

安装过程比较简单，直接略过。下面是一张安装成功的启动图片




然后，安装 SDL2
官网下载：http://www.libsdl.org/download-2.0.php

版本选择下图所示



下载后解压，然后按下面操作完成配置：
1. 把 SDL2-devel-2.0.9-mingw\SDL2-2.0.9\i686-w64-mingw32\include 内的SDL2文件夹，复制到 codeblocks 安装目录下的 D:\Program Files (x86)\CodeBlocks\MinGW\include 里面；
2. 把 SDL2-devel-2.0.9-mingw\SDL2-2.0.9\i686-w64-mingw32\lib 内的所有.a文件，复制到 codeblocks 安装目录下的 D:\Program Files (x86)\CodeBlocks\MinGW\lib 里面；

经过上面的配置，就不用单独配置SDL2的包含路径了。



再然后，下载 LittlevGL 仿真源码
我选择从官网下载：https://littlevgl.com/
看图中箭头指示


下载后解压，我删掉了里面一些没用的文件（夹），并新建一个文件夹 CBS_PRJ，用来放置 codeblocks 的工程文件，最终 \pc_simulator_v5_2\pc_simulator 内如下图：


现在，我们已经准备好了仿真源码文件夹了。


最后，可以创建 codeblocks 工程了
启动 codeblocks，选择新建工程，选择控制台应用，语言选C，如下图：


选择工程位置为前面创建的CBS_PRJ文件夹并输入标题，这里我输入的是lvgui_pc_sim，如下图：


工程创建完会自动完成一个hello world的功能，这时按F9，是能运行的，但是我们不需要。。。
所以，我们需要右键工程中的main.c，删除它，然后在CBS_PRJ\lvgui_pc_sim内也删除main.c，以避免不必要的麻烦。

现在，我们需要来添加littlevgl的源码了，如下图所示，右键工程标题，选择 add files recur....，在对话框中选择pc_simulator文件夹，确定



接下来设置包含路径，如下图：



接下来设置还要配置一下编译环境，这里给出选项“-lmingw32 -lSDL2main -lSDL2”，直接复制就好，如下图：




ok，到这里整个工程就算建立完成了，很简单的，F9编译运行一下试试。。。出错！



win10当然不支持Linux 帧缓冲，配置一下就好，把宏定义 USE_FBDEV  的值改为0，见下图：



好了，再来一次F9，编译成功，运行失败，提示找不到 SDL2.dll ...

解决方法：  把 SDL2-devel-2.0.9-mingw\SDL2-2.0.9\i686-w64-mingw32\bin 内的SDL2.dll ，复制到工程 F:\lvgui\pc_simulator_v5_2\pc_simulator\CBS_PRJ\lvgui_pc_sim 内。


最后，再来一次F9，编译成功，运行成功，终于没坑了。。。