/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe9df0; name: FUN_00fe9df0
 */


void FUN_00fe9df0(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  long local_58;
  ulong local_50;
  undefined2 local_48;
  undefined1 local_46;
  
  lVar1 = param_1[0x56];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_48 = 0x101;
  local_58 = 0;
  local_50 = 0;
  local_46 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_88 = 0;
  local_60 = 1;
  local_5c = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_014c8930(lVar2,0,param_2);
  FUN_014c62d0(lVar2,lVar3,param_1[0xdf]);
  local_50 = local_50 & 0xffffffff00000000;
  local_98 = param_1[0xe0];
  local_90 = param_1[0xe1];
  local_5e = 1;
  local_58 = lVar3;
  (**(code **)(*param_1 + 0x88))(param_1,&local_58,&local_98);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


