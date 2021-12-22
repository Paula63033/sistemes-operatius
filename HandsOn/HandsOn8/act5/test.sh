echo  "+ Running Tests +++++++++++++++++++++"

declare -i N=3

for((i=1;i<=$N;i++)); do
echo  "++ Running Test ${i}."
input="./test${i}/input.csv"
output="./test${i}/output.json"
expected="./test${i}/expected.json"
./act05.sh $input $output
cmp  $expected $output && echo '### SUCCESS: Test passed files are identical ###' || echo '### WARNING: Test not passed files are different ###'
rm -f $output
done
echo  "+ Ending Tests +++++++++++++++++++++"