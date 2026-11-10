/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8aaa0; name: FUN_00d8aaa0
 */


undefined8 FUN_00d8aaa0(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long local_48;
  undefined8 uStack_38;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  uStack_38 = param_1;
  if (lVar8 == 0) {
    FUN_00d8aca0(&local_48,0,&uStack_38);
    lVar8 = local_48;
  }
  else {
    plVar11 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_00d8aca0(&local_48,lVar8,&uStack_38);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar8 = local_48;
  }
  local_48 = lVar8;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar12 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar8 + 0x58);
        plVar11 = (long *)FUN_00d8bad0();
        lVar10 = 0;
        if (plVar9 == (long *)0x0) goto LAB_00d8ab90;
        while (plVar9 != plVar11) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            lVar10 = 0;
            goto LAB_00d8ab90;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar10 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          goto LAB_00d8ab90;
        }
        lVar10 = 0;
        iVar12 = iVar2;
        if (iVar2 == 0) goto LAB_00d8ab90;
      }
      ClearExclusiveLocal();
      lVar10 = 0;
      iVar12 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00d8ab90:
  *(undefined4 *)(lVar10 + 0x90) = *param_2;
  *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar10 + 0xa8) = *(undefined8 *)(param_2 + 6);
  lVar8 = *(long *)(param_2 + 8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar10 + 0xb0);
  *(long *)(lVar10 + 0xb0) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(lVar10 + 0xc0) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(lVar10 + 200) = *(undefined8 *)(param_2 + 0xe);
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar10 + 0xd0);
  *(long *)(lVar10 + 0xd0) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar6 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(lVar10 + 0xf8) = *(undefined8 *)(param_2 + 0x1a);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar10 + 0xe0) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(lVar10 + 0xe8) = uVar6;
  *(undefined8 *)(lVar10 + 0xf0) = uVar7;
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return 0;
}


