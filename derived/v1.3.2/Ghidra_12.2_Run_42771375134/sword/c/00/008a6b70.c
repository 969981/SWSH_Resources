/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a6b70; name: FUN_008a6b70
 */


void FUN_008a6b70(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  byte local_47;
  byte local_46;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x150);
  lVar1 = *(long *)(param_1 + 0x170);
  uStack_38 = param_2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_47 = param_3 & 1;
  local_46 = param_4 & 1;
  FUN_0077eb10(lVar1,&uStack_38,*(undefined8 *)(param_1 + 0x158));
  FUN_014c62d0(*(undefined8 *)(lVar2 + 0x5d8),*(undefined8 *)(param_1 + 0x160),
               *(undefined8 *)(param_1 + 0x158));
  local_58 = *(undefined8 *)(param_1 + 0x160);
  FUN_01038170(lVar2,&local_58);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


