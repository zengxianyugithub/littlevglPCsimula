���֣�LittlevGL GUI���棬Code::Blocks 17.12 


�����ʼǣ�����Ҫ��̳�ѿ��������ο���

�ؼ����Ҷ����˽�ͼ����Ȼ��ˣ����ܻ��ǻ�����©������


��ʵ���ܼ򵥵ģ�����Ȥ�Ϳ�ʼ�ɡ�

��װ������
win10 64bit
Code::Blocks 17.12 
SDL2



���ȣ���װCode::Blocks 17.12 

Code::Blocks ���ҳ��ù���֮һ����Ҫ������Щ C ������߼����㷨���ԣ��Ƽ���

��ͼ�ǹٷ����




�������أ�http://www.codeblocks.org/downloads/26
�汾ѡ��codeblocks-17.12mingw-setup.exe

��װ���̱Ƚϼ򵥣�ֱ���Թ���������һ�Ű�װ�ɹ�������ͼƬ




Ȼ�󣬰�װ SDL2
�������أ�http://www.libsdl.org/download-2.0.php

�汾ѡ����ͼ��ʾ



���غ��ѹ��Ȼ���������������ã�
1. �� SDL2-devel-2.0.9-mingw\SDL2-2.0.9\i686-w64-mingw32\include �ڵ�SDL2�ļ��У����Ƶ� codeblocks ��װĿ¼�µ� D:\Program Files (x86)\CodeBlocks\MinGW\include ���棻
2. �� SDL2-devel-2.0.9-mingw\SDL2-2.0.9\i686-w64-mingw32\lib �ڵ�����.a�ļ������Ƶ� codeblocks ��װĿ¼�µ� D:\Program Files (x86)\CodeBlocks\MinGW\lib ���棻

������������ã��Ͳ��õ�������SDL2�İ���·���ˡ�



��Ȼ������ LittlevGL ����Դ��
��ѡ��ӹ������أ�https://littlevgl.com/
��ͼ�м�ͷָʾ


���غ��ѹ����ɾ��������һЩû�õ��ļ����У������½�һ���ļ��� CBS_PRJ���������� codeblocks �Ĺ����ļ������� \pc_simulator_v5_2\pc_simulator ������ͼ��


���ڣ������Ѿ�׼�����˷���Դ���ļ����ˡ�


��󣬿��Դ��� codeblocks ������
���� codeblocks��ѡ���½����̣�ѡ�����̨Ӧ�ã�����ѡC������ͼ��


ѡ�񹤳�λ��Ϊǰ�洴����CBS_PRJ�ļ��в�������⣬�������������lvgui_pc_sim������ͼ��


���̴�������Զ����һ��hello world�Ĺ��ܣ���ʱ��F9���������еģ��������ǲ���Ҫ������
���ԣ�������Ҫ�Ҽ������е�main.c��ɾ������Ȼ����CBS_PRJ\lvgui_pc_sim��Ҳɾ��main.c���Ա��ⲻ��Ҫ���鷳��

���ڣ�������Ҫ�����littlevgl��Դ���ˣ�����ͼ��ʾ���Ҽ����̱��⣬ѡ�� add files recur....���ڶԻ�����ѡ��pc_simulator�ļ��У�ȷ��



���������ð���·��������ͼ��



���������û�Ҫ����һ�±��뻷�����������ѡ�-lmingw32 -lSDL2main -lSDL2����ֱ�Ӹ��ƾͺã�����ͼ��




ok���������������̾��㽨������ˣ��ܼ򵥵ģ�F9��������һ�����ԡ���������



win10��Ȼ��֧��Linux ֡���壬����һ�¾ͺã��Ѻ궨�� USE_FBDEV  ��ֵ��Ϊ0������ͼ��



���ˣ�����һ��F9������ɹ�������ʧ�ܣ���ʾ�Ҳ��� SDL2.dll ...

���������  �� SDL2-devel-2.0.9-mingw\SDL2-2.0.9\i686-w64-mingw32\bin �ڵ�SDL2.dll �����Ƶ����� F:\lvgui\pc_simulator_v5_2\pc_simulator\CBS_PRJ\lvgui_pc_sim �ڡ�


�������һ��F9������ɹ������гɹ�������û���ˡ�����