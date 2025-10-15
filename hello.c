echo "
--- Compiling c ---
"
gcc HelloWorld.c -o hw
if [ $? -ne 0 ]; then
echo "ERROR: c compilation failed.
exit 1
"
fi
echo "
--- Executing c Program ---
./hw
echo "c Build and Test SUCCESS"