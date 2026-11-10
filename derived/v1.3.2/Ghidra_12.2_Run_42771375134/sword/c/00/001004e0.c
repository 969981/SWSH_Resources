/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001004e0; name: _INIT_6
 */


void _INIT_6(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02710478;
  if ((*PTR_DAT_02710478 & 1) == 0) {
    *(char **)PTR_DAT_02710480 =
         "static const char *boost::detail::core_typeid_<void (*)(const void *)>::name() [T = void (*)(const void *)]"
    ;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


