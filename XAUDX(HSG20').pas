var
a,b,c:array['a'..'z'] of longint;
f:array[0..1005,0..1005] of longint;
n,i,j,l,r,cnt:longint;
t:char;
s,s1:ansistring;
kt:boolean;

procedure solve(); begin
readln(s);
for i:=1 to length(s) do
inc(a[s[i]]);
kt:=true;
for i:=97 to 122 do  begin
t:=chr(i);
if a[t] mod 2 =1 then
inc(cnt);
end;
if cnt<>0 then
write(cnt-1) else
write(0);
end;
begin
solve();
end.
