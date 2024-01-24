var
  a, f: array[0..1000000] of qword;
  n, i, j: longint;

  function max(a, b: qword): qword;
  begin
    if (a > b) then
      exit(a)
    else
      exit(b);
  end;

begin
  readln(n);
  for i := 1 to n do
    Read(a[i]);
  f[1] := a[1];
  f[2] := a[1] + a[2];
  for i := 3 to n do
    f[i] := max(f[i - 3] + a[i - 1] + a[i], max(f[i - 2] + a[i], f[i - 1]));
  Write(f[n]);
  readln;
end.
