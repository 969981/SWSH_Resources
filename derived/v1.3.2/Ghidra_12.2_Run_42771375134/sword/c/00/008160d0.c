/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008160d0; name: FUN_008160d0
 */


undefined8 FUN_008160d0(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 < (byte *)param_1[1]) {
    bVar2 = *pbVar1;
    uVar4 = (ulong)(uint)bVar2;
    if (-1 < (char)bVar2) {
      *param_1 = (ulong)(pbVar1 + 1);
      if ((int)(byte *)param_1[1] - (int)(pbVar1 + 1) < (int)(uint)bVar2) goto LAB_00816114;
      goto LAB_0081616c;
    }
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_0080d5d0(param_1,uVar4);
  if ((uVar4 & 0x8000000080000000) != 0) {
    return 0;
  }
  if ((int)param_1[1] - (int)*param_1 < (int)uVar4) {
LAB_00816114:
    uVar3 = FUN_0080d0c0(param_1,param_2);
    return uVar3;
  }
LAB_0081616c:
  std::string::resize((ulong)param_2,(char)uVar4);
  bVar2 = *param_2;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return 1;
    }
  }
  else if (*(long *)(param_2 + 8) == 0) {
    return 1;
  }
  if ((bVar2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    if (param_2 == (byte *)0x0) {
      return 1;
    }
  }
  memcpy(param_2,(void *)*param_1,(long)(int)uVar4);
  *param_1 = *param_1 + (long)(int)uVar4;
  return 1;
}


