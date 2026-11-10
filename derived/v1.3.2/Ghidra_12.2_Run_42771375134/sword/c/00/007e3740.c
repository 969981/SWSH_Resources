/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3740; name: FUN_007e3740
 */


long FUN_007e3740(long param_1,undefined8 param_2)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = FUN_007e34d0(*(undefined8 *)(param_1 + 0x20),param_1,param_2);
  if ((iVar1 == 2) && (*(char *)(extraout_x1 + 0x44) != '\0')) {
    return extraout_x1;
  }
  return 0;
}


