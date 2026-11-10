/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e814e0; name: FUN_00e814e0
 */


undefined1  [16] FUN_00e814e0(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  long local_78;
  long local_70;
  long local_68;
  long local_58;
  
  puVar7 = PTR_DAT_0271ed90;
  puVar6 = PTR_DAT_0271ed88;
  puVar5 = PTR_DAT_027194d8;
  puVar16 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (puVar15 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0); puVar15 != puVar16;
      puVar15 = puVar15 + 1) {
    plVar14 = (long *)*puVar15;
    plVar9 = (long *)(**(code **)plVar14[10])(plVar14 + 10);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar10 = FUN_0156b190();
      *(undefined8 *)puVar7 = uVar10;
      __cxa_guard_release(puVar6);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar7) {
        if ((plVar14[0x34] == *param_1) &&
           (uVar12 = (**(code **)(*(long *)*puVar15 + 0x88))(), (uVar12 & 1) == 0)) {
          (**(code **)(plVar14[9] + 0x10))(plVar14 + 9);
          bVar1 = false;
          lVar13 = *(long *)puVar5;
          puVar15 = *(undefined8 **)(lVar13 + 0xb0);
          puVar16 = *(undefined8 **)(lVar13 + 0xb8);
          puVar3 = (undefined8 *)PTR_DAT_0271ed90;
          pbVar4 = PTR_DAT_0271ed88;
          if (puVar15 != puVar16) goto LAB_00e81658;
          goto LAB_00e816bc;
        }
        break;
      }
    }
  }
  plVar14 = (long *)0x0;
  bVar1 = true;
  lVar13 = *(long *)puVar5;
  puVar15 = *(undefined8 **)(lVar13 + 0xb0);
  puVar16 = *(undefined8 **)(lVar13 + 0xb8);
  puVar3 = (undefined8 *)PTR_DAT_0271ed90;
  pbVar4 = PTR_DAT_0271ed88;
  if (puVar15 != puVar16) {
LAB_00e81658:
    do {
      plVar9 = (long *)*puVar15;
      plVar11 = (long *)(**(code **)plVar9[10])(plVar9 + 10);
      if (((*pbVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar4), iVar8 != 0)) {
        uVar10 = FUN_0156b190();
        *puVar3 = uVar10;
        __cxa_guard_release(pbVar4);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == puVar3) {
          if ((plVar9[0x34] == *param_2) &&
             (uVar12 = (**(code **)(*(long *)*puVar15 + 0x88))(), (uVar12 & 1) == 0)) {
            (**(code **)(plVar9[9] + 0x10))(plVar9 + 9);
            bVar2 = false;
            goto joined_r0x00e816ec;
          }
          break;
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar16);
  }
LAB_00e816bc:
  plVar9 = (long *)0x0;
  bVar2 = true;
joined_r0x00e816ec:
  if (bVar1) {
    uVar10 = 0;
    uVar18 = 0;
    if (bVar2) goto LAB_00e817cc;
LAB_00e817a8:
    (**(code **)(plVar9[9] + 0x18))(plVar9 + 9);
    if (bVar1) goto LAB_00e817cc;
  }
  else {
    if (!bVar2) {
      (**(code **)(*plVar14 + 0x10))(&local_68,plVar14);
      local_58 = local_68;
      local_68 = 0;
      (**(code **)(*plVar9 + 0x10))(&local_78,plVar9);
      local_70 = local_78;
      local_78 = 0;
      auVar17 = FUN_00e817f0(&local_58,&local_70);
      uVar18 = auVar17._8_8_;
      uVar10 = auVar17._0_8_;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      goto LAB_00e817a8;
    }
    uVar10 = 0;
    uVar18 = 0;
  }
  (**(code **)(plVar14[9] + 0x18))(plVar14 + 9);
LAB_00e817cc:
  auVar17._8_8_ = uVar18;
  auVar17._0_8_ = uVar10;
  return auVar17;
}


