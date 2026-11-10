/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d5d10; name: FUN_009d5d10
 */


undefined8 FUN_009d5d10(long param_1,ulong *param_2)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  
  puVar4 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x18);
LAB_009d5d78:
  while (pbVar2 = (byte *)*param_2, (byte *)param_2[1] <= pbVar2) {
    uVar7 = 0;
LAB_009d5e84:
    uVar6 = FUN_0080d8c0(param_2,uVar7);
    bVar5 = uVar6 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar6;
    uVar7 = (ulong)CONCAT14(bVar5,uVar6);
    if (bVar5) goto LAB_009d5da8;
LAB_009d5ea8:
    if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
      return 1;
    }
LAB_009d5d44:
    uVar7 = FUN_008148c0(param_2);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  bVar3 = *pbVar2;
  uVar7 = (ulong)(uint)bVar3;
  if ((char)bVar3 < '\x01') goto LAB_009d5e84;
  *(uint *)(param_2 + 4) = (uint)bVar3;
  *param_2 = (ulong)(pbVar2 + 1);
LAB_009d5da8:
  uVar9 = (uint)(uVar7 >> 3) & 0x1fffffff;
  uVar6 = (uint)uVar7;
  if (uVar9 == 2) {
    if (uVar6 != 0x12) {
LAB_009d5e18:
      if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
        return 1;
      }
      goto LAB_009d5d44;
    }
  }
  else {
    if (uVar9 != 1) goto LAB_009d5ea8;
    if (uVar6 != 8) goto LAB_009d5e18;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar3 = *(byte *)*param_2;
      uVar6 = (uint)bVar3;
      if ((char)bVar3 < '\0') goto LAB_009d5d58;
      *(uint *)(param_1 + 0x20) = uVar6;
      pcVar10 = (char *)(*param_2 + 1);
      *param_2 = (ulong)pcVar10;
      if ((char *)param_2[1] <= pcVar10) goto LAB_009d5d78;
    }
    else {
      uVar6 = 0;
LAB_009d5d58:
      lVar8 = FUN_0080d5d0(param_2,uVar6);
      *(int *)(param_1 + 0x20) = (int)lVar8;
      if (lVar8 < 0) {
        return 0;
      }
      pcVar10 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar10) goto LAB_009d5d78;
    }
    if (*pcVar10 != '\x12') goto LAB_009d5d78;
    *param_2 = (ulong)(pcVar10 + 1);
  }
  lVar8 = *plVar1;
  if (lVar8 == *(long *)puVar4) {
    FUN_009b58d0(plVar1,*(long *)puVar4);
    lVar8 = *plVar1;
  }
  uVar7 = FUN_008160d0(param_2,lVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_009d5d78;
}


