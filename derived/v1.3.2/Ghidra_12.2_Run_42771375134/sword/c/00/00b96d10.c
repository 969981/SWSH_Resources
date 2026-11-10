/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b96d10; name: FUN_00b96d10
 */


void FUN_00b96d10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_2c;
  int local_24;
  
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 1:
    FUN_011ca360(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x180));
    break;
  case 2:
    local_24 = 2;
    local_2c = 0;
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    local_38 = *(long *)(*(long *)(param_1 + 0x70) + 0x178);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_00bcaf40(uVar2,&local_38,&local_24,(long)&local_2c + 4,&local_2c);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    local_40 = *(long *)(*(long *)(param_1 + 0x70) + 0x178);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x180);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    FUN_011ca400(uVar2,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    FUN_011ca460(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x180));
    break;
  case 3:
    FUN_011ca470(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x180));
    break;
  case 4:
    FUN_011ca490(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x180));
    break;
  case 5:
    FUN_011ca480(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x180));
    break;
  case 6:
    local_24 = 2;
    local_2c = 0;
    FUN_00bcb210(*(undefined8 *)(param_1 + 0xb8),&local_24,(long)&local_2c + 4,&local_2c);
    lVar1 = *(long *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(lVar1 + 0x180);
    if (local_24 == 0) {
      local_48 = *(long *)(lVar1 + 0x178);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      FUN_011ca4a0(uVar2,&local_48,local_2c._4_4_,local_2c & 0xffffffff);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
    else {
      local_50 = *(long *)(lVar1 + 0x178);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
      }
      FUN_011ca610(uVar2,&local_50,local_2c & 0xffffffff);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


