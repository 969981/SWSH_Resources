/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e9020; name: FUN_009e9020
 */


void FUN_009e9020(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_80;
  undefined4 local_78;
  long local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x78));
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = FUN_008e0a00(*(undefined8 *)(param_1 + 0x80));
  uVar2 = FUN_008f9470(uVar4,uVar3,uVar2);
  uVar2 = FUN_008f9400(*(undefined8 *)(param_1 + 0x68),uVar2,0);
  local_80 = 0;
  local_70 = 0;
  local_68 = 5;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_80 = lVar5;
  local_78 = FUN_009e6cb0(param_1);
  lVar5 = *(long *)(param_1 + 0xb8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar1 = *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0xc6) * 8 + 200);
  local_70 = lVar5;
  uVar4 = FUN_00905040(*(undefined8 *)(param_1 + 0x70));
  local_40 = FUN_00914330(uVar4,uVar1);
  local_60 = *(undefined8 *)(param_1 + 0x80);
  local_58 = FUN_008df7f0(uVar3,uVar2);
  local_68 = FUN_009e6ca0(param_1);
  FUN_009e6930(*(undefined8 *)(param_1 + 0xb0),&local_80);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return;
}


