/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7ae80; name: FUN_00e7ae80
 */


uint FUN_00e7ae80(long *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long local_48;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0); puVar2 != puVar3;
      puVar2 = puVar2 + 1) {
    plVar13 = (long *)*puVar2;
    plVar9 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    lVar10 = FUN_0156b190();
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)lVar10) {
        if ((plVar13[0x34] == *param_1) &&
           (uVar11 = (**(code **)(*(long *)*puVar2 + 0x88))(), (uVar11 & 1) == 0)) {
          plVar9 = plVar13 + 9;
          (**(code **)(*plVar9 + 0x10))(plVar9);
          (**(code **)(*plVar13 + 0x10))(&local_48,plVar13);
          lVar10 = local_48;
          local_48 = 0;
          if (lVar10 == 0) {
            uVar8 = 0;
            goto LAB_00e7b038;
          }
          piVar1 = (int *)(lVar10 + 0x54);
          if (*piVar1 == 0) {
            uVar8 = 0;
            goto LAB_00e7b010;
          }
          iVar7 = *piVar1;
          goto joined_r0x00e7af80;
        }
        break;
      }
    }
  }
  uVar8 = 0;
  goto LAB_00e7af20;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar4;
    if (cVar5 == '\0') break;
joined_r0x00e7af80:
    if (iVar7 == 0) {
LAB_00e7afcc:
      plVar13 = (long *)0x0;
      goto LAB_00e7afd0;
    }
    plVar13 = *(long **)(lVar10 + 0x58);
    lVar12 = FUN_0156b190();
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00e7afcc;
      if (plVar13 == (long *)lVar12) break;
      plVar13 = (long *)*plVar13;
    }
    iVar4 = *piVar1;
    if (iVar4 != iVar7) {
      ClearExclusiveLocal();
      iVar7 = iVar4;
      goto joined_r0x00e7af80;
    }
  }
  plVar13 = (long *)0x0;
  if (*(long *)(lVar10 + 0x60) != 0) {
    plVar13 = (long *)(*(long *)(lVar10 + 0x60) + -0x50);
  }
LAB_00e7afd0:
  uVar8 = (**(code **)(*plVar13 + 0x198))(plVar13,param_2,0);
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
LAB_00e7b010:
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00e7b038:
  (**(code **)(*plVar9 + 0x18))(plVar9);
LAB_00e7af20:
  return uVar8 & 1;
}


