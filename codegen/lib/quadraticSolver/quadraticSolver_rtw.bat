@echo off

call "setup_mingw.bat"

cd .

if "%1"=="" ("D:\Matlab_stfc_root\bin\win64\gmake"  -f quadraticSolver_rtw.mk all) else ("D:\Matlab_stfc_root\bin\win64\gmake"  -f quadraticSolver_rtw.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1