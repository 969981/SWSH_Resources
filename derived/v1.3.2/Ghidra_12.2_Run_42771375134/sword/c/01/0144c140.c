/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144c140; name: FUN_0144c140
 */


uint FUN_0144c140(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_304 [169];
  
  puVar2 = PTR_DAT_02710798;
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  iVar3 = FUN_0152e180(lVar9);
  FUN_0152e170(lVar9);
  lVar10 = *(long *)(*(long *)puVar2 + 0x268);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  uVar4 = FUN_0152e1d0(lVar10);
  uVar5 = FUN_01452c10(param_1,uVar4);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  uVar14 = 0;
  if (iVar3 != 0) {
    uVar14 = uVar5;
  }
  iVar3 = FUN_0144bed0(param_1);
  uVar5 = 0;
  if (uVar14 == 0 || iVar3 == 0) goto joined_r0x0144c3d4;
  if (*(int *)(param_1 + 0x3dc) < 1) {
    uVar15 = 0;
  }
  else {
    lVar11 = 0;
    uVar15 = 0;
    lVar10 = param_1 + 0x140;
    do {
      iVar6 = FUN_01451b60(param_1,*(undefined4 *)(lVar10 + lVar11 * 4));
      if (iVar6 == 3) {
        if (((&DAT_00053120)[lVar9] == '\0') &&
           (iVar6 = *(int *)(lVar10 + lVar11 * 4), iVar7 = FUN_01452e50(param_1),
           iVar6 == iVar7 + -1)) {
          uVar14 = uVar14 - 1;
        }
        else {
          pcVar8 = (char *)FUN_0152d900(lVar9,*(undefined4 *)(lVar10 + lVar11 * 4));
          if (*pcVar8 == '\x01') {
            uVar4 = *(undefined4 *)(lVar10 + lVar11 * 4);
            local_304[(int)uVar15] = uVar4;
            FUN_0152d930(lVar9,uVar4,0);
            uVar15 = uVar15 + 1;
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x3dc));
    if (uVar14 == 0) {
      uVar5 = 0;
      goto joined_r0x0144c3d4;
    }
  }
  uVar1 = iVar3 - 3U & ((int)(iVar3 - 3U) >> 0x1f ^ 0xffffffffU);
  if ((int)uVar1 < iVar3) {
    uVar5 = 0;
    do {
      iVar6 = FUN_0152e200(lVar9,iVar3 + ~uVar1);
      iVar7 = FUN_0144c410(param_1,iVar3 - iVar6,1);
      iVar6 = iVar3;
      if (iVar7 < 1) {
        while (iVar7 = FUN_0144c410(param_1,iVar6,1), iVar7 < 1) {
          iVar6 = iVar6 + -1;
          if (iVar6 <= (int)uVar1) goto LAB_0144c378;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar14);
  }
  else {
    uVar5 = 0;
    do {
      iVar6 = FUN_0152e200(lVar9,iVar3 + ~uVar1);
      iVar6 = FUN_0144c410(param_1,iVar3 - iVar6,1);
      if (iVar6 < 1) goto LAB_0144c378;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar14);
  }
LAB_0144c37c:
  if (0 < (int)uVar15) {
    uVar12 = (ulong)uVar15;
    puVar13 = local_304;
    do {
      uVar4 = *puVar13;
      pcVar8 = (char *)FUN_0152d900(lVar9,uVar4);
      if (*pcVar8 == '\x01') {
        FUN_0152e1e0(lVar9,uVar4,0);
        uVar5 = uVar5 - 1;
      }
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_0144bb70(param_1,1);
joined_r0x0144c3d4:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return uVar5;
LAB_0144c378:
  if (uVar5 == 0) goto joined_r0x0144c3d4;
  goto LAB_0144c37c;
}


