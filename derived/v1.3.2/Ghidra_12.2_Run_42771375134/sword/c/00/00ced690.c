/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ced690; name: FUN_00ced690
 */


void FUN_00ced690(long param_1,undefined8 param_2,ulong param_3,byte param_4,byte param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_58;
  undefined8 uStack_50;
  byte local_48;
  byte local_47;
  undefined1 local_46;
  undefined8 uStack_38;
  
  local_48 = param_4 & 1;
  local_47 = param_5 & 1;
  local_46 = 0;
  local_58 = 0;
  uStack_50 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  uStack_38 = param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x90),&uStack_38,lVar1);
  FUN_014c62d0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8),lVar3,lVar1);
  local_58 = lVar3;
  if ((param_3 & 1) == 0) {
    FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_58);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  }
  else {
    FUN_010392c0(*(undefined8 *)(param_1 + 0x88),5);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x88))
              (*(long **)(param_1 + 0x88),&local_58,param_1 + 0xa8);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


