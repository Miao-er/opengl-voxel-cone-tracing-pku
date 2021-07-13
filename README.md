### 文档结构

```cd ./VCT```

README.md：说明文档，此文件  
demo.mp4：演示视频  
报告.pdf：书面报告  
解决方案：OPENGLSL.sin  

```cd ./OPENGL00```  
inlcude：库的头文件和源文件，包括assimp,glfw,glad,KHR,glm  
lib：库的链接文件  
models：模型文件  
src：本地头文件和源文件  
OPENGL00.exe：可执行文件  

### UI操作  

__INFORMATION:__  
帧率显示：FPS  
光照方向  
相机位置  
相机方向

__SETTINGS:__  
 直接反射光和间接反射光的漫反射、镜面反射分量显示开启开关  
环境光遮蔽的开关  
环境光强度（因子） 0~1

__USE GUIDE:__  
操作指南：  
`WSADQE`控制相机向前后左右上下移动；
`1~5`控制直接漫反射、间接漫反射、直接镜面反射、间接镜面反射、环境光遮蔽开关；  
`↑↓←→`控制光源方向；  
`SPACE`在鼠标控制相机视角（不显示光标）和鼠标控制UI（光标可以在window之外）切换；  
`ESCAPE`退出程序.