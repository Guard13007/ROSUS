# ROSUS

Repository Of Semi-Useful Stuff (simple terminal programs)

[![GitHub release](https://img.shields.io/github/release/Guard13007/ROSUS.svg?maxAge=2592000)](https://github.com/Guard13007/ROSUS/releases/latest)
[![GitHub downloads](https://img.shields.io/github/downloads/Guard13007/ROSUS/latest/total.svg?maxAge=2592000)](https://github.com/Guard13007/ROSUS/releases/latest)
[![GitHub issues](https://img.shields.io/github/issues-raw/Guard13007/ROSUS.svg?maxAge=2592000)](https://github.com/Guard13007/ROSUS/issues)
[![GitHub license](https://img.shields.io/github/license/Guard13007/ROSUS.svg?maxAge=2592000)](https://github.com/Guard13007/ROSUS/blob/master/LICENSE)

- How.cpp  
  Google "how something" by simply typing "how something"
- Google.cpp  
  Google "anything" by simply typing "google anything"
- Ubify.cpp  
  Replace all vowels in some text with "ub" for lols or something.  
  Either "ubify" to open a prompt or "ubify some text" to ubify some text.
- DeUbify.cpp  
  Replaces all instances of "ub" in text with random vowels (including y).  
  As ubification is a lossy anti-compression, data is lost. DeUbifying text
  can lead to unexpected results. Enjoy.

## Installation

On Windows, use [Scoop](http://scoop.sh/) to install from Powershell:

```
Set-ExecutionPolicy RemoteSigned -Scope CurrentUser
iex (new-object net.webclient).downloadstring('https://get.scoop.sh')

scoop bucket add g-bucket https://github.com/Guard13007/ScoopBucket
scoop install rosus
```

..or just download from releases..

On Linux, use the `install.sh` script in here.
