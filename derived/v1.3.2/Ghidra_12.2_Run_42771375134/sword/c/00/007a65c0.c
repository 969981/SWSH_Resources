/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a65c0; name: FUN_007a65c0
 */


undefined8 FUN_007a65c0(long param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
LAB_007a6618:
  while (pbVar8 = (byte *)*param_2, (byte *)param_2[1] <= pbVar8) {
    uVar5 = 0;
LAB_007a6748:
    uVar3 = FUN_0080d8c0(param_2,uVar5);
    bVar2 = uVar3 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar3;
    uVar5 = (ulong)CONCAT14(bVar2,uVar3);
    if (bVar2) goto LAB_007a6648;
LAB_007a676c:
    if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
      return 1;
    }
LAB_007a65e4:
    uVar5 = FUN_008148c0(param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  bVar1 = *pbVar8;
  uVar5 = (ulong)(uint)bVar1;
  if ((char)bVar1 < '\x01') goto LAB_007a6748;
  *(uint *)(param_2 + 4) = (uint)bVar1;
  *param_2 = (ulong)(pbVar8 + 1);
LAB_007a6648:
  uVar6 = (uint)(uVar5 >> 3) & 0x1fffffff;
  uVar3 = (uint)uVar5;
  if (uVar6 == 2) {
    if (uVar3 != 0x10) {
LAB_007a66c0:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
      goto LAB_007a65e4;
    }
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) goto LAB_007a66e0;
LAB_007a66b0:
    uVar3 = 0;
LAB_007a6720:
    lVar4 = FUN_0080d5d0(param_2,uVar3);
    if (lVar4 < 0) {
      return 0;
    }
    *(int *)(param_1 + 0x18) = (int)lVar4;
    if (*param_2 != param_2[1]) goto LAB_007a6618;
  }
  else {
    if (uVar6 != 1) goto LAB_007a676c;
    if (uVar3 != 8) goto LAB_007a66c0;
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) {
      uVar3 = (uint)*pbVar8;
      if ((char)*pbVar8 < '\0') goto LAB_007a65f8;
      *param_2 = (ulong)(pbVar8 + 1);
      *(uint *)(param_1 + 0x14) = uVar3;
      pbVar8 = (byte *)*param_2;
      pbVar7 = (byte *)param_2[1];
      if (pbVar7 <= pbVar8) goto LAB_007a6618;
    }
    else {
      uVar3 = 0;
LAB_007a65f8:
      lVar4 = FUN_0080d5d0(param_2,uVar3);
      if (lVar4 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = (int)lVar4;
      pbVar8 = (byte *)*param_2;
      pbVar7 = (byte *)param_2[1];
      if (pbVar7 <= pbVar8) goto LAB_007a6618;
    }
    if (*pbVar8 != 0x10) goto LAB_007a6618;
    pbVar8 = pbVar8 + 1;
    *param_2 = (ulong)pbVar8;
    if (pbVar7 <= pbVar8) goto LAB_007a66b0;
LAB_007a66e0:
    uVar3 = (uint)*pbVar8;
    if ((char)*pbVar8 < '\0') goto LAB_007a6720;
    *param_2 = (ulong)(pbVar8 + 1);
    *(uint *)(param_1 + 0x18) = uVar3;
    if (*param_2 != param_2[1]) goto LAB_007a6618;
  }
  if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_007a6618;
}


