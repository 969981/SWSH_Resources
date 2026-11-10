/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084a610; name: FUN_0084a610
 */


undefined8 FUN_0084a610(long param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  
LAB_0084a62c:
  while (pbVar8 = (byte *)*param_2, (byte *)param_2[1] <= pbVar8) {
    uVar5 = 0;
LAB_0084a6e8:
    iVar3 = FUN_0080d8c0(param_2,uVar5);
    bVar2 = iVar3 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar3;
    uVar5 = (ulong)CONCAT14(bVar2,iVar3);
    if (bVar2) goto LAB_0084a65c;
LAB_0084a70c:
    if ((uint)uVar5 == 0) {
      return 1;
    }
    if (((uint)uVar5 & 7) == 4) {
      return 1;
    }
LAB_0084a720:
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar5 = FUN_00810550(param_2,uVar5 & 0xffffffff,uVar4);
    }
    else {
      uVar5 = FUN_00810550(param_2,uVar5 & 0xffffffff,uVar7 & 0xfffffffffffffffe);
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  bVar1 = *pbVar8;
  uVar5 = (ulong)(uint)bVar1;
  if ((char)bVar1 < '\x01') goto LAB_0084a6e8;
  *(uint *)(param_2 + 4) = (uint)bVar1;
  *param_2 = (ulong)(pbVar8 + 1);
LAB_0084a65c:
  uVar6 = (uint)(uVar5 >> 3) & 0x1fffffff;
  uVar9 = (uint)uVar5;
  if (uVar6 == 2) {
    if (uVar9 != 0x10) {
      if (uVar9 == 0) {
        return 1;
      }
LAB_0084a68c:
      if ((uVar9 & 7) == 4) {
        return 1;
      }
      goto LAB_0084a720;
    }
    pbVar8 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar8) goto LAB_0084a7ac;
LAB_0084a6cc:
    uVar5 = (ulong)*pbVar8;
    if ((char)*pbVar8 < '\0') goto LAB_0084a7b0;
    *param_2 = (ulong)(pbVar8 + 1);
  }
  else {
    if (uVar6 != 1) goto LAB_0084a70c;
    if (uVar9 != 8) {
      if (uVar9 == 0) {
        return 1;
      }
      goto LAB_0084a68c;
    }
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) {
      uVar5 = (ulong)*pbVar8;
      if ((char)*pbVar8 < '\0') goto LAB_0084a764;
      *param_2 = (ulong)(pbVar8 + 1);
    }
    else {
      uVar5 = 0;
LAB_0084a764:
      uVar5 = FUN_0080d5d0(param_2,uVar5);
      if ((long)uVar5 < 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x18) = (int)uVar5;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    pbVar8 = (byte *)*param_2;
    if (((byte *)param_2[1] <= pbVar8) || (*pbVar8 != 0x10)) goto LAB_0084a62c;
    pbVar8 = pbVar8 + 1;
    *param_2 = (ulong)pbVar8;
    if (pbVar8 < (byte *)param_2[1]) goto LAB_0084a6cc;
LAB_0084a7ac:
    uVar5 = 0;
LAB_0084a7b0:
    uVar5 = FUN_0080d5d0(param_2,uVar5);
    if ((long)uVar5 < 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x1c) = (int)uVar5;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_0084a62c;
}


