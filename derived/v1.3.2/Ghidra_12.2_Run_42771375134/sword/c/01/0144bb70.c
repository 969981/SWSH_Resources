/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144bb70; name: FUN_0144bb70
 */


void FUN_0144bb70(long param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long local_60;
  long local_58;
  
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
      if (iVar4 == 0xa7) goto LAB_0144bc14;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xa7);
LAB_0144bc14:
  if ((param_2 & 1) != 0) {
    local_60 = param_1;
    local_58 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_0144d8b0(param_1 + 0x140,param_1 + 0x140 + (long)iVar5 * 4,&local_60);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  *(int *)(param_1 + 0x3dc) = iVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


