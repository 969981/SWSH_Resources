/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895f40; name: FUN_00895f40
 */


undefined8 FUN_00895f40(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_2 + 8) != 0) && (**(char **)(*(long *)(param_2 + 8) + 0x60) != '\0')) {
    lVar1 = FUN_00893b80(*(undefined8 *)PTR_DAT_027107a8,param_2,0);
    if (lVar1 != -1) {
      uVar2 = FUN_00895b50(param_1,*(undefined8 *)PTR_DAT_02717598,param_3,lVar1,param_4);
      return uVar2;
    }
  }
  return 0;
}


