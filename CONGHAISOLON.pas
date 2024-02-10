var s1,s2,sd:ansistring;
n,i,dem:integer;
function C(s1,s2:ansistring):ansistring;
var i,tam,a,b,m:longint;
s3,s4:ansistring;
begin
s3:='';
s4:='';
a:=0;
m:=0;
b:=0;
tam:=0;
if (length(s1)>length(s2)) then begin
for i:=1 to length(s1)-length(s2) do
s2:='0'+s2;
end else
begin
for i:=1 to length(s2)-length(s1) do
s1:='0'+s1;
end;
for i:=length(s1) downto 1 do begin
val(s1[i],a);
val(s2[i],b);
m:=a+b+tam;
if m>=10 then
tam:=1 else
tam:=0;
s4:='';
str(m mod 10,s4);
s3:=s4+s3;
end;
if (tam=1) then
s3:='1'+s3;
exit(s3);
end;
begin
//assign(input,'SCORES.INP'); reset(input);
//assign(output,'SCORES.OUT'); rewrite(output);
readln(s1);
readln(s2);
sd:=C(s1,s2);
write(sd);
end.
