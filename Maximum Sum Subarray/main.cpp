class maxSubArraySum(int arr[])
{
  int currSum=arr[0];
  int maxSum=arr[0];
  for(int i=1;i<arr.length;i++)
  {
    currSum=max(arr[i],currSum+arr[i]);
    maxSum=max(currSum,maxSum);
  }
  return maxSum;
}
