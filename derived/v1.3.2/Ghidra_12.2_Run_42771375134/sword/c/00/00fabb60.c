/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fabb60; name: FUN_00fabb60
 */


void FUN_00fabb60(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x198) + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_40 = &local_28;
  local_28 = 0;
  local_38 = 0x60dd9a51c30b7a73;
  FUN_008a0cd0(lVar2,&local_40,0);
  uVar1 = local_28;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_016b4ac0(uVar1,param_2,&DAT_02161cb8,1);
  return;
}


