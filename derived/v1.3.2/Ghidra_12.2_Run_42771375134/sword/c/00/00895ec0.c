/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895ec0; name: FUN_00895ec0
 */


undefined8 FUN_00895ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 8) == 0) || (**(char **)(*(long *)(param_1 + 8) + 0x60) == '\0')) ||
     (lVar1 = FUN_00893b80(*(undefined8 *)PTR_DAT_027107a8,param_1,0), lVar1 == -1)) {
    return 0;
  }
  uVar2 = FUN_00895bd0(*(undefined8 *)PTR_DAT_02717598,param_2,param_3,lVar1);
  return uVar2;
}


