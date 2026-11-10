/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ac5d0; name: FUN_011ac5d0
 */


undefined8 FUN_011ac5d0(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  puVar6 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = (long *)(param_1 + 0x18);
LAB_011ac5f4:
  while (pbVar3 = (byte *)*param_2, (byte *)param_2[1] <= pbVar3) {
    uVar9 = 0;
LAB_011ac704:
    uVar8 = FUN_0080d8c0(param_2,uVar9);
    bVar7 = uVar8 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar8;
    uVar9 = (ulong)CONCAT14(bVar7,uVar8);
    if (bVar7) goto LAB_011ac624;
joined_r0x011ac72c:
    if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
      return 1;
    }
    uVar9 = FUN_008148c0(param_2);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  bVar5 = *pbVar3;
  uVar9 = (ulong)(uint)bVar5;
  if ((char)bVar5 < '\x01') goto LAB_011ac704;
  *(uint *)(param_2 + 4) = (uint)bVar5;
  *param_2 = (ulong)(pbVar3 + 1);
LAB_011ac624:
  uVar11 = (uint)(uVar9 >> 3) & 0x1fffffff;
  uVar8 = (uint)uVar9;
  if (uVar11 == 2) {
    if (uVar8 != 0x12) goto joined_r0x011ac72c;
  }
  else {
    if ((uVar11 != 1) || (uVar8 != 10)) goto joined_r0x011ac72c;
    lVar12 = *(long *)puVar6;
    lVar10 = *plVar2;
    if (lVar10 == lVar12) {
      FUN_009b58d0(plVar2,lVar12);
      lVar10 = *plVar2;
    }
    uVar9 = FUN_008160d0(param_2,lVar10);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    pcVar4 = (char *)*param_2;
    if (((char *)param_2[1] <= pcVar4) || (*pcVar4 != '\x12')) goto LAB_011ac5f4;
    *param_2 = (ulong)(pcVar4 + 1);
  }
  lVar12 = *(long *)puVar6;
  lVar10 = *plVar1;
  if (lVar10 == lVar12) {
    FUN_009b58d0(plVar1,lVar12);
    lVar10 = *plVar1;
  }
  uVar9 = FUN_008160d0(param_2,lVar10);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_011ac5f4;
}


