const cansum = (target, number) => {
  if (target === 0) return true;
  if (target < 0) return false;
  for (let nums of number) {
    const remainder = target - nums;
    if (cansum(remainder, number) === true) {
      return true;
    }
  }
  return false;
};

const cansumefficient = (target, number, memo = {}) => {
  if (target in memo) return memo[target];
  if (target === 0) return true;
  if (target < 0) return false;

  for (let nums of number) {
    const remainder = target - nums;
    if (cansumefficient(remainder, number, memo) === true) {
      memo[target] = true;
      return true;
    }
  }

  memo[target] = false;
  return false;
};

console.log(cansumefficient(900, [2, 3, 5])); // need less time to execute
