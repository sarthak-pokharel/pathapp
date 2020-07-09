# Simple App to set app to path

```
pathapp.exe sublime "C:\Program Files\Sublime Text 3\sublime_text.exe"

```

The above command will create a batch script in `C:\envbin\` folder. This folder should be in environment path. 

After you append this folder in Environment-Path-Variable, you'll be able to use the command `sublime` to access `sublime_text.exe` from any directory in cmd


Other examples:

```
pathapp python2 "C:\Python27\python.exe"
python2 --version
python --version
```
> Python **2.7.18rc1**

> Python **3.8.3**


```
pathapp pip2 "C:\Python27\Scripts\pip2.7.exe"
pip2 --version
```
> pip 19.2.3 from c:\python27\lib\site-packages\pip (python 2.7)

> pip 19.2.3 from C:\Users\\*username*\appdata\local\programs\python\python38\lib\site-packages\pip (python 3.8)
