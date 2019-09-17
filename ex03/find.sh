find . -name "*.sh" -exec basename -a {} + | sed 's/.sh$//'

