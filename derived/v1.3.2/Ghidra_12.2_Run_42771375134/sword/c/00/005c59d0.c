/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c59d0; name: FUN_005c59d0
 */


undefined1  [16] FUN_005c59d0(char *param_1)

{
  undefined8 extraout_var;
  undefined1 auVar1 [16];
  
  if (param_1 == (char *)0x0) {
    return ZEXT816(0);
  }
  auVar1._0_8_ = atof(param_1);
  auVar1._8_8_ = extraout_var;
  return auVar1;
}


