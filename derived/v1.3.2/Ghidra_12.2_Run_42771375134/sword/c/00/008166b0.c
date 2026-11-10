/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008166b0; name: FUN_008166b0
 */


bool FUN_008166b0(uint *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  int local_44;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + (long)param_2);
    puVar5 = param_1;
joined_r0x008166f0:
    do {
      uVar4 = (ulong)puVar5 & 7;
      if ((puVar5 < puVar1) && (bVar2 = uVar4 != 0, uVar4 = 0, bVar2)) {
        if (-1 < (char)*puVar5) {
          puVar5 = (uint *)((long)puVar5 + 1);
          goto joined_r0x008166f0;
        }
      }
      else if ((puVar5 < (uint *)((long)puVar1 - 7U)) && (uVar4 == 0)) {
        do {
          if (((puVar5[1] | *puVar5) & 0x80808080) != 0) break;
          puVar5 = puVar5 + 2;
        } while (puVar5 < (uint *)((long)puVar1 - 7U));
      }
      for (; (puVar5 < puVar1 && (-1 < (char)*puVar5)); puVar5 = (uint *)((long)puVar5 + 1)) {
      }
      iVar3 = (int)puVar5 - (int)param_1;
      iVar3 = FUN_00816490(&DAT_02613878,(long)param_1 + (long)iVar3,param_2 - iVar3,&local_44);
      puVar5 = (uint *)((long)puVar5 + (long)local_44);
    } while (iVar3 == 0xfd);
    iVar3 = (int)puVar5 - (int)param_1;
  }
  return iVar3 == param_2;
}


