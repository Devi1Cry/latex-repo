
vals = [2,4,8,16,32,64];
output = zeros(6,2);

for n = 1:6
    output(n,1) = prob1(vals(n));
    output(n,2) = (log2(vals(n)))^2;
end 

plot(vals,output);