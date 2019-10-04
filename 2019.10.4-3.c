/*
1.给你一个字符串 text，你需要使用 text 中的字母来拼凑尽可能多的单词 "balloon"（气球）。

字符串 text 中的每个字母最多只能被使用一次。请你返回最多可以拼凑出多少个单词 "balloon"。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-number-of-balloons

class Solution {
public int maxNumberOfBalloons(String text) {
int i=0;
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
while(i<text.length()){
char c=text.charAt(i);
if(c=='b')
{
count1++;
}
if(c=='a')
{
count2++;
}
if(c=='l')
{
count3++;
}
if(c=='o')
{
count4++;
}
if(c=='n')
{
count5++;
}
i++;
}
int x=(count1>count2?count2:count1);
x=(x>count5?count5:x);
int y=(count4>count3?count3:count4)/2;
return x>y?y:x;
}
}

2.
编写一个函数，输入是一个无符号整数，返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）。
public class Solution {
// you need to treat n as an unsigned value
public int hammingWeight(int n) {
int count=0;
while(n!=0){
count++;
n&=(n-1);
}
return count;
}
}

3.
我们称一个数 X 为好数, 如果它的每位数字逐个地被旋转 180 度后，我们仍可以得到一个有效的，且和 X 不同的数。要求每位数字都要被旋转。

如果一个数的每位数字被旋转以后仍然还是一个数字， 则这个数是有效的。0, 1, 和 8 被旋转后仍然是它们自己；2 和 5 可以互相旋转成对方；6 和 9 同理，除了这些以外其他的数字旋转以后都不再是有效的数字。

现在我们有一个正整数 N, 计算从 1 到 N 中有多少个数 X 是好数？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotated-digits

class Solution {
public int rotatedDigits(int N) {
int count=0;
for(int i=1;i<=N;i++){
int flag=0;
int tmp=i;
while(tmp!=0){
int a=tmp%10;
if(a==2||a==5||a==6||a==9){
flag=1;
}else if(a==3||a==4||a==7){
break;
}
tmp/=10;
}
if(flag==1&&tmp==0){
count++;
}
}
return count;
}
}

4.
给你一个长度固定的整数数组 arr，请你将该数组中出现的每个零都复写一遍，并将其余的元素向右平移。

注意：请不要在超过该数组长度的位置写入元素。

要求：请对输入的数组 就地 进行上述修改，不要从函数返回任何东西。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/duplicate-zeros
class Solution {
public void duplicateZeros(int[] arr) {
for(int i=0;i<arr.length;i++){
if(arr[i]==0&&i!=arr.length-1){
for(int j=arr.length-1;j>i+1;j--){
arr[j]=arr[j-1];
}
arr[i+1]=0;
i+=1;
}

}
}
}

5.
泰波那契序列 Tn 定义如下： 

T0 = 0, T1 = 1, T2 = 1, 且在 n >= 0 的条件下 Tn+3 = Tn + Tn+1 + Tn+2

给你整数 n，请返回第 n 个泰波那契数 Tn 的值。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/n-th-tribonacci-number
class Solution {
public int tribonacci(int n) {
int T0=0;
int T1=1;
int T2=1;
int T3=0;
if(n==0){
return 0;
}else if(n==1||n==2){
return 1;
}else{
for(int i=3;i<=n;i++){
T3=T0+T1+T2;
T0=T1;
T1=T2;
T2=T3;
}
return T3;
}
}
}

*/
