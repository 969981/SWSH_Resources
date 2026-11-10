/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008483b0; name: FUN_008483b0
 */


undefined8 FUN_008483b0(ulong *param_1,int *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (-1 < (char)*pbVar1)) {
    uVar4 = (uint)*pbVar1;
    *param_1 = (ulong)(pbVar1 + 1);
  }
  else {
    uVar4 = FUN_0080d720(param_1);
    if ((int)uVar4 < 0) {
      return 0;
    }
  }
  uVar2 = FUN_0080c950(param_1,uVar4);
  iVar3 = FUN_0080cc60(param_1);
  do {
    if (iVar3 < 1) {
      FUN_0080c9d0(param_1,uVar2);
      return 1;
    }
    pbVar1 = (byte *)*param_1;
    if (pbVar1 < (byte *)param_1[1]) {
      uVar5 = (ulong)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_0084844c;
      *param_1 = (ulong)(pbVar1 + 1);
      iVar3 = *param_2;
      if (iVar3 == param_2[1]) goto LAB_0084846c;
    }
    else {
      uVar5 = 0;
LAB_0084844c:
      uVar5 = FUN_0080d5d0(param_1,uVar5);
      if ((long)uVar5 < 0) {
        return 0;
      }
      iVar3 = *param_2;
      if (iVar3 == param_2[1]) {
LAB_0084846c:
        FUN_007f7a40(param_2,iVar3 + 1);
        iVar3 = *param_2;
      }
    }
    *param_2 = iVar3 + 1;
    *(int *)(*(long *)(param_2 + 2) + (long)iVar3 * 4 + 8) = (int)uVar5;
    iVar3 = FUN_0080cc60(param_1);
  } while( true );
}


