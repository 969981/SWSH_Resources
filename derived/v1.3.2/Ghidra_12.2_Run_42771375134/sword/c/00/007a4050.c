/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a4050; name: FUN_007a4050
 */


undefined8 FUN_007a4050(long param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  
LAB_007a40a8:
  while (pbVar7 = (byte *)*param_2, (byte *)param_2[1] <= pbVar7) {
    uVar5 = 0;
LAB_007a41c4:
    uVar3 = FUN_0080d8c0(param_2,uVar5);
    bVar2 = uVar3 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar3;
    uVar5 = (ulong)CONCAT14(bVar2,uVar3);
    if (bVar2) goto LAB_007a40d8;
LAB_007a41e8:
    if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
      return 1;
    }
LAB_007a4074:
    uVar5 = FUN_008148c0(param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  bVar1 = *pbVar7;
  uVar5 = (ulong)(uint)bVar1;
  if ((char)bVar1 < '\x01') goto LAB_007a41c4;
  *(uint *)(param_2 + 4) = (uint)bVar1;
  *param_2 = (ulong)(pbVar7 + 1);
LAB_007a40d8:
  uVar6 = (uint)(uVar5 >> 3) & 0x1fffffff;
  uVar3 = (uint)uVar5;
  if (uVar6 == 2) {
    if (uVar3 != 0x10) {
LAB_007a4160:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
      goto LAB_007a4074;
    }
    pbVar7 = (byte *)*param_2;
    if (pbVar7 < (byte *)param_2[1]) goto LAB_007a4140;
LAB_007a4180:
    auVar9 = FUN_0080d3e0(param_2);
    uVar5 = auVar9._0_8_;
    if ((auVar9._8_8_ & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar6 != 1) goto LAB_007a41e8;
    if (uVar3 != 8) goto LAB_007a4160;
    pbVar7 = (byte *)*param_2;
    if (pbVar7 < (byte *)param_2[1]) {
      uVar3 = (uint)*pbVar7;
      if ((char)*pbVar7 < '\0') goto LAB_007a4088;
      *param_2 = (ulong)(pbVar7 + 1);
      *(uint *)(param_1 + 0x14) = uVar3;
      pbVar7 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_007a40a8;
    }
    else {
      uVar3 = 0;
LAB_007a4088:
      lVar4 = FUN_0080d5d0(param_2,uVar3);
      if (lVar4 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = (int)lVar4;
      pbVar7 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_007a40a8;
    }
    if (*pbVar7 != 0x10) goto LAB_007a40a8;
    pbVar7 = pbVar7 + 1;
    *param_2 = (ulong)pbVar7;
    if (pbVar8 <= pbVar7) goto LAB_007a4180;
LAB_007a4140:
    if ((char)*pbVar7 < '\0') goto LAB_007a4180;
    uVar5 = (ulong)*pbVar7;
    *param_2 = (ulong)(pbVar7 + 1);
  }
  *(bool *)(param_1 + 0x18) = uVar5 != 0;
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_007a40a8;
}


