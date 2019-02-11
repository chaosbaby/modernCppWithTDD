# modernCppWithTDD
modern C++ programming with TDD 의 빌드 환경을 만들고 따라해 본다.

# windows에서의 작업

## vcpkg를 설치한다.
windows에서 필요한 개발 패키지들을 설치하기 위해서, vcpkg를 이용한다.
```bash
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat
```

## gtest를 설치한다.
```bash
vcpkg install gtest
```

## jsoncpp를 설치한다.
```bash
vcpkg install jsoncpp
```
