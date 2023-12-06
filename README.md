# cppfront_training

# cpp_front

- cpp_front공식 github?
- https://github.com/hsutter/cppfront
  - https://github.com/modern-cmake/cppfront

- Cppfront - C++와 호환되는 실험적 컴파일러 (github.com/hsutter)
  - https://news.hada.io/topic?id=8616

# find로 파일, 폴더 찾아서 지우기

- 현재 디렉토리 하위에서 디렉토리에 있는 ".DS_Store" 모든 파일 삭제

```
find . -type f -name ".DS_Store" -exec rm {} \;
```

https://shutcoding.tistory.com/entry/LINUX-FIND-%EB%A1%9C-%ED%8C%8C%EC%9D%BC%ED%8F%B4%EB%8D%94-%EC%B0%BE%EA%B8%B0-%EC%A7%80%EC%9A%B0%EA%B8%B0


# .gitignore (cppfront)

```

cpp2util.h
cppfront


*.out
*.vcxproj
*.filters
*.recipe
*.user
*.ilk
*.log
*.enc
*.tlog
*.idb
*.obj
*.pdb
*.suo
*.db
*.ipch
*.sln
*.txt
*.db-shm
*.db-wal
*.opendb
*.vsidx
*.lock
.editorconfig
*.xml
*.sarif
*.bin
*.exe
source/gen_version.bat

```
