/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce610; name: FUN_00bce610
 */


void FUN_00bce610(long param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long local_48;
  long local_38;
  
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    local_38 = *(long *)(param_1 + 0x78);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_01505ea0(uVar3,&local_38,param_3,param_4);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  else if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    local_48 = *(long *)(param_1 + 0x78);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    uVar1 = FUN_0150a590(*(undefined8 *)(param_1 + 0x70),param_3 + -1,param_4);
    uVar2 = FUN_0150a5c0(*(undefined8 *)(param_1 + 0x70),param_3 + -1,param_4);
    FUN_01505ea0(uVar3,&local_48,uVar1,uVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


