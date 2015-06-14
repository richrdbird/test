@echo off
if "%VS100COMNTOOLS%" == "" (
  msg "%username%" "Visual Studio 10 not detected"
  exit 1
)

if exist test.sln (
  call "%VS100COMNTOOLS%\..\..\VC\vcvarsall.bat"
  MSBuild /property:Configuration="Release" test.sln
)

pause