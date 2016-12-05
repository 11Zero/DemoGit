#第一次使用git，命令什么的都是百度的，基本用到的命令就这几个
##1.创建本地仓库并初始化
##2.新建本地仓库文件夹
##3.进入文件夹右键打开git bash here
##4.shell中执行git init进行本地仓库初始化
##5.shell初始化时一般添加touch README.md
##6.本地仓库改动后同步到github
#
#如何同步到云端仓库
##1.后期一般通过git add .来添加该文件夹中所有文件，也可git add XXX来添加自定文件或文件夹
##2.git commit -m "Description of this commit"来为本次commit添加说明
##3.git push -u origin master来将本地仓库上步添加的文件改动同步到github托管仓库
#
#对已有commit设置标签
##1.git tag -a v1.20 4858e55 -m "完成生成xz,yz面剪刀撑节点"
###-a后是标签名称，-m后是该tag的注释
#
#默认情况下，git push 并不会把标签传送到远端服务器上，只有通过显式命令才能分享标签到远端仓库。其命令格式如同推送分支，运行git push origin [tagname] 即可
##1.git push origin v1.5
#
#例如通过VC创建一个项目，文件夹名为DemoBridge，打算将里面所有文件放到远端仓库，此时
##1.在github创建一个reporsitory命名DemoRes并初始化；
##2.通过shell命令git clone git@github.com:11Zero/DemoRes.git将远端仓库clone到本地一个名为DemoRes的文件夹中；
##3.将DemoBridge中所有文件拷贝到DemoRes中；
##4.在DemoRes中右键打开git bash here来打开shell,也可以在任意shell窗中cd到该文件夹中，然后执行git add .将该文件夹中所有文件添加到仓库目录中；
##5.通过git commit -m "Changes log"添加本次commit说明(""中为自定义commit名称)；
##6.通过git push -u origin master来同步本地仓库到远端仓库。
##7.此后每次本地仓库改动后执行
###[git add .]
###[git commit -m "Changes log"]
###[git push -u origin master]
###三条命令即可
#
#仓库文件夹中的.git文件夹放置仓库属性文件，不要随意移动修改