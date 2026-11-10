/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009066f0; name: FUN_009066f0
 */


undefined8 FUN_009066f0(long param_1,undefined4 *param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  short sVar9;
  undefined1 *local_48;
  
  switch(*param_2) {
  case 0:
    FUN_009c51c0(*(undefined8 *)(param_1 + 0xf0),&local_48);
    uVar7 = *(undefined4 *)(local_48 + 4);
    if (*(short *)(local_48 + 2) == 0) {
      uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_48,
                           *(undefined1 *)(param_1 + 0x2a6));
      if ((uVar4 & 1) != 0) goto LAB_00906850;
      uVar6 = 1;
    }
    else if ((*(short *)(local_48 + 2) == 1) &&
            (uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_48,
                                  *(undefined1 *)(param_1 + 0x2a6)), (uVar4 & 1) == 0)) {
      uVar6 = 0;
    }
    else {
LAB_00906850:
      uVar6 = *(undefined2 *)(local_48 + 2);
    }
    FUN_008f9b90(*(undefined8 *)(param_1 + 0x58),uVar6,uVar7,0);
    uVar7 = 1;
    break;
  case 1:
    if ((*(byte *)(param_1 + 0x2b5) & 0x10) != 0 && ((param_3 ^ 0xffffffff) & 1) == 0) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0x2b5) >> 5 & 1) != 0) {
      return 1;
    }
    FUN_009c51c0(*(undefined8 *)(param_1 + 0xf0),&local_48);
    if (*(short *)(local_48 + 2) == 0) {
      uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_48,
                           *(undefined1 *)(param_1 + 0x2a6));
      if ((uVar4 & 1) != 0) goto LAB_009068b0;
      sVar9 = 1;
    }
    else if ((*(short *)(local_48 + 2) == 1) &&
            (uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_48,
                                  *(undefined1 *)(param_1 + 0x2a6)), (uVar4 & 1) == 0)) {
      sVar9 = 0;
    }
    else {
LAB_009068b0:
      sVar9 = *(short *)(local_48 + 2);
    }
    uVar4 = FUN_008f9330(*(undefined8 *)(param_1 + 0x58));
    uVar3 = FUN_008f9910(*(undefined8 *)(param_1 + 0x58),0);
    if (sVar9 == 0) {
      bVar2 = (uVar4 & 1) == 0;
      iVar8 = 0x39;
    }
    else if (sVar9 == 2) {
      bVar2 = (uVar4 & 1) == 0;
      iVar8 = 0x3b;
    }
    else {
      if (sVar9 != 1) {
        return 1;
      }
      bVar2 = (uVar4 & 1) == 0;
      iVar8 = 0x37;
    }
    lVar1 = param_1 + 0x574;
    if (!bVar2) {
      iVar8 = iVar8 + 1;
    }
    FUN_009c7ca0(lVar1,1,iVar8);
    FUN_009c7cd0(lVar1,uVar3);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_008f9910(*(undefined8 *)(param_1 + 0x58),1);
      FUN_009c7cd0(lVar1,uVar3);
    }
    (**(code **)(**(long **)(param_1 + 0x358) + 0x1c0))(*(long **)(param_1 + 0x358),lVar1);
    plVar5 = *(long **)(param_1 + 0x358);
    if (sVar9 == 1) {
      (**(code **)(*plVar5 + 0x608))();
      uVar7 = 2;
    }
    else {
      (**(code **)(*plVar5 + 0x5e8))(plVar5,0x1e);
      uVar7 = 3;
    }
    break;
  case 2:
    uVar4 = (**(code **)(**(long **)(param_1 + 0x358) + 0x1f0))();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    return 1;
  case 3:
    uVar4 = (**(code **)(**(long **)(param_1 + 0x358) + 0x1f0))();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar7 = 4;
    break;
  case 4:
    uVar4 = (**(code **)(**(long **)(param_1 + 0x358) + 0x5f8))();
    if ((uVar4 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x358) + 0x600))();
      return 1;
    }
  default:
    goto LAB_00906874;
  }
  *param_2 = uVar7;
LAB_00906874:
  return 0;
}


