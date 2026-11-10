/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ccd00; name: FUN_004ccd00
 */


undefined8 FUN_004ccd00(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = FUN_004cc190();
  uVar3 = FUN_004cd000(param_1,iVar2,param_1 + 0x28);
  if ((int)uVar3 == 1) {
    lVar4 = *(long *)(param_1 + 0x18);
    *(int *)(lVar4 + 0x264) = iVar2 - *(int *)(param_1 + 0x28);
    puVar1 = (uint *)(lVar4 + 0x26b);
    *puVar1 = *puVar1 & 0xfe3fffff;
    return uVar3;
  }
  return 2;
}


