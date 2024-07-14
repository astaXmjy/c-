const hasSum = (target, numbers) => {
  if (target === 0) return [];
  if (target < 0) return null;

  for (let nums of numbers) {
    const remainder = target - nums;
    const remainderResult = hasSum(remainder, numbers);
    if (remainderResult != null) {
      return [...remainderResult, nums];
    }
  }
  return null;
};

const hasSumEffi=(target,numbers,memo={})=>{
    if(target in memo) return memo[target]
    if(target===0) return []
    if(target<0) return null

    for(let num in numbers)
    {
        const remainder=target-num
        const remainderResult=hasSumEffi(remainder,numbers,memo)
        if(remainderResult!=null)
        {
            memo[target]=[...remainderResult,num]
            return memo[target]
        }
    }

    memo[target]=null
    return null
}
