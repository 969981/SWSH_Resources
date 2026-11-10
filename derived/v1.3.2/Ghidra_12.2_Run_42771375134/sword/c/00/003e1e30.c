/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e1e30; name: FUN_003e1e30
 */


void FUN_003e1e30(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  lVar1 = param_1 + 0x1c38;
  *(undefined4 *)(param_1 + 0x744) = 0;
  FUN_001b18e0(lVar1);
  lVar2 = param_1 + 0x1c00;
  *(undefined4 *)(param_1 + 0x1c20) = 1;
  *(long *)(param_1 + 0x1c18) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x1c38) + 0x20))(lVar1);
  *(undefined8 *)(param_1 + 0x1c10) = *(undefined8 *)(*(long *)(param_1 + 0x1c18) + 0x10);
  *(undefined4 *)(param_1 + 0x1be8) = 1;
  *(long *)(param_1 + 0x1be0) = lVar2;
  lVar3 = param_1 + 0x1bc8;
  (**(code **)(*(long *)(param_1 + 0x1c00) + 0x20))(lVar2);
  *(undefined8 *)(param_1 + 0x1bd8) = *(undefined8 *)(*(long *)(param_1 + 0x1be0) + 0x10);
  *(undefined4 *)(param_1 + 0x1e20) = 1;
  *(long *)(param_1 + 0x1e18) = lVar3;
  (**(code **)(*(long *)(param_1 + 0x1bc8) + 0x20))(lVar3);
  *(undefined8 *)(param_1 + 0x1e10) = *(undefined8 *)(*(long *)(param_1 + 0x1e18) + 0x10);
  *(undefined4 *)(param_1 + 0x1bb0) = 1;
  *(long **)(param_1 + 0x1ba8) = param_2;
  (**(code **)(*param_2 + 0x20))(param_2);
  plVar4 = *(long **)(*(long *)(param_1 + 0x1ba8) + 0x10);
  *(long **)(param_1 + 0x1ba0) = plVar4;
  (**(code **)(*plVar4 + 0xa8))(plVar4,param_1 + 0x1b90);
  FUN_0011e590(*(undefined8 *)(param_1 + 0x720));
  if (*(int *)(param_1 + 0x8e8) == 0) goto LAB_003e20ec;
  plVar4 = (long *)(param_1 + 0x1538);
  (**(code **)(*(long *)(param_1 + 0x1538) + 0x20))(plVar4);
  plVar5 = (long *)(param_1 + 0x1330);
  if (*(int *)(param_1 + 0x8e8) == 0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  else {
    plVar5 = (long *)FUN_003ac570(*(undefined8 *)(param_1 + 0x8a0),param_1 + 0x8e0,plVar5);
  }
  plVar9 = (long *)(param_1 + 0x13e0);
  FUN_001b18e0(plVar9,plVar5);
  FUN_001b18e0(plVar9,plVar4);
  FUN_0018fea0(plVar9);
  if (*(int *)(param_1 + 0x8e8) == 0) {
LAB_003e200c:
    (**(code **)(*plVar5 + 0x20))(plVar5);
    plVar6 = plVar5;
  }
  else {
    plVar6 = (long *)FUN_003ac400(*(undefined8 *)(param_1 + 0x8a0),param_1 + 0x8e0,plVar9);
    FUN_0018fea0(plVar9);
    plVar9 = plVar6;
    if (*(int *)(param_1 + 0x8e8) == 0) goto LAB_003e200c;
    plVar6 = (long *)FUN_003ac2c0(*(undefined8 *)(param_1 + 0x8a0),param_1 + 0x8e0,plVar5);
  }
  plVar8 = (long *)(param_1 + 0x1488);
  FUN_001b18e0(plVar8,param_1 + 0x1e00);
  FUN_001b18e0(plVar8,plVar6);
  FUN_0018fea0(plVar8);
  if (*(int *)(param_1 + 0x8e8) != 0) {
    plVar7 = (long *)FUN_003ac020(*(undefined8 *)(param_1 + 0x8a0),param_1 + 0x8e0,plVar8);
    FUN_0018fea0(plVar8);
    plVar8 = plVar7;
  }
  FUN_001b18e0(lVar1,plVar9);
  FUN_0018fea0(lVar1);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (**(code **)(*plVar9 + 0x28))(plVar9);
  (**(code **)(*plVar6 + 0x28))(plVar6);
  (**(code **)(*plVar8 + 0x28))(plVar8);
LAB_003e20ec:
  FUN_0011e530(*(undefined4 *)(param_1 + 0x7b8),*(undefined8 *)(param_1 + 0x720),
               *(undefined1 *)(*(long *)(param_1 + 0x808) + 0x18),*(undefined1 *)(param_1 + 0x818),
               param_2,param_1 + 0x1b90);
  FUN_0018fea0(lVar1);
  (**(code **)(**(long **)(param_1 + 0x1c10) + 0xa0))(*(long **)(param_1 + 0x1c10),lVar2);
  (**(code **)(**(long **)(param_1 + 0x1bd8) + 0xa0))(*(long **)(param_1 + 0x1bd8),lVar3);
                    /* WARNING: Could not recover jumptable at 0x003e2168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1e10) + 0xa0))(*(long **)(param_1 + 0x1e10),param_1 + 0x1e00)
  ;
  return;
}


