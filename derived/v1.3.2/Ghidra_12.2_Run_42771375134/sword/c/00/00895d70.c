/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895d70; name: FUN_00895d70
 */


undefined8 FUN_00895d70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_027107a8;
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (**(char **)(*(long *)(param_1 + 8) + 0x60) == '\0') {
    return 0;
  }
  lVar2 = FUN_00893b80(*(undefined8 *)PTR_DAT_027107a8,param_1,0);
  if (lVar2 == -1) {
    return 0;
  }
  uVar3 = FUN_00895720(*(undefined8 *)PTR_DAT_02717598,lVar2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  FUN_00894480(*(undefined8 *)puVar1,lVar2);
  return 1;
}


