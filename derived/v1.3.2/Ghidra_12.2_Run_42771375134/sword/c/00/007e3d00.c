/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3d00; name: FUN_007e3d00
 */


long FUN_007e3d00(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long extraout_x1;
  
  iVar2 = FUN_007e3d50(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98),param_1,param_2,2);
  if (iVar2 == 0) {
    return 0;
  }
  lVar1 = extraout_x1;
  if (*(char *)(extraout_x1 + 0x44) != '\0') {
    lVar1 = 0;
  }
  return lVar1;
}


