/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00525220; name: FUN_00525220
 */


undefined4 FUN_00525220(long param_1,uint param_2,byte param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(param_1 + 0x298);
    iVar1 = *(int *)(param_1 + 0x400);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x400);
  }
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 == 0x7fffffff) {
    lVar4 = 0;
    lVar6 = 0;
    uVar3 = 0;
    do {
      pbVar7 = (byte *)(*(long *)(param_1 + 0x2a8) + lVar4);
      lVar4 = lVar4 + 0x50;
      bVar2 = *(long *)(pbVar7 + 0x48) != 0;
      *pbVar7 = bVar2 & param_3;
      lVar6 = lVar6 + 1;
      if (!bVar2) {
        uVar3 = 1;
      }
    } while (lVar6 < *(int *)(param_1 + 0x400));
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    do {
      if (param_2 == uVar5) {
        pbVar7 = (byte *)(*(long *)(param_1 + 0x2a8) + (ulong)param_2 * 0x50);
        bVar2 = *(long *)(pbVar7 + 0x48) != 0;
        if (!bVar2) {
          uVar3 = 1;
        }
        *pbVar7 = bVar2 & param_3;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x400));
  }
  return uVar3;
}


