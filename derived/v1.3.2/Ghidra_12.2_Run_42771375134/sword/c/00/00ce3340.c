/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce3340; name: FUN_00ce3340
 */


void FUN_00ce3340(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x610) != 0) {
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(lVar2 + 0x2e8);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    if (*(long *)(param_1 + 0x610) != 0) {
      FUN_016bbde0(*(long *)(param_1 + 0x610),0);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),1);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),2);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),3);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x610),4);
    }
    local_28 = 0xf8524d49ac31095c;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x6c0),&local_28,lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x610);
    local_38 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar3,0,0,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    local_28 = 0xf8524c49ac3107a9;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x6c0),&local_28,lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x610);
    local_40 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar3,1,1,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  return;
}


