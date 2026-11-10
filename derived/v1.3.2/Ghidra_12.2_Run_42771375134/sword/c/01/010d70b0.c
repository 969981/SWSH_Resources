/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d70b0; name: FUN_010d70b0
 */


undefined8 FUN_010d70b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  switch(*(undefined4 *)(param_1 + 0xa0)) {
  case 0:
    uVar6 = FUN_00ff07b0(*(undefined8 *)(*(long *)PTR_DAT_02724420 + 0x68));
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    break;
  case 1:
    uVar3 = FUN_00ff0890(*(undefined8 *)(param_1 + 0x90));
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar2 = FUN_00ff4610(*(undefined8 *)(param_1 + 0x90));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xa0) = 4;
      return 0;
    }
    break;
  case 3:
    FUN_00ff08c0(*(undefined8 *)(param_1 + 0x90));
    uVar6 = FUN_00ff0930();
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    if (*(long *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      if (puVar7 == (undefined8 *)0x0) goto LAB_010d7190;
      plVar4 = (long *)(**(code **)*puVar7)(puVar7);
      lVar5 = FUN_010c8950();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar7 = puVar7 + -10;
          goto LAB_010d7190;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_010d7190:
    FUN_010c6c30(puVar7,0xb);
    FUN_010c6ef0(puVar7);
    FUN_010d2dc0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_010d3890(*(undefined8 *)(param_1 + 0x80),0);
    uVar1 = *(undefined4 *)(param_1 + 0x98);
    lVar5 = FUN_010c6c10(puVar7);
    *(undefined4 *)(lVar5 + 0xb8) = uVar1;
    *(undefined8 *)(param_1 + 0x9c) = 3;
    return 0;
  case 4:
    FUN_00ff08c0(*(undefined8 *)(param_1 + 0x90));
    uVar6 = FUN_00ff0930();
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
    *(undefined8 *)(param_1 + 0x9c) = 1;
  default:
    goto switchD_010d70e0_default;
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
switchD_010d70e0_default:
  return 0;
}


