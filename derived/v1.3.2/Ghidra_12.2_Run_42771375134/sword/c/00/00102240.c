/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00102240; name: _INIT_37
 */


void _INIT_37(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02710760;
  if ((*PTR_DAT_02710760 & 1) == 0) {
    *(char **)PTR_DAT_02710768 =
         "static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\\workspace\\rigel\\rom\\RomBuild\\program\\lib\\gflib3\\external\\boost\\include\\boost\\signals2\\connection.hpp:149:13)>::name() [T = (lambda at C:/jenkins\\workspace\\rigel\\rom\\RomBuild\\program\\lib\\gflib3\\external\\boost\\include\\boost\\signals2\\connection.hpp:149:13)]"
    ;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


