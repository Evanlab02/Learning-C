for dir in $(find exercism/c/ -maxdepth 1 -type d | tail -n +2); do
    cd "$dir"
    rm -rf .exercism
    cd ../../..
done