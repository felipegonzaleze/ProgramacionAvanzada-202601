#!/bin/bash
gcc assert1.c -o assert1
./assert1

# Save the results of the excecution
lastExcecution=$?

# 0         Success
# 1         General Error
# 2         Missuse of sheel built in
# 126       Command found but not excecutable
# 127       Command not found
# 128 + N   Fatal error signal

# Display the excecution results
echo "Resultado de Bash: "$lastExcecution

# Cual fue la señal que nos entrego cuando el assert no se cumple ?
# the N Represents the signal number 128 +'6(SIGABRT) -> Failed Assertions