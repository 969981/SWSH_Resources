/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00906a90; name: FUN_00906a90
 */


undefined8 FUN_00906a90(long param_1,undefined4 *param_2,ulong param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *local_28;
  
  switch(*param_2) {
  case 0:
    FUN_009c51c0(*(undefined8 *)(param_1 + 0xf0),&local_28);
    uVar6 = *(undefined4 *)(local_28 + 4);
    if (*(short *)(local_28 + 2) == 0) {
      uVar3 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_28,
                           *(undefined1 *)(param_1 + 0x2a6));
      if ((uVar3 & 1) != 0) goto LAB_00906cd0;
      uVar5 = 1;
    }
    else if ((*(short *)(local_28 + 2) == 1) &&
            (uVar3 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_28,
                                  *(undefined1 *)(param_1 + 0x2a6)), (uVar3 & 1) == 0)) {
      uVar5 = 0;
    }
    else {
LAB_00906cd0:
      uVar5 = *(undefined2 *)(local_28 + 2);
    }
    FUN_008f9b90(*(undefined8 *)(param_1 + 0x58),uVar5,uVar6,0);
    uVar6 = 1;
    break;
  case 1:
    if (((param_3 & 1) != 0) && ((*(byte *)(param_1 + 0x2b5) >> 4 & 1) != 0)) {
      return 1;
    }
    FUN_009c51c0(*(undefined8 *)(param_1 + 0xf0),&local_28);
    if (*(short *)(local_28 + 2) == 1) {
      uVar3 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_28,
                           *(undefined1 *)(param_1 + 0x2a6));
      if ((uVar3 & 1) != 0) goto LAB_00906d04;
LAB_00906d4c:
      (**(code **)(**(long **)(param_1 + 0x358) + 0x508))(*(long **)(param_1 + 0x358),1);
      uVar7 = 0;
    }
    else {
      if ((*(short *)(local_28 + 2) != 0) ||
         (uVar3 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_28,
                               *(undefined1 *)(param_1 + 0x2a6)), (uVar3 & 1) != 0)) {
LAB_00906d04:
        if (*(short *)(local_28 + 2) == 0) goto LAB_00906d4c;
        if (*(short *)(local_28 + 2) != 1) {
          return 1;
        }
      }
      (**(code **)(**(long **)(param_1 + 0x358) + 0x608))();
      uVar7 = 1;
      (**(code **)(**(long **)(param_1 + 0x358) + 0x510))(*(long **)(param_1 + 0x358),1);
    }
    FUN_00906da0(param_1,uVar7,0);
    uVar6 = 2;
    break;
  case 2:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x358) + 0x520))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x358) + 0x160))(*(long **)(param_1 + 0x358),1);
    uVar6 = 3;
    break;
  case 3:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x358) + 0x1f0))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    cVar1 = FUN_008f9910(*(undefined8 *)(param_1 + 0x58),0);
    cVar2 = FUN_008f9910(*(undefined8 *)(param_1 + 0x58),1);
    if (cVar1 == cVar2) {
      return 1;
    }
    uVar6 = 4;
    break;
  case 4:
    FUN_009c51c0(*(undefined8 *)(param_1 + 0xf0),&local_28);
    if (*(short *)(local_28 + 2) == 1) {
      uVar3 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_28,
                           *(undefined1 *)(param_1 + 0x2a6));
      if ((uVar3 & 1) != 0) goto LAB_00906c70;
LAB_00906ca0:
      (**(code **)(**(long **)(param_1 + 0x358) + 0x508))(*(long **)(param_1 + 0x358),3);
      sVar4 = 0;
    }
    else if ((*(short *)(local_28 + 2) == 0) &&
            (uVar3 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*local_28,
                                  *(undefined1 *)(param_1 + 0x2a6)), (uVar3 & 1) == 0)) {
LAB_00906c84:
      (**(code **)(**(long **)(param_1 + 0x358) + 0x510))(*(long **)(param_1 + 0x358),3);
      sVar4 = 1;
    }
    else {
LAB_00906c70:
      sVar4 = *(short *)(local_28 + 2);
      if (sVar4 == 0) goto LAB_00906ca0;
      if (sVar4 == 1) goto LAB_00906c84;
    }
    FUN_00906da0(param_1,sVar4,1);
    uVar6 = 5;
    break;
  case 5:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x358) + 0x520))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x358) + 0x160))(*(long **)(param_1 + 0x358),1);
    uVar6 = 6;
    break;
  case 6:
    uVar3 = (**(code **)(**(long **)(param_1 + 0x358) + 0x1f0))();
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  default:
    goto LAB_00906d80;
  }
  *param_2 = uVar6;
LAB_00906d80:
  return 0;
}


