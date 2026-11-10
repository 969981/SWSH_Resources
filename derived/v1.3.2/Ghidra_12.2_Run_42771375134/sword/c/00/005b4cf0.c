/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b4cf0; name: FUN_005b4cf0
 */


int FUN_005b4cf0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  
  uVar4 = DAT_01d4c570;
  if ((*(char *)(param_1 + 0x12d) == '\0') ||
     (uVar8 = (ulong)*(uint *)(param_1 + 0x3f8), (int)*(uint *)(param_1 + 0x3f8) < 1)) {
    iVar7 = 0;
    iVar5 = *(int *)(param_1 + 0xd0);
  }
  else {
    lVar11 = 0;
    iVar7 = 0;
    lVar12 = 8;
    uVar10 = 0;
    do {
      lVar9 = uVar10 * 8;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x430) + lVar12);
      uVar13 = 0x40400000;
      if (uVar10 != 0) {
        uVar13 = uVar4;
      }
      uVar1 = uVar10 + 1;
      iVar5 = FUN_005b36a0(uVar13,param_1,puVar2[-1],*puVar2,
                           *(undefined8 *)(*(long *)(param_1 + 0x488) + lVar9),
                           *(undefined8 *)(*(long *)(param_1 + 0x438) + lVar9),
                           *(undefined4 *)(*(long *)(param_1 + 0x400) + uVar10 * 4),
                           *(undefined4 *)(*(long *)(param_1 + 0x408) + uVar10 * 4),
                           *(undefined8 *)(*(long *)(param_1 + 0x410) + lVar9),
                           *(undefined8 *)(*(long *)(param_1 + 0x418) + lVar9),
                           *(long *)(param_1 + 0x420) + lVar11,*(long *)(param_1 + 0x428) + lVar11,
                           uVar10 == 0,uVar10 == (int)uVar8 - 1);
      if (-1 < iVar5) {
        iVar5 = iVar7;
      }
      iVar6 = FUN_005b4980(param_1,uVar10 & 0xffffffff);
      if (-1 < iVar6) {
        iVar6 = iVar5;
      }
      iVar7 = FUN_005b45f0(param_1,uVar10 & 0xffffffff);
      uVar8 = (ulong)*(int *)(param_1 + 0x3f8);
      if (-1 < iVar7) {
        iVar7 = iVar6;
      }
      lVar11 = lVar11 + 0x80;
      lVar12 = lVar12 + 8;
      uVar10 = uVar1;
    } while ((long)uVar1 < (long)uVar8);
    iVar5 = *(int *)(param_1 + 0xd0);
  }
  if (0 < iVar5) {
    uVar8 = 0;
    lVar11 = 0x10;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x4a8) + lVar11);
      if (uVar3 < 6) {
        iVar5 = FUN_005b2a60(param_1,uVar8 & 0xffffffff);
        if (iVar5 < 0) goto LAB_005b4e7c;
      }
      else {
        if (uVar3 == 7) {
          iVar5 = FUN_005b3330(param_1,uVar8 & 0xffffffff);
          if (-1 < iVar5) goto LAB_005b4e80;
        }
        else {
          iVar5 = -4;
        }
LAB_005b4e7c:
        iVar7 = iVar5;
      }
LAB_005b4e80:
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x108;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0xd0));
  }
  return iVar7;
}


