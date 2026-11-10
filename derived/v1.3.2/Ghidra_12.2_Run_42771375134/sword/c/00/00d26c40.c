/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d26c40; name: FUN_00d26c40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00d26c40(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  long local_38;
  
  FUN_00d1a020(&local_38,*(undefined8 *)(param_1 + 0x90));
  lVar8 = *(long *)(local_38 + (long)*(int *)(param_1 + 0x7c) * 8 + 0x160);
  if (lVar8 == 0) {
LAB_00d26ce4:
    lVar5 = 0;
    iVar10 = _DAT_00000080;
joined_r0x00d26df0:
    if (iVar10 - 2U < 4) goto LAB_00d26cf4;
LAB_00d26d3c:
    if (iVar10 == 0) goto LAB_00d26cf4;
    if (iVar10 != 1) goto LAB_00d26d78;
    puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x90) + 0x50);
    plVar7 = (long *)(**(code **)*puVar9)(puVar9);
    plVar6 = (long *)FUN_006f10c0();
    if (plVar7 != (long *)0x0) {
      do {
        if (plVar7 == plVar6) goto LAB_00d26d8c;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      goto LAB_00d26d78;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar10 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar7 = *(long **)(lVar8 + 0x58);
          lVar5 = FUN_00d16cb0();
          while( true ) {
            if (plVar7 == (long *)0x0) goto LAB_00d26ce4;
            if (plVar7 == (long *)lVar5) break;
            plVar7 = (long *)*plVar7;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar5 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar5 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            iVar10 = *(int *)(lVar5 + 0x80);
            goto joined_r0x00d26df0;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00d26ce4;
        }
        ClearExclusiveLocal();
        iVar10 = iVar2;
      } while (iVar2 != 0);
      goto LAB_00d26ce4;
    }
    lVar5 = 0;
    iVar10 = _DAT_00000080;
    if (3 < _DAT_00000080 - 2U) goto LAB_00d26d3c;
LAB_00d26cf4:
    puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x88) + 0x50);
    plVar7 = (long *)(**(code **)*puVar9)(puVar9);
    plVar6 = (long *)FUN_006f10c0();
    if (plVar7 != (long *)0x0) {
      do {
        if (plVar7 == plVar6) goto LAB_00d26d8c;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
LAB_00d26d78:
      puVar9 = (undefined8 *)0x0;
      goto joined_r0x00d26d90;
    }
  }
  puVar9 = (undefined8 *)0x0;
  goto LAB_00d26d94;
LAB_00d26d8c:
  puVar9 = puVar9 + -10;
joined_r0x00d26d90:
  if (lVar5 == 0) goto LAB_00d26da4;
LAB_00d26d94:
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
LAB_00d26da4:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return puVar9;
}


