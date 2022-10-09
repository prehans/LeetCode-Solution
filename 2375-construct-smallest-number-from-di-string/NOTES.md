if(p[index] == 'I') {
for(int i=prev+1;i<=9;i++) {
if(map[i] == true) continue;
num = num*10 + i;
map[i] = true;
dfs(index+1,p,num,num%10,map);
map[num%10] = false;
num /= 10;
}
}else if(p[index] == 'D'){
for(int i=prev-1;i>=1;i--) {
if(map[i] == true) continue;
num = num*10 + i;
map[i] = true;
dfs(index+1,p,num,num%10,map);
map[num%10] = false;
num /= 10;
}
}
}
};
​
​
​
```