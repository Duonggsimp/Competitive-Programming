var i,n,x,m,j:longint;
A:array[1..1000] of longint;
F:array[0..1000000] of longint;
function min(a,b:longint):longint;
begin
        if a>b then exit(b);
        exit(a);
end;
begin
        m:=1000000000+1;
        readln(n,x);
        for i:=1 to n do read(a[i]);
        f[0]:=0;
        for i:=1 to x do
        begin
                f[i]:=m;
                for j:=1 to n do
                if a[j]<=i then f[i]:=min(f[i],f[i-a[j]]+1);
        end;
        if f[x]<>m then write(f[x])
        else write(-1);
end.
