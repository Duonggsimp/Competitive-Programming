var
s,st,sk,temp:ansistring;
n,i,j,d,tam:longint;
a:array[65..90] of string;
b:array[0..20000] of string;

function C(n:longint):ansistring;
var i:longint;
s,a,s1:ansistring;
   begin
     s:='';
     s1:='';
     a:='';
    for i:=1 to 5 do begin
       str(n mod 2, a);
       s:=s+a;
       n:=n div 2;
     end;
    for i:=length(s) downto 1 do
       s1:=s1+s[i];
   exit(s1);
 end;

begin
 assign(input,'SCORES.INP'); reset(input);
 assign(output,'SCORES.OUT'); rewrite(output);

 readln(s);
    for i:=65 to 90 do begin
       inc(d);
       a[i]:=C(d);
     end;

 d:=65;
    for i:=1 to 26 do begin
        val(C(d),tam);
        b[tam]:=chr(d);
        //writeln(b[tam]);
        inc(d);
     end;

    for j:=1 to length(s) do
        st:=st+a[ord(s[j])];
    for i:=1 to length(st) div length(s) do begin
        j:=i;
        while j<=length(st) do begin
          sk:=sk+st[j];
          j:=j+5;
        end;
     end;

  b[0]:=' ';
  i:=1;
     while i<=length(sk) do begin
       temp:=copy(sk,i,5);
       //writeln(temp);
       val(temp,tam);
       write(b[tam]);
       inc(i,5);
      end;
 end.
