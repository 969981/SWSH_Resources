/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001967d0; name: FUN_001967d0
 */


void FUN_001967d0(long param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_02710c28;
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x48);
    uVar4 = 0;
    do {
      uVar6 = *(uint *)(lVar5 + uVar4 * 4);
      if (uVar6 != 0) {
        lVar7 = *(long *)(param_1 + 0x38);
        do {
          pfVar1 = (float *)(lVar7 + (ulong)(*(uint *)(puVar3 + (ulong)((uVar6 & -uVar6) * 0x77cb531
                                                                       >> 0x1b) * 4) |
                                            (int)uVar4 << 5) * 0x20);
          *pfVar1 = *pfVar1 - *param_2;
          pfVar1[1] = pfVar1[1] - param_2[1];
          uVar6 = uVar6 - 1 & uVar6;
          pfVar1[2] = pfVar1[2] - param_2[2];
        } while (uVar6 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != (iVar2 - 1U >> 5) + 1);
  }
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) - *param_2;
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - param_2[1];
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - param_2[2];
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - *param_2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - param_2[1];
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - param_2[2];
  return;
}


