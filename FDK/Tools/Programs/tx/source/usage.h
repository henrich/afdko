"tx {[mode][mode options][shared options][files]}*\n"
"tx [other options]\n"
"\n"
"[modes: default -dump]\n"
"-dump           write text dump of font data            (-dump -h for help)\n"
"-ps             write PostScript dump of font data      (-ps -h for help)\n"
"-pdf            write PDF dump of font data             (-pdf -h for help)\n"
"-dcf            write text dump of CFF font data        (-dcf -h for help)\n"
,
"-mtx            write metrics dump of font data         (-mtx -h for help)\n"
"-cff            write CFF (Compact Font Format) FontSet (-cff -h for help)\n"
"-t1             write Type 1 font                       (-t1 -h for help)\n"
"-cef            write CEF (Compact Embedded Font) font  (-cef -h for help)\n"
"-afm            write AFM representation of font data   (-afm -h for help)\n"
"-svg            write SVG font                          (-svg -h for help)\n"
,
"-path           test path handling code                 (-path -h for help)\n"
"\n"
"[shared options]\n"
"-g <list>       comma separated glyph selector: tag, cid, or glyph name.\n",
"           May use ranges. Example: '-g Aacute,three.superior,100-123\'n",
" \n",
"-gx <list>      comma separated glyph exclusion selector: tag, cid, or glyph name.\n",
"          May use ranges. All glyphs except those\n",
"	listed are copied. The .notdef glyph will never be excluded.\n",
" \n",
"-fd <index>     only select glyphs belonging to specified font dict\n"
"-p <percent>    select random <percent> of src glyphs [repeatable]\n"
"-P <percent>    select randon <percent> of src glyphs [unrepeatable]\n"
"-U <list>       user design vector\n"
"-UNC            when using design vector, do not clamp it to min/max of MM font\n",
"-i <resid>      FFIL sfnt resource or TTC index selector\n"
"-y              select every font in FFIL or TTC\n"
,
"-x              use exact quadratic to cubic curve conversion (TrueType)\n"
"-X              generate combined approximate and exact conversions (TrueType)\n"
"-t              dump PostScript tokens from Type 1/CID font\n"
"-m <arg>        simulate memory allocation failure\n"
"-N              print filename and FontName to stderr before processing\n"
"-pg             preserve GIDs when subsetting\n"
"-cube           copies Cube elements through to output font. Can be used only with -t1 and -cff modes\n"
"-cubef          flattens Cube source to a normal Type 1 font. Can be used with all output formats\n"
"-n              remove hints\n"
"\n"
"[files]\n"
"*none*          input from stdin, output to stdout\n"
"<src>           input from <src>, output to stdout\n"
,
"<src> <dst>     input from <src>, output to <dst>\n"
"-f <src>+       input from <src>+, output to stdout\n"
"-o <dst> -f <src>+\n"
"                input from <src>+, output to <dst>\n"
"-a <src>+       input from <src>+, output to <filename>.<mode>\n"
"-A <src>+       input from <src>+, output to <FontName>.<mode>\n"
"-sr <srcroot>   read files from <srcroot> (combine with above options)\n"
"-sd <srcdir>    read files from <srcdir> (combine with above options)\n"
"-dd <dstdir>    write files to <dstdir> (combine with above options)\n"
,
"\n"
"[other options]\n"
"-s <script>     read options from <script>\n"
"-u              print usage\n"
"-h              print general help\n"
"-v              print component versions\n"
"-r              dump Macintosh resource map\n"
"-R              dump AppleSingle/Double entry descriptors\n"
"\n"
