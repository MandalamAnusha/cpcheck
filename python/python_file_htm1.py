#!/usr/bin/python

fo = open("/home/mandalamv/Desktop/pythonfile.html", 'w')

fo.write("<font style='color:red; font-size:300%;'><br>testing python html file</font></br>")
fo.write("<font style='color:green;font-size:160%;'><br>testing python html file</font></br>")
fo.write("<font style='color:blue;font-size:170%;'><br>testing python html file</font></br>")
fo.write("<font style='color:black;font-size:200%;'><br>testing python html file</font></br>")
fo.write("<font style='color:orange;font-size:250%;'><br>testing python html file</font></br>")
fo.write("<font style='color:gray;font-size:280%;'><br>testing python html file</font></br>")
fo.write("<font style='color:yellow;font-size:300%;'><br>testing python html file</font></br>")
fo.write("<font style='color:voilet;font-size:300%;'><br>testing python html file</font></br>")
fo.write("<font style='color:purple;font-size:300%;'><br>testing python html file</font></br>")
fo.write("<font style='color:red;'><font style='font-size:300%;'><br>testing python html file</font></font></br>")
print'file is opened in write mode'
fo.close()
