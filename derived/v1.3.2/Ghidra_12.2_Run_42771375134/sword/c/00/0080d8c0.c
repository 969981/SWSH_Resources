/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080d8c0; name: FUN_0080d8c0
 */


ulong FUN_0080d8c0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 auVar6 [12];
  
  pbVar4 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  iVar2 = (int)pbVar5 - (int)pbVar4;
  if ((iVar2 < 10) && (iVar2 < 1)) {
    if ((int)pbVar5 == (int)pbVar4) {
      if (((0 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[3] == (int)param_1[5])) &&
         ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6])) goto LAB_0080da34;
    }
    if (pbVar4 == pbVar5) {
      uVar3 = FUN_0080cd70(param_1);
      if ((uVar3 & 1) == 0) {
        if ((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c)) {
          *(bool *)((long)param_1 + 0x24) = (int)param_1[5] == (int)param_1[6];
          return 0;
        }
LAB_0080da34:
        *(undefined1 *)((long)param_1 + 0x24) = 1;
        return 0;
      }
      pbVar4 = (byte *)*param_1;
      pbVar5 = (byte *)param_1[1];
    }
    if ((pbVar5 <= pbVar4) || ((char)*pbVar4 < '\0')) {
      auVar6 = FUN_0080d3e0(param_1);
      if ((auVar6._8_4_ & 1) == 0) {
        return 0;
      }
      return auVar6._0_8_;
    }
    uVar3 = (ulong)*pbVar4;
  }
  else {
    if (param_2 != 0) {
      uVar1 = (param_2 + (uint)pbVar4[1] * 0x80) - 0x80;
      if (-1 < (char)pbVar4[1]) {
        *param_1 = (long)(pbVar4 + 2);
        return (ulong)uVar1;
      }
      uVar1 = (uVar1 + (uint)pbVar4[2] * 0x4000) - 0x4000;
      if (-1 < (char)pbVar4[2]) {
        *param_1 = (long)(pbVar4 + 3);
        return (ulong)uVar1;
      }
      uVar1 = (uVar1 + (uint)pbVar4[3] * 0x200000) - 0x200000;
      if (-1 < (char)pbVar4[3]) {
        *param_1 = (long)(pbVar4 + 4);
        return (ulong)uVar1;
      }
      uVar3 = (ulong)(uVar1 + (uint)pbVar4[4] * 0x10000000 + 0xf0000000);
      if (-1 < (char)pbVar4[4]) {
        *param_1 = (long)(pbVar4 + 5);
        return uVar3;
      }
      if (-1 < (char)pbVar4[5]) {
        *param_1 = (long)(pbVar4 + 6);
        return uVar3;
      }
      if (-1 < (char)pbVar4[6]) {
        *param_1 = (long)(pbVar4 + 7);
        return uVar3;
      }
      if (-1 < (char)pbVar4[7]) {
        *param_1 = (long)(pbVar4 + 8);
        return uVar3;
      }
      if (-1 < (char)pbVar4[8]) {
        *param_1 = (long)(pbVar4 + 9);
        return uVar3;
      }
      if ((char)pbVar4[9] < '\0') {
        return 0;
      }
      *param_1 = (long)(pbVar4 + 10);
      return uVar3;
    }
    uVar3 = 0;
  }
  *param_1 = (long)(pbVar4 + 1);
  return uVar3;
}


