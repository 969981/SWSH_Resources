/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adc890; name: FUN_00adc890
 */


void FUN_00adc890(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_38;
  
  FUN_00ac8d10(param_1,1);
  local_48 = 0;
  switch(param_3) {
  case 1:
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x418);
    break;
  case 2:
    if ((param_5 & 1) == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x408);
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x430);
    }
    break;
  case 3:
    if ((param_5 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x440);
      goto joined_r0x00adca3c;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x420);
    break;
  case 4:
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x428);
    goto joined_r0x00adca3c;
  default:
    if ((param_5 & 1) == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x410);
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x438);
    }
joined_r0x00adca3c:
    if (lVar2 == 0) goto LAB_00adc904;
    goto LAB_00adc8f4;
  }
  if (lVar2 != 0) {
LAB_00adc8f4:
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
LAB_00adc904:
  local_48 = lVar2;
  lVar2 = FUN_00add530(&local_38,*(undefined8 *)(param_1 + 8),&local_48);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_38 = lVar2;
  FUN_006d9640(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x4b8);
  *(long *)(param_1 + 0x4b8) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x4b8);
  }
  FUN_00794370(lVar2,param_2);
  if ((param_4 & 1) != 0) {
    FUN_007946a0(*(undefined8 *)(param_1 + 0x4b8),1);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


