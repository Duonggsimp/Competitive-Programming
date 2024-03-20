var i,j:longint; a,b,c:array[0..100] of int64; n,t,d,k:int64;
   begin
      read(n);
      t:=1;
    for i:=1 to 18 do
       begin
        a[i]:=0;
        t:=t*10;
        b[i]:=t;
       end;
     t:=n;
     j:=0;
     d:=0;
     k:=0;
 while t<>0 do
       begin
        inc(k);
        c[k]:=t mod 10;
        t:=t div 10;
       end;
   b[0]:=1;
 for i:=1 to k do
      begin
        for j:=0 to 9 do
        inc(a[j],(n div b[i])*b[i-1]);
      end;
for j:=1 to k do
      begin
        for i:=1 to c[j]-1 do
        inc(a[i],b[j-1]);
       inc(a[c[j]],(n mod b[j-1])+1);
      end;
   for i:=0 to 9 do
  writeln(i,' ',a[i]);
end.
