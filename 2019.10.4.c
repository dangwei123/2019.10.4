/*
1.
小A 和 小B 在玩猜数字。小B 每次从 1, 2, 3 中随机选择一个，小A 每次也从 1, 2, 3 中选择一个猜。他们一共进行三次这个游戏，请返回 小A 猜对了几次？

输入的guess数组为 小A 每次的猜测，answer数组为 小B 每次的选择。guess和answer的长度都等于3。

 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/guess-numbers
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

 class Solution {
 public int game(int[] guess, int[] answer) {
 int count=0;
 for(int i=0;i<guess.length;i++){
 if(guess[i]==answer[i]){
 count++;
 }
 }
 return count;
 }
 }

 2.
 实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。

 class Solution {
 public String toLowerCase(String str)  {
 String ret="";
 for(int i=0;i<str.length();i++){
 char c=str.charAt(i);
 if(c>='A'&&c<='Z'){
 c+=32;
 }
 ret+=c;
 }
 return ret;
 }
 }

 3.两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。

给出两个整数 x 和 y，计算它们之间的汉明距离。

class Solution {
public int hammingDistance(int x, int y) {
int a=x^y;
int count=0;
while(a!=0){
count++;
a&=(a-1);
}
return count;
}
}

4.在二维平面上，有一个机器人从原点 (0, 0) 开始。给出它的移动顺序，判断这个机器人在完成移动后是否在 (0, 0) 处结束。

移动顺序由字符串表示。字符 move[i] 表示其第 i 次移动。机器人的有效动作有 R（右），L（左），U（上）和 D（下）。如果机器人在完成所有动作后返回原点，则返回 true。否则，返回 false。

注意：机器人“面朝”的方向无关紧要。 “R” 将始终使机器人向右移动一次，“L” 将始终向左移动等。此外，假设每次移动机器人的移动幅度相同。

 

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/robot-return-to-origin
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public boolean judgeCircle(String moves) {
int count1=0;
int count2=0;
for(int i=0;i<moves.length();i++){
char c=moves.charAt(i);
if(c=='R'){
count1++;
}if(c=='L'){
count1--;
}if(c=='U'){
count2++;
}if(c=='D'){
count2--;
}
}
return count1==0&&count2==0;
}
}

5.
给定一个正整数，输出它的补数。补数是对该数的二进制表示取反。

注意:

给定的整数保证在32位带符号整数的范围内。
你可以假定二进制数不包含前导零位。
class Solution {
public int findComplement(int num) {
int sum=0;
int count=0;
while(num!=0){
int c=num%2;
if(c==1){
sum+=0;
}if(c==0){
sum+=(int)Math.pow((double)2,(double)(count));
}
num/=2;
count++;
}
return sum;
}
}


*/
