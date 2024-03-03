var i,n,j,m,t,x:longint;
   A:array[1..2005,1..2005] of longint;
   F:array[0..2005,0..2005] of longint;
   c:array[1..100000] of longint;

procedure sanguoc;
begin
    for i:=2 to 100000 do begin
    j:=i;
      while j<=100000 div i do begin
      inc(c[j]);
      inc(j,i);
    end;
    end;
end;

function min(a,b:longint):longint;
begin
        if (a<b) then
        exit(a) else
        exit(b);
end;
begin
   assign(input,'SCORES.INP'); reset(input);
   assign(output,'SCORES.OUT'); rewrite(output);
   sanguoc();
        readln(t);
        while t>0 do
        begin
        readln(n,m);
        for i:=1 to n do
        for j:=1 to m do begin
             read(x);
             a[i][j]:=c[x];
        end;
        for i:=1 to n do f[i][0]:=1000000;
        for i:=1 to m do f[0][i]:=1000000;
        for i:=1 to n do
                for j:=1 to m do
                if (i=1) and (j=1) then f[i][j]:=a[i][j]
                else f[i][j]:=min(f[i][j-1],f[i-1][j])+a[i][j];
        writeln(f[n][m]);
        t:=t-1;
        end;
end.

