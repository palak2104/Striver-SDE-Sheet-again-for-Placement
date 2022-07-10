"abba"
It will give wrong answer 3 if we do
count=i-m[s[i]];
Hence we need to do
count=min(count+1,i-m[s[i]]);
