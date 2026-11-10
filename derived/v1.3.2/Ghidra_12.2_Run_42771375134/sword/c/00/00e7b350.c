/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7b350; name: FUN_00e7b350
 */


undefined1  [16] FUN_00e7b350(long *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  long local_48;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  uVar15 = 0;
  uVar16 = 0;
  for (puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0); puVar2 != puVar3;
      puVar2 = puVar2 + 1) {
    plVar12 = (long *)*puVar2;
    plVar8 = (long *)(**(code **)plVar12[10])(plVar12 + 10);
    lVar9 = FUN_0156b190();
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)lVar9) {
        if ((plVar12[0x34] == *param_1) &&
           (uVar10 = (**(code **)(*(long *)*puVar2 + 0x88))(), (uVar10 & 1) == 0)) {
          plVar8 = plVar12 + 9;
          (**(code **)(*plVar8 + 0x10))(plVar8);
          (**(code **)(*plVar12 + 0x10))(&local_48,plVar12);
          lVar9 = local_48;
          local_48 = 0;
          if (lVar9 == 0) {
            uVar15 = 0;
            uVar16 = 0;
            goto LAB_00e7b508;
          }
          piVar1 = (int *)(lVar9 + 0x54);
          if (*piVar1 == 0) {
            auVar14 = ZEXT816(0);
            goto LAB_00e7b4e0;
          }
          iVar7 = *piVar1;
          goto joined_r0x00e7b450;
        }
        break;
      }
    }
  }
  goto LAB_00e7b3f0;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar4;
    if (cVar5 == '\0') break;
joined_r0x00e7b450:
    if (iVar7 == 0) {
LAB_00e7b49c:
      plVar12 = (long *)0x0;
      goto LAB_00e7b4a0;
    }
    plVar12 = *(long **)(lVar9 + 0x58);
    lVar11 = FUN_0156b190();
    while( true ) {
      if (plVar12 == (long *)0x0) goto LAB_00e7b49c;
      if (plVar12 == (long *)lVar11) break;
      plVar12 = (long *)*plVar12;
    }
    iVar4 = *piVar1;
    if (iVar4 != iVar7) {
      ClearExclusiveLocal();
      iVar7 = iVar4;
      goto joined_r0x00e7b450;
    }
  }
  plVar12 = (long *)0x0;
  if (*(long *)(lVar9 + 0x60) != 0) {
    plVar12 = (long *)(*(long *)(lVar9 + 0x60) + -0x50);
  }
LAB_00e7b4a0:
  auVar14 = (**(code **)(*plVar12 + 0x178))(0,plVar12,param_2);
  uVar15 = auVar14._8_8_;
  uVar16 = auVar14._0_8_;
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    auVar14._8_8_ = uVar15;
    auVar14._0_8_ = uVar16;
  }
LAB_00e7b4e0:
  uVar16 = auVar14._8_8_;
  uVar15 = auVar14._0_8_;
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00e7b508:
  (**(code **)(*plVar8 + 0x18))(plVar8);
LAB_00e7b3f0:
  auVar13._8_8_ = uVar16;
  auVar13._0_8_ = uVar15;
  return auVar13;
}


