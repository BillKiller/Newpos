sudo chmod a+x rjsupplicant.sh 
sudo nohup ./rjsupplicant.sh -d 0 -u 帐号 -p 密码 -s 有线1x上网 > ./ruijie.log 2>&1 &
sudo mv ./start.sh /usr/bin/
sleep 5
sudo service network-manager restart
if grep "认证成功" ./ruijie.log
then
		echo 锐捷已经运行，输出结果在ruijie.log
else
		echo 出错了,请重新打开
fi
