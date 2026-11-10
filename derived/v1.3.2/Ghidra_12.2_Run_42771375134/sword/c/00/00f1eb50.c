/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f1eb50; name: FUN_00f1eb50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1eb50(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  long local_68;
  
  lVar13 = 0;
  do {
    while( true ) {
      iVar8 = *(int *)(param_1 + 0xa50 + lVar13);
      iVar2 = iVar8 + -1;
      if ((0 < iVar8) && (*(int *)(param_1 + 0xa50 + lVar13) = iVar2, iVar2 == 0)) break;
      lVar13 = lVar13 + 4;
      if (lVar13 == 0x78) goto LAB_00f1ebbc;
    }
    *(int *)(param_1 + 0xae0) = *(int *)(param_1 + 0xae0) + -1;
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x78);
LAB_00f1ebbc:
  if ((0 < *(int *)(param_1 + 0xac8)) &&
     (iVar8 = *(int *)(param_1 + 0xac8) + -1, *(int *)(param_1 + 0xac8) = iVar8, iVar8 == 0)) {
    *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + -1;
  }
  if ((0 < *(int *)(param_1 + 0xacc)) &&
     (iVar8 = *(int *)(param_1 + 0xacc) + -1, *(int *)(param_1 + 0xacc) = iVar8, iVar8 == 0)) {
    *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + -1;
  }
  iVar8 = *(int *)(param_1 + 0xad0) + -1;
  if ((0 < *(int *)(param_1 + 0xad0)) && (*(int *)(param_1 + 0xad0) = iVar8, iVar8 == 0)) {
    *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + -1;
  }
  iVar8 = *(int *)(param_1 + 0xad4) + -1;
  if ((0 < *(int *)(param_1 + 0xad4)) && (*(int *)(param_1 + 0xad4) = iVar8, iVar8 == 0)) {
    *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + -1;
  }
  iVar8 = *(int *)(param_1 + 0xad8) + -1;
  if ((0 < *(int *)(param_1 + 0xad8)) && (*(int *)(param_1 + 0xad8) = iVar8, iVar8 == 0)) {
    *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + -1;
  }
  iVar8 = *(int *)(param_1 + 0xadc) + -1;
  if ((0 < *(int *)(param_1 + 0xadc)) && (*(int *)(param_1 + 0xadc) = iVar8, iVar8 == 0)) {
    *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + -1;
  }
  puVar7 = PTR_DAT_0271fd60;
  puVar6 = PTR_DAT_0271fd58;
  puVar5 = PTR_DAT_027152c0;
  uVar4 = _UNK_01d4af88;
  uVar3 = _DAT_01d4af80;
  lVar13 = *(long *)(param_1 + 0x70);
  if (0 < (int)((ulong)(*(long *)(param_1 + 0x78) - lVar13) >> 3)) {
    lVar15 = 0;
    do {
      if (9 < *(int *)(param_1 + 0xae0)) break;
      lVar1 = param_1 + lVar15 * 4;
      if (*(int *)(lVar1 + 0xa50) < 1) {
        plVar11 = *(long **)(lVar13 + lVar15 * 8);
        puVar9 = (undefined8 *)(**(code **)plVar11[10])();
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar10 = FUN_01590f40();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        if (puVar9 == (undefined8 *)0x0) break;
        while (puVar9 != (undefined8 *)puVar7) {
          puVar9 = (undefined8 *)*puVar9;
          if (puVar9 == (undefined8 *)0x0) goto LAB_00f1ee40;
        }
        if (*(int *)((long)plVar11 + 0x95c) == (int)plVar11[300]) {
          (**(code **)(*plVar11 + 0x10))(&local_78,plVar11);
          local_68 = local_78;
          uStack_88 = uVar4;
          local_90 = uVar3;
          local_b0 = 0xef9edd532fb85bc3;
          pcStack_a8 = "Waist";
          local_78 = 0;
          local_a0 = 5;
          local_98 = 0;
          FUN_00e80850(0x3f800000,9,&local_68,&local_90,puVar5,&local_b0);
          if (local_98 != 0) {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
            local_98 = 0;
          }
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
          *(undefined4 *)(lVar1 + 0xa50) = 0x2d;
          *(int *)(param_1 + 0xae0) = *(int *)(param_1 + 0xae0) + 1;
        }
      }
      lVar13 = *(long *)(param_1 + 0x70);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)((ulong)(*(long *)(param_1 + 0x78) - lVar13) >> 3));
  }
LAB_00f1ee40:
  puVar5 = PTR_DAT_027152c0;
  uVar4 = _UNK_01d4a5e8;
  uVar3 = _DAT_01d4a5e0;
  lVar13 = *(long *)(param_1 + 0x7c8);
  if (0 < (int)((ulong)(*(long *)(param_1 + 2000) - lVar13) >> 3)) {
    lVar15 = 0;
    do {
      if (2 < *(int *)(param_1 + 0xae4)) {
        return;
      }
      lVar1 = param_1 + lVar15 * 4;
      if (*(int *)(lVar1 + 0xac8) < 1) {
        plVar14 = *(long **)(lVar13 + lVar15 * 8);
        plVar11 = (long *)(**(code **)plVar14[10])();
        plVar12 = (long *)FUN_01590f40();
        if (plVar11 == (long *)0x0) {
          return;
        }
        while (plVar11 != plVar12) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        if (*(char *)(param_1 + lVar15 * 8 + 0x7fd) != '\0') {
          (**(code **)(*plVar14 + 0x10))(&local_78,plVar14);
          local_68 = local_78;
          local_b0 = 0x525829bbe8d0ab43;
          pcStack_a8 = "Head";
          local_a0 = 4;
          local_98 = 0;
          uStack_88 = uVar4;
          local_90 = uVar3;
          local_78 = 0;
          FUN_00e80850(0x3f800000,8,&local_68,&local_90,puVar5,&local_b0);
          if (local_98 != 0) {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
            local_98 = 0;
          }
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
          *(undefined4 *)(lVar1 + 0xac8) = 0xf;
          *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + 1;
        }
      }
      lVar13 = *(long *)(param_1 + 0x7c8);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)((ulong)(*(long *)(param_1 + 2000) - lVar13) >> 3));
  }
  return;
}


