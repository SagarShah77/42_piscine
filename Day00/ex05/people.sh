 #!/bin/sh
ldapsearch -x -L "(cn=z*)" cn | grep '^cn:' | sort -r --ignore-case | cut -c 5-99
