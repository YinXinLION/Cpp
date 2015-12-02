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
```
int main()
{
　　　string s;
   cin >> s;
   cout << s << endl;
   return 0;
｝
```
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

迭代器
----
1.其对象是容器中的元素或者string对象中的字符.<br>
2.如果容器为空,则begin和end返回的是同一个迭代器,都是尾后迭代器.<br>
3.end返回的迭代器并不指示某个元素,不能递增和解引用操作.<br>
```
vector<int>::iterator it; //it 能读写vector<int>的元素
string::iterator it2; //it2能读写string对象中的字符

vector<int>::const_iterator it3;//it3只能读元素,不能写元素
string::const_iterator it4;//it4只能读字符,不能写字符

vector<int> v
auto it3 = v.cbegin(); //it3的类型是vector<int>::const_iterattor
```
(*it).empty()含义是先对it解引用,然后解引用的结果再执行点运算符.
```
(*it).empty() ;  //解引用it,然后调用结果对象的empty成员
*it.emoty();   //错误,试图访问it的名为empty的成员,it是一个迭代器,没有empty成员
```
使改vector对象的迭代器失效(注意)
1.不能再范围for循环中向vector对象添加元素.
2.任何一种可能改变vector对象容量的操作,比如push_back.
!!!(使用了迭代器的循环体,都不要向迭代器所属的容器添加元素)















