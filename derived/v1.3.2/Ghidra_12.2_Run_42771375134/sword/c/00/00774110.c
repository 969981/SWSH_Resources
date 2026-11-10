/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00774110; name: FUN_00774110
 */


undefined4 FUN_00774110(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 100) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 100) = 1;
  lVar4 = *(long *)(param_1 + 0x100);
  lVar3 = *(long *)(param_1 + 0x108);
  lVar6 = lVar3 + -1;
  plVar2 = *(long **)(lVar4 + lVar6 * 8);
  switch((int)plVar2[0xd]) {
  case 0:
    *(undefined4 *)(plVar2 + 0xd) = 1;
    plVar2 = *(long **)(lVar4 + lVar6 * 8);
  case 1:
    iVar1 = (**(code **)(*plVar2 + 0x38))();
    if (iVar1 == 1) {
      lVar3 = *(long *)(lVar4 + lVar6 * 8);
      uVar5 = 2;
LAB_007742ac:
      *(undefined4 *)(lVar3 + 0x68) = uVar5;
      *(undefined4 *)(*(long *)(lVar4 + lVar6 * 8) + 0x60) = 0;
    }
    break;
  case 2:
    iVar1 = (**(code **)(*plVar2 + 0x40))();
    *(undefined1 *)(param_1 + 0x62) = 1;
    if (*(char *)(param_1 + 99) == '\0') {
      if (iVar1 != 1) break;
    }
    else {
      *(undefined1 *)(param_1 + 99) = 0;
    }
    lVar3 = *(long *)(lVar4 + lVar6 * 8);
    uVar5 = 3;
    goto LAB_007742ac;
  case 3:
    *(undefined1 *)(param_1 + 0x62) = 0;
    iVar1 = (**(code **)(**(long **)(lVar4 + lVar6 * 8) + 0x58))();
    if (iVar1 != 1) break;
    *(undefined4 *)(*(long *)(lVar4 + lVar6 * 8) + 0x68) = 4;
    lVar4 = *(long *)(param_1 + 0x100);
    lVar3 = *(long *)(param_1 + 0x108);
  case 4:
    lVar4 = lVar4 + lVar3 * 8;
    lVar6 = *(long *)(lVar4 + -8);
    if (*(char *)(param_1 + 0x61) == '\0') {
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -8) = 0;
        lVar3 = *(long *)(param_1 + 0x108);
      }
      *(long *)(param_1 + 0x108) = lVar3 + -1;
      *(undefined1 *)(param_1 + 99) = 0;
      if (lVar3 + -1 != 0) {
        (**(code **)(**(long **)(*(long *)(param_1 + 0x100) + lVar3 * 8 + -0x10) + 0x68))();
        lVar4 = *(long *)(param_1 + 0x108);
        goto joined_r0x00774280;
      }
    }
    else {
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -8) = 0;
        lVar3 = *(long *)(param_1 + 0x108);
      }
      *(long *)(param_1 + 0x108) = lVar3 + -1;
      FUN_00774630(param_1 + 0xc0,param_1 + 0x68);
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(undefined1 *)(param_1 + 99) = 0;
      lVar4 = *(long *)(param_1 + 0x108);
joined_r0x00774280:
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 100) = 2;
        break;
      }
    }
    *(undefined4 *)(param_1 + 100) = 0;
    break;
  default:
    break;
  }
  return *(undefined4 *)(param_1 + 100);
}


