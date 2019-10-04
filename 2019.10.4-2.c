/*
1.给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

示例 1:

输入: "Let's take LeetCode contest"
输出: "s'teL ekat edoCteeL tsetnoc" 

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-words-in-a-string-iii

class Solution {
public String reverseWords(String s) {
char[] arr=s.toCharArray();
int i=0;
int j=0;
while(j<s.length()){
while(j<s.length()&&s.charAt(j)!=' '){
j++;
}
int left=i;
int right=j-1;
while(left<right){
char tmp=arr[left];
arr[left++]=arr[right];
arr[right--]=tmp;
}
j++;
i=j;
}
return new String(arr);
}
}

2.
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
class Solution {
public int singleNumber(int[] nums) {
int a=0;
for(int i=0;i<nums.length;i++){
a^=nums[i];
}
return a;
}
}

3.
给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。
class Solution {
public int addDigits(int num) {
int sum=0;
while(num!=0){
sum+=num%10;
num/=10;
}
if(sum>9){
return addDigits(sum);
}else{
return sum;
}
}
}

4.在大小为 2N 的数组 A 中有 N+1 个不同的元素，其中有一个元素重复了 N 次。

返回重复了 N 次的那个元素。
class Solution {
public int repeatedNTimes(int[] A) {
Arrays.sort(A);

return A[A.length/2]==A[A.length-1]?A[A.length/2]:A[A.length/2-1];
}
}

5.
编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。

不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。

你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。

 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/reverse-string
 
 class Solution {
 public void reverseString(char[] s) {
 int left=0;
 int right=s.length-1;
 while(left<right){
 char tmp=s[left];
 s[left++]=s[right];
 s[right--]=tmp;
 }

 }
 }

*/