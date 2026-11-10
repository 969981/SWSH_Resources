/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5b60; name: FUN_009c5b60
 */


void FUN_009c5b60(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    iVar2 = FUN_008f35e0(*(undefined8 *)(param_1 + 8));
    if (iVar2 != 0) {
      FUN_00906e60(*(undefined8 *)(param_1 + 0x10),param_1 + 0x30,iVar2);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x1c0))(*(long **)(param_1 + 0x20),param_1 + 0x30);
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
  case 1:
    uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1f0))();
    break;
  case 2:
    (**(code **)(**(long **)(param_1 + 0x20) + 0x608))();
    lVar3 = FUN_008df7f0(*(undefined8 *)(param_1 + 0x18),0);
    if (((lVar3 != 0) && (uVar5 = FUN_008e1600(), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_008e2ec0(lVar3), (uVar5 & 1) == 0)) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x498))();
      *(undefined4 *)(param_1 + 0x28) = 3;
      return;
    }
    goto LAB_009c5c8c;
  case 3:
    uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x4a0))();
    if ((uVar5 & 1) == 0) {
      return;
    }
LAB_009c5c8c:
    *(undefined4 *)(param_1 + 0x28) = 4;
    return;
  case 4:
    uVar1 = FUN_009c9800(1);
    lVar3 = param_1 + 0x30;
    FUN_009c7ca0(lVar3,1,0x3e);
    FUN_009c7cd0(lVar3,uVar1);
    plVar4 = *(long **)(param_1 + 0x20);
    (**(code **)(*plVar4 + 0x1c0))(plVar4,lVar3);
    *(undefined4 *)(param_1 + 0x28) = 5;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1f0))();
    if ((uVar5 & 1) == 0) {
      return;
    }
    goto LAB_009c5d20;
  case 5:
    uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1f0))();
    break;
  default:
    *(undefined1 *)(param_1 + 0x2c) = 1;
    return;
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
LAB_009c5d20:
  *(undefined4 *)(param_1 + 0x28) = 6;
  return;
}


