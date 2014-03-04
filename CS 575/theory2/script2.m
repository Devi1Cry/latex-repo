
vals = [2,4,8,16,32,64];
output = zeros(6,2);

for n = 1:6
    output(n,1) = prob2(vals(n));
    output(n,2) = 0.125 * vals(n)^2;
end 

plot(vals,output);