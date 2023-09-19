find . -type f -name \*.sh | xargs basename | sed s/\.sh$//g
