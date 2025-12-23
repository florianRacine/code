cd "$HOME/Documents/code/cpp"
cd "$HOME/documents/code/cpp"
mkdir $1.dir
cd $1.dir

# Create the C++ file with header
echo "/**" >> $1.cpp
echo " *    author:  evoPrg" >> $1.cpp
echo " *    created: "$(date +"%d.%m.%Y %T") >> $1.cpp
echo "**/" >> $1.cpp
echo "#include <bits/stdc++.h>" >> $1.cpp
echo "" >> $1.cpp
echo "using namespace std;" >> $1.cpp
echo "" >> $1.cpp

# Create main() with ios/cin optimization
echo "int main() {" >> $1.cpp
echo "    ios::sync_with_stdio(0);" >> $1.cpp
echo "    cin.tie(0);" >> $1.cpp
echo "    " >> $1.cpp
echo "    return 0;" >> $1.cpp
echo "}" >> $1.cpp

# Paste clipboard to input file
xclip -selection clipboard -o >> inp

# Open vim with split
vim -O +10 -c 'startinsert!' $1.cpp inp -c ":vertical resize 120"
