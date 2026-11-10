/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00463290; name: FUN_00463290
 */


undefined8 FUN_00463290(long param_1,float *param_2,int param_3,long param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x38) != param_3) {
    return 1;
  }
  if (*(uint *)(param_1 + 0x48) != param_5) {
    return 1;
  }
  if (param_5 == 0) {
    return 0;
  }
  pfVar5 = *(float **)(param_1 + 0x30);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(*(long *)(param_1 + 0x40) + uVar4 * 0x18 + 8);
    if (iVar2 != *(int *)(param_4 + uVar4 * 8 + 4)) {
      return 1;
    }
    if (iVar2 != 0) {
      bVar3 = *param_2 != *pfVar5;
      if (1 < iVar2) {
        iVar6 = 0;
        do {
          if (bVar3) {
            return 1;
          }
          if (param_2[1] != pfVar5[1]) {
            return 1;
          }
          if (param_2[2] != pfVar5[2]) {
            return 1;
          }
          if (param_2[3] != pfVar5[3]) {
            return 1;
          }
          param_2 = param_2 + 4;
          iVar6 = iVar6 + 1;
          pfVar5 = pfVar5 + 4;
          bVar3 = *param_2 != *pfVar5;
        } while (iVar6 < iVar2 + -1);
      }
      if (bVar3) {
        return 1;
      }
      if (param_2[1] != pfVar5[1]) {
        return 1;
      }
      if (param_2[2] != pfVar5[2]) {
        return 1;
      }
      param_2 = param_2 + 4;
      pfVar5 = pfVar5 + 4;
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    if (param_5 <= uVar1) {
      return 0;
    }
  } while( true );
}


