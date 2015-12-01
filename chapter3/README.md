String的操作
-------
os << s        将s写到输出流os当中，返回os<br>
is >> s        从s中读取字符串赋给s,字符串以空白分隔，返回is<br>
getline(is ,s) 从is中读取一行赋给s，返回is<br>
s.empty()      s为空返回true,否则返回false<br>
s.size()       返回s中字符的个数<br>
s[n]           返回s中第n个字符的引用,位置n从0记起<br>
s1+s2          返回s1和s2连接的后果<br>
s1=s2          用s2的副本代替s1中原来的字符<br>
s1==s2         如果s1和s2中所含的字符完全一样,则它们相等;string对象的相等性判断对字母的大小写敏感<br>
s1!=s2<br>
<,<=,>,>=      利用字符在字典中的顺序进行比较,且对字母的大小写敏感<br>
<br>
=======
====
os << s        将s写到输出流os当中，返回os
is >> s        从s中读取字符串赋给s,字符串以空白分隔，返回is
getline(is ,s) 从is中读取一行赋给s，返回is
s.empty()      s为空返回true,否则返回false
s.size()       返回s中字符的个数
s[n]           返回s中第n个字符的引用,位置n从0记起
s1+s2          返回s1和s2连接的后果
s1=s2          用s2的副本代替s1中原来的字符
s1==s2         如果s1和s2中所含的字符完全一样,则它们相等;string对象的相等性判断对字母的大小写敏感
s1!=s2
<,<=,>,>=      利用字符在字典中的顺序进行比较,且对字母的大小写敏感

1.c
`
int main()
{
　　　string s;
   cin >> s;
   cout << s << endl;
   return 0;
｝
`
string对象会自动忽略开头空白(即空格符,换行符,制表符等)并从第一个真正的字符开始读起，知道遇见下一个空白为止．<br>
输入：＂　　HELLO C++!＂<br>
=>     HELLO<br>

string line = 1234567;<br>
line.size()<br>
=> 7<br>
line.empty() //空白串返回true<br>
=> false<br>

string::size_type类型 <br>
size函数返回的是一个无符号整型数.<br>
表达式s.size() < n<br>
当n为负值int时，n被转化为unsigned,因此几乎为true.<br>

初始化vector对象的方法
-------
vector<T>     v1             v1是一个空vector,它潜在的元素是T类型的,执行默认初始化<br>
vector<T>     v2(v1)      v2中包含有v1所有元素的副本<br>
vector<T>     v2 = v1 <br >
vector<T>     v3(n ,val)  n个对象,初始值为val<br>
vector<T>     v4(n)          n个对象,默认初始化<br>
vector<T>     v5(a,b,c...) 每个元素值为a,b,c..<br>
vector<T>     v5={a,b,c}  跟v5相同<br>

vector<int>  v1(10);//v1有10个元素,每个的值都是0<br>
vector<int>  v2{10};//v2有1个元素,该元素的值是10<br>
vector<int>  v3(10,1);//v3有10个元素,每个的值都是1<br>
vector<int>  v4{10,1};//v4有2个元素,值分别为10和1<br>















