/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdcfb0; name: FUN_00bdcfb0
 */


void FUN_00bdcfb0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x68) = param_2;
  local_40 = uVar2;
  switch(param_2) {
  case 0:
    lVar1 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (lVar1 == 0) goto LAB_00bdd05c;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    lVar1 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    break;
  case 1:
    lVar1 = FUN_00bdee80(auStack_38,uVar2,&local_40);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    *(long *)(param_1 + 0x98) = lVar1;
LAB_00bdd05c:
    lVar1 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = FUN_00bdf040(auStack_30,uVar2,&local_40);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(long *)(param_1 + 0xa0) = lVar1;
    lVar1 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (lVar1 == 0) {
      return;
    }
    goto LAB_00bdd0f8;
  case 3:
    lVar1 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = FUN_00bdf290(auStack_28,uVar2,&local_40);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    *(long *)(param_1 + 0xa8) = lVar1;
    return;
  default:
    goto switchD_00bdcfec_default;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
LAB_00bdd0f8:
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    return;
  }
switchD_00bdcfec_default:
  return;
}


