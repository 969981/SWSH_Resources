/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e81b0; name: FUN_012e81b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_012e81b0(long param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *local_38;
  
  lVar14 = *(long *)PTR_DAT_02727748;
  if (lVar14 != 0) {
    if (*(uint *)(lVar14 + 0x54) == 0) {
      return 0;
    }
    puVar1 = (uint *)(lVar14 + 0x54);
    uVar16 = *(uint *)(lVar14 + 0x54);
    while (uVar9 = FUN_012eac20(*(undefined8 *)(lVar14 + 0x58)), (uVar9 & 1) != 0) {
      uVar3 = *puVar1;
      if (uVar3 == uVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar6 = PTR_DAT_02715078;
        if (cVar4 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 == 0) {
            return 0;
          }
          lVar11 = *(long *)(lVar14 + 0x18);
          if (lVar11 == 0) {
            lVar11 = *(long *)(param_1 + 0x4f8);
            goto joined_r0x012e831c;
          }
          if (*(int *)(lVar11 + 0x54) == 0) goto LAB_012e832c;
          piVar2 = (int *)(lVar11 + 0x54);
          puVar12 = (undefined8 *)PTR_DAT_02715080;
          iVar13 = *(int *)(lVar11 + 0x54);
          goto LAB_012e8250;
        }
        uVar16 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
        uVar16 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
      }
    }
  }
  return 0;
LAB_012e8250:
  puVar15 = *(undefined8 **)(lVar11 + 0x58);
  if (((*puVar6 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(puVar6), puVar12 = (undefined8 *)PTR_DAT_02715080, iVar8 != 0)) {
    uVar10 = FUN_00a87090();
    *(undefined8 *)PTR_DAT_02715080 = uVar10;
    __cxa_guard_release(puVar6);
    puVar12 = (undefined8 *)PTR_DAT_02715080;
  }
  while( true ) {
    if (puVar15 == (undefined8 *)0x0) goto LAB_012e832c;
    if (puVar15 == puVar12) break;
    puVar15 = (undefined8 *)*puVar15;
  }
  iVar8 = *piVar2;
  if (iVar8 == iVar13) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      puVar12 = (undefined8 *)0x0;
      if (*(long *)(lVar11 + 0x60) != 0) {
        puVar12 = (undefined8 *)(*(long *)(lVar11 + 0x60) + -0x50);
      }
      lVar11 = *(long *)(param_1 + 0x4f8);
      goto joined_r0x012e83f4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar13 = iVar8;
  if (iVar8 == 0) {
LAB_012e832c:
    lVar11 = *(long *)(param_1 + 0x4f8);
joined_r0x012e831c:
    puVar12 = (undefined8 *)0x0;
joined_r0x012e83f4:
    if (lVar11 == 0) {
      uVar7 = 0;
      puVar15 = local_38;
    }
    else {
      uVar9 = FUN_0130e360();
      uVar7 = 0;
      puVar15 = local_38;
      if ((((uVar9 & 1) != 0) && (*(uint *)(param_1 + 0x500) < 5)) &&
         ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
        if ((*(long *)(param_1 + 0x4f8) == 0) || (uVar9 = FUN_0130e360(), (uVar9 & 1) == 0)) {
          uVar7 = puVar12 == (undefined8 *)0x0;
          local_38 = (undefined8 *)0x0;
          puVar15 = local_38;
        }
        else {
          FUN_0130e3b0(&local_38,*(undefined8 *)(param_1 + 0x4f8));
          uVar7 = puVar12 == local_38;
          puVar15 = (undefined8 *)0x0;
          if (local_38 != (undefined8 *)0x0) {
            (**(code **)(local_38[9] + 0x18))();
            local_38 = (undefined8 *)0x0;
            puVar15 = local_38;
          }
        }
      }
    }
    local_38 = puVar15;
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)(puVar12[9] + 0x18))(puVar12 + 9);
    }
    (**(code **)(*(long *)(lVar14 + -8) + 0x18))((long *)(lVar14 + -8));
    return uVar7;
  }
  goto LAB_012e8250;
}


