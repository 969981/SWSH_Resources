/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001020f0; name: _INIT_30
 */


void _INIT_30(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027106f0;
  if ((*PTR_DAT_027106f0 & 1) == 0) {
    *(char **)PTR_DAT_027106f8 =
         "static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\\workspace\\rigel\\rom\\RomBuild\\program\\lib\\gflib3\\external\\boost\\include\\boost\\signals2\\detail\\signal_template.hpp:521:15)>::name() [T = (lambda at C:/jenkins\\workspace\\rigel\\rom\\RomBuild\\program\\lib\\gflib3\\external\\boost\\include\\boost\\signals2\\detail\\signal_template.hpp:521:15)]"
    ;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


