/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f0920; name: FUN_012f0920
 */


void FUN_012f0920(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  long local_68;
  
  puVar5 = PTR_DAT_02715080;
  plVar14 = (long *)0x0;
  if (*(long *)(param_2 + 0x70) != 0) {
    plVar14 = (long *)(*(long *)(param_2 + 0x70) + 8);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    plVar2 = plVar14 + *(int *)(param_2 + 0x68);
    do {
      while( true ) {
        lVar15 = *plVar14;
        lVar7 = FUN_012f11b0(param_1,*(undefined4 *)(lVar15 + 0x20));
        if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(), (uVar8 & 1) != 0)) break;
LAB_012f0b04:
        local_88[0] = *(undefined4 *)(lVar15 + 0x20);
        local_78 = *(undefined4 *)(lVar15 + 0x24);
        local_80 = *(undefined8 *)(lVar15 + 0x18);
        local_74 = *(undefined4 *)(lVar15 + 0x28);
        FUN_012f1b90(param_1,local_88);
LAB_012f0b2c:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar2) goto LAB_012f0b38;
      }
      puVar9 = (undefined8 *)FUN_012e3520(lVar7);
      uVar10 = FUN_012b65a0(*puVar9);
      FUN_0087b570(uVar10,*(undefined4 *)(lVar15 + 0x28));
      lVar17 = *(long *)(lVar15 + 0x18);
      if (lVar17 == 0) goto LAB_012f0b2c;
      lVar13 = *(long *)(param_1 + 1000);
      if ((lVar13 == 0) ||
         ((lVar11 = FUN_013092c0(lVar13), lVar11 != lVar17 &&
          ((lVar13 = *(long *)(param_1 + 0x3f0), lVar13 == 0 ||
           ((lVar11 = FUN_013092c0(lVar13), lVar11 != lVar17 &&
            ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 == 0 ||
             ((lVar11 = FUN_013092c0(lVar13), lVar11 != lVar17 &&
              ((lVar13 = *(long *)(param_1 + 0x400), lVar13 == 0 ||
               (lVar11 = FUN_013092c0(lVar13), lVar11 != lVar17)))))))))))))) goto LAB_012f0b04;
      lVar15 = *(long *)(lVar13 + 0x68);
      if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_012f0ac8:
        local_68 = 0;
      }
      else {
        piVar1 = (int *)(lVar15 + 0x54);
        iVar16 = *(int *)(lVar15 + 0x54);
        lVar17 = local_68;
        do {
          while( true ) {
            local_68 = lVar17;
            plVar12 = *(long **)(lVar15 + 0x58);
            lVar17 = local_68;
            if ((*PTR_DAT_02715078 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(PTR_DAT_02715078);
              lVar17 = local_68;
              if (iVar6 != 0) {
                uVar10 = FUN_00a87090();
                *(undefined8 *)puVar5 = uVar10;
                __cxa_guard_release(PTR_DAT_02715078);
                lVar17 = local_68;
              }
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_012f0ac8;
              if (plVar12 == (long *)puVar5) break;
              plVar12 = (long *)*plVar12;
            }
            iVar6 = *piVar1;
            if (iVar6 != iVar16) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              local_68 = 0;
              if (*(long *)(lVar15 + 0x60) != 0) {
                local_68 = *(long *)(lVar15 + 0x60) + -0x50;
              }
              goto LAB_012f0acc;
            }
            local_68 = 0;
            iVar16 = iVar6;
            if (iVar6 == 0) goto LAB_012f0acc;
          }
          ClearExclusiveLocal();
          local_68 = 0;
          iVar16 = iVar6;
        } while (iVar6 != 0);
      }
LAB_012f0acc:
      FUN_012e8490(lVar7,&local_68);
      if (local_68 == 0) goto LAB_012f0b2c;
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar2);
  }
LAB_012f0b38:
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_2 + 0xb8) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_2 + 0xb8) + 8);
  }
  if (*(int *)(param_2 + 0xb0) != 0) {
    lVar7 = (long)*(int *)(param_2 + 0xb0) << 3;
    do {
      FUN_012f0fc0(param_1,*puVar9);
      lVar7 = lVar7 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar7 != 0);
  }
  if (*(int *)(param_2 + 0x80) == 1) {
    FUN_012fb8e0(local_88,*(undefined8 *)(*(long *)(param_2 + 0x88) + 8));
    FUN_012ba510(&local_90);
    FUN_012f7140(local_90,local_74);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    FUN_012ba360(&local_90);
    FUN_012c3300(local_90,local_70);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    FUN_012fb940(local_88);
  }
  *(undefined1 *)(param_1 + 0x92) = 1;
  return;
}


