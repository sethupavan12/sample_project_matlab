
function roots = quadraticSolver(a,b,c)
    % quadraticSolver returns solutions to the
    % quadratic equation a*x^2 + b*x + c = 0.
    roots = zeros(1,2) %HAD TO SPECIFY THIS FOR CODER
    if ~isa(a,'numeric') || ~isa(b,'numeric') || ~isa(c,'numeric')
        error('quadraticSolver:InputMustBeNumeric', ...
            'Coefficients must be numeric.');
    end

    roots(1) = (-b + sqrt(b^2 - 4*a*c))/ (2*a);
    roots(2) = (-b - sqrt(b^2 - 4*a*c)) / (2*a);

end

function runAll() % Run all the functions in this class
    x=1;
    y=1;
    lowRange = 2;
    highRange = 50;
    a = randi([lowRange highRange],x,y);
    b = randi([lowRange highRange],x,y);
    c = randi([lowRange highRange],x,y);
    fprintf(" The roots for (%dx^2)+(%dx) +%d",a,b,c);
    sheesh.quadraticSolver(a,b,c)
end







    



% BUFFER
%        function num = giveRandomNumber(x,y)
%             %METHOD1 Summary of this method goes here
%             %   Detailed explanation goes here
%             %need to find if MAX_SIZE is possible or not
%             if ~isa(x,'numeric') || ~isa(y,'numeric')
%                 error('quadraticSolver:InputMustBeNumeric','Coefficients must be numeric.');
%             end
%             num = randi([2 1000000],x,y); 
%             %fprintf('Random Number is %d ',g);
%         end

