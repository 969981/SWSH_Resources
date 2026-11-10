/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfa9a0; name: FUN_00bfa9a0
 */


void FUN_00bfa9a0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong local_38;
  
  switch(param_2) {
  case 0:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xe191bd648c1fb775;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    break;
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x5c7f00dd6aab;
    goto LAB_00bfaa74;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x617f00dd732a;
    goto LAB_00bfaa74;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x5d7f00dd6c5e;
    goto LAB_00bfaa74;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x5b7f00dd68f8;
    goto LAB_00bfaa74;
  case 5:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x84fb36f5007c;
    goto LAB_00bfab24;
  case 6:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x5e7f00dd6e11;
LAB_00bfaa74:
    local_38 = local_38 | 0xcfb4000000000000;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    break;
  case 7:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x85fb36f5022f;
LAB_00bfab24:
    local_38 = local_38 | 0xe478000000000000;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    break;
  case 8:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xd2ad522562d55552;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    break;
  case 9:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x6be62e255098f43;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    break;
  case 10:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0x7f17439186370fff;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    break;
  case 0xb:
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xfcf7518483c19f9f;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    break;
  default:
    goto switchD_00bfa9d4_default;
  }
  if (lVar2 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
switchD_00bfa9d4_default:
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_btlspot_title_00",uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_btlspot_title_00",uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


