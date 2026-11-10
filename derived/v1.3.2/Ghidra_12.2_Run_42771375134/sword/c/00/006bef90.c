/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bef90; name: FUN_006bef90
 */


void FUN_006bef90(long param_1,int *param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long local_70;
  long *local_68;
  long local_60;
  long local_58;
  
  puVar8 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar8 < 0xb) {
    return;
  }
  lVar10 = -(long)*param_2;
  if (((ulong)puVar8[5] == 0) ||
     (puVar11 = (uint *)((long)param_2 + (ulong)puVar8[5]),
     piVar1 = (int *)((long)puVar11 + (ulong)*puVar11), piVar1 == (int *)0x0)) goto LAB_006bf150;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar9 == 0)) {
    lVar10 = 0;
    plVar13 = *(long **)(param_1 + 0x178);
  }
  else {
    puVar11 = (uint *)((long)piVar1 + uVar9);
    lVar10 = (long)puVar11 + (ulong)*puVar11;
    plVar13 = *(long **)(param_1 + 0x178);
  }
  if (plVar13 == (long *)0x0) {
    plVar13 = *(long **)(param_1 + 8);
  }
  lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0x28,8);
  puVar2 = PTR_DAT_02710860;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_006bf254:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar13;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  FUN_006be770(lVar5,lVar10);
  local_60 = 0x28;
  local_58 = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  plVar15 = *(long **)(param_1 + 0x1d0);
  plVar14 = *(long **)(param_1 + 0x1d8);
  local_70 = lVar5;
  local_68 = plVar13;
  if (plVar14 != plVar15) {
    do {
      iVar3 = FUN_006be830(*plVar15);
      iVar4 = FUN_006be830(lVar5);
      if (iVar3 == iVar4) {
        plVar13 = (long *)FUN_006be870(*plVar15);
        plVar7 = (long *)FUN_006be870(lVar5);
        if (*plVar13 == *plVar7) goto LAB_006bf0fc;
      }
      plVar15 = plVar15 + 4;
    } while (plVar14 != plVar15);
    plVar15 = plVar14;
LAB_006bf0fc:
    plVar14 = *(long **)(param_1 + 0x1d8);
  }
  lVar10 = local_70;
  if (plVar14 == plVar15) {
    if (*(long **)(param_1 + 0x1e0) <= plVar14) {
      FUN_006bfe30(param_1 + 0x1d0,&local_70);
      lVar10 = local_70;
      goto joined_r0x006bf24c;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x1e8);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_006bf254;
    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *plVar14 = local_70;
    plVar14[1] = (long)local_68;
    plVar14[2] = local_60;
    plVar14[3] = local_58;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    *(long *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x1d8) + 0x20;
    local_70 = 0;
  }
  else {
joined_r0x006bf24c:
    local_70 = 0;
    if (lVar10 != 0) {
      local_70 = 0;
      if (*(long *)(lVar10 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar10 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(lVar10 + 0x20) = 0;
      }
      (**(code **)(*local_68 + 0x18))(local_68,lVar10,local_60,local_58);
    }
  }
  lVar10 = -(long)*param_2;
  puVar8 = (ushort *)((long)param_2 - (long)*param_2);
LAB_006bf150:
  if ((((0xe < *puVar8) && (uVar9 = (ulong)*(ushort *)((long)param_2 + lVar10 + 0xe), uVar9 != 0))
      && (puVar11 = (uint *)((long)param_2 + uVar9),
         puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11), puVar11 != (uint *)0x0)) &&
     (lVar10 = (ulong)*puVar11 << 2, (ulong)*puVar11 != 0)) {
    do {
      puVar11 = puVar11 + 1;
      FUN_006bef90(param_1,(long)puVar11 + (ulong)*puVar11);
      lVar10 = lVar10 + -4;
    } while (lVar10 != 0);
  }
  return;
}


