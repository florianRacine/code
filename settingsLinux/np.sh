cd "$HOME/Documents/code/cpp"
cd "$HOME/documents/code/cpp"
mkdir $1.dir
cd $1.dir
echo "/**" >> $1.cpp
echo " *    author:  evoPrg" >> $1.cpp
echo " *    created: "$(date +"%d.%m.%Y %T") >> $1.cpp
echo "**/" >> $1.cpp
echo "#include <bits/stdc++.h>" >> $1.cpp
echo "" >> $1.cpp
echo "using namespace std;" >> $1.cpp
echo "" >> $1.cpp
echo "int main() {" >> $1.cpp
echo "    " >> $1.cpp
echo "    return 0;" >> $1.cpp
echo "}" >> $1.cpp

xclip -selection clipboard -o >> inp
vim -O +10 -c 'startinsert!' $1.cpp inp -c ":vertical resize 120"
