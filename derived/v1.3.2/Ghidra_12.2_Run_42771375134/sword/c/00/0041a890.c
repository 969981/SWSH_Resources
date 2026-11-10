/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041a890; name: FUN_0041a890
 */


void FUN_0041a890(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_02712a90;
  lVar7 = *(long *)(param_1 + 0x88);
  while( true ) {
    if (lVar7 == 0) {
      return;
    }
    if (*(long *)(lVar7 + 0x10) == param_3) break;
    lVar7 = *(long *)(lVar7 + 0x30);
  }
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      iVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if (((iVar5 == 2) && (param_2 <= (int)plVar6[2])) && (plVar6[3] == lVar7)) {
        plVar9 = (long *)plVar6[1];
        plVar2 = (long *)(param_1 + 0x70);
        if (*(long **)(param_1 + 0x70) != plVar6) {
          plVar2 = plVar8 + 1;
        }
        *plVar2 = (long)plVar9;
        if (*(long **)(param_1 + 0x68) == plVar6) {
          *(long **)(param_1 + 0x68) = plVar8;
        }
        uVar3 = *(undefined4 *)puVar1;
        (**(code **)*plVar6)(plVar6);
        FUN_00404870(uVar3,plVar6);
      }
      else {
        plVar9 = (long *)plVar6[1];
        plVar8 = plVar6;
      }
      plVar6 = plVar9;
    } while (plVar6 != (long *)0x0);
  }
  FUN_004193b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  plVar6 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
  if (plVar6 == (long *)0x0) {
    return;
  }
  puVar1 = PTR_DAT_02712bf0 + 0x10;
  uVar3 = *(undefined4 *)(lVar7 + 0x28);
  uVar4 = *(undefined4 *)(lVar7 + 0x2c);
  *(int *)(plVar6 + 2) = param_2;
  plVar6[3] = lVar7;
  *(undefined4 *)(plVar6 + 4) = uVar4;
  *(undefined4 *)((long)plVar6 + 0x24) = uVar3;
  *plVar6 = (long)puVar1;
  FUN_0041b2a0(param_1 + 0x60,plVar6);
  return;
}


