/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dfb10; name: FUN_010dfb10
 */


undefined8 FUN_010dfb10(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
    uVar4 = FUN_00ff07b0(*(undefined8 *)(*(long *)PTR_DAT_02724420 + 0x68));
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    uVar3 = FUN_00ff0890();
    break;
  case 1:
    uVar3 = FUN_00ff0890(*(undefined8 *)(param_1 + 0x98));
    break;
  case 2:
    goto switchD_010dfb40_caseD_2;
  case 3:
    goto switchD_010dfb40_caseD_3;
  case 4:
    FUN_00ff08c0(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_00ff0930();
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
    *(undefined8 *)(param_1 + 0xa4) = 1;
    return 0;
  default:
    return 0;
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
switchD_010dfb40_caseD_2:
  *(undefined4 *)(param_1 + 0xa0) = 0;
  iVar2 = FUN_00ff4610(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xa8) = 4;
    return 0;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
switchD_010dfb40_caseD_3:
  FUN_00ff08c0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_00ff0930();
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 == (undefined8 *)0x0) goto LAB_010dfc34;
    plVar5 = (long *)(**(code **)*puVar7)(puVar7);
    lVar6 = FUN_010c8950();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar7 = puVar7 + -10;
        goto LAB_010dfc34;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_010dfc34:
  FUN_010c6ef0(puVar7);
  FUN_010dc510(*(undefined8 *)(param_1 + 0x88),0);
  FUN_010c6c30(puVar7,6);
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  lVar6 = FUN_010c6c10(puVar7);
  *(undefined4 *)(lVar6 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xa4) = 2;
  return 0;
}


