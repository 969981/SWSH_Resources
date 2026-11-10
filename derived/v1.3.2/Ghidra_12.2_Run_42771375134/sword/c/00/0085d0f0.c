/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085d0f0; name: FUN_0085d0f0
 */


undefined8 FUN_0085d0f0(undefined8 param_1,uint param_2,ulong *param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  
  pbVar3 = (byte *)*param_3;
  if (pbVar3 < (byte *)param_3[1]) {
    uVar5 = (ulong)*pbVar3;
    if ((char)*pbVar3 < '\0') goto LAB_0085d144;
    *param_3 = (ulong)(pbVar3 + 1);
    iVar4 = *param_4;
    if (iVar4 != param_4[1]) goto LAB_0085d174;
  }
  else {
    uVar5 = 0;
LAB_0085d144:
    uVar5 = FUN_0080d5d0(param_3,uVar5);
    if ((long)uVar5 < 0) {
      return 0;
    }
    iVar4 = *param_4;
    if (iVar4 != param_4[1]) goto LAB_0085d174;
  }
  FUN_007f7a40(param_4,iVar4 + 1);
  iVar4 = *param_4;
LAB_0085d174:
  *param_4 = iVar4 + 1;
  *(int *)(*(long *)(param_4 + 2) + (long)iVar4 * 4 + 8) = (int)uVar5;
  iVar4 = *param_4;
  iVar2 = param_4[1];
  if (0 < iVar2 - iVar4) {
    if (param_2 < 0x80) {
      iVar4 = (iVar2 + 1) - iVar4;
      do {
        pbVar3 = (byte *)*param_3;
        if ((byte *)param_3[1] <= pbVar3) {
          return 1;
        }
        if (*pbVar3 != param_2) {
          return 1;
        }
        pbVar1 = pbVar3 + 1;
        *param_3 = (ulong)pbVar1;
        if (pbVar1 < (byte *)param_3[1]) {
          uVar5 = (ulong)*pbVar1;
          if ((char)*pbVar1 < '\0') goto LAB_0085d1ec;
          *param_3 = (ulong)(pbVar3 + 2);
        }
        else {
          uVar5 = 0;
LAB_0085d1ec:
          uVar5 = FUN_0080d5d0(param_3,uVar5);
          if ((long)uVar5 < 0) {
            return 0;
          }
        }
        iVar2 = *param_4;
        iVar4 = iVar4 + -1;
        *param_4 = iVar2 + 1;
        *(int *)(*(long *)(param_4 + 2) + (long)iVar2 * 4 + 8) = (int)uVar5;
      } while (1 < iVar4);
    }
    else if (param_2 >> 0xe == 0) {
      iVar4 = (iVar2 + 1) - iVar4;
      do {
        pbVar3 = (byte *)*param_3;
        if ((int)(byte *)param_3[1] - (int)pbVar3 < 2) {
          return 1;
        }
        if ((param_2 & 0x7f | 0x80) != (uint)*pbVar3) {
          return 1;
        }
        if ((uint)pbVar3[1] != (param_2 >> 7 & 0xff)) {
          return 1;
        }
        pbVar1 = pbVar3 + 2;
        *param_3 = (ulong)pbVar1;
        if (pbVar1 < (byte *)param_3[1]) {
          uVar5 = (ulong)*pbVar1;
          if ((char)*pbVar1 < '\0') goto LAB_0085d294;
          *param_3 = (ulong)(pbVar3 + 3);
        }
        else {
          uVar5 = 0;
LAB_0085d294:
          uVar5 = FUN_0080d5d0(param_3,uVar5);
          if ((long)uVar5 < 0) {
            return 0;
          }
        }
        iVar2 = *param_4;
        iVar4 = iVar4 + -1;
        *param_4 = iVar2 + 1;
        *(int *)(*(long *)(param_4 + 2) + (long)iVar2 * 4 + 8) = (int)uVar5;
      } while (1 < iVar4);
    }
  }
  return 1;
}


