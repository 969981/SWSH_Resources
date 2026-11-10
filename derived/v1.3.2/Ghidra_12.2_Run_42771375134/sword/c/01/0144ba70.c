/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144ba70; name: FUN_0144ba70
 */


void FUN_0144ba70(long param_1,byte param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  *(byte *)(param_1 + 0x3e0) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    FUN_01451940(param_1);
    return;
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar5 = 0;
  iVar4 = 0;
  do {
    while (pbVar2 = (byte *)FUN_0152d900(lVar3,iVar4),
          5 < *pbVar2 || (1 << (ulong)(*pbVar2 & 0x1f) & 0x31U) == 0) {
      lVar1 = (long)iVar5;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + lVar1 * 4 + 0x140) = iVar4;
      iVar4 = iVar4 + 1;
      if (iVar4 == 0xa7) goto LAB_0144bb2c;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xa7);
LAB_0144bb2c:
  *(int *)(param_1 + 0x3dc) = iVar5;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0144bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


