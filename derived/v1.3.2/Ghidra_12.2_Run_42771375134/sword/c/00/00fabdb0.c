/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fabdb0; name: FUN_00fabdb0
 */


void FUN_00fabdb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x198) + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_38 = &local_28;
  local_30 = 0x60dd9a51c30b7a73;
  local_28 = 0;
  FUN_008a0cd0(lVar2,&local_38,0);
  uVar1 = local_28;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_016b4cf0(uVar1);
  FUN_016b55d0(uVar1,0);
  return;
}


