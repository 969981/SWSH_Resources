/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bac510; name: FUN_00bac510
 */


void FUN_00bac510(long param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  FUN_00bac5a0();
  FUN_00bac0b0(param_1,0);
  local_28 = 0x81a47cc98377713f;
  uVar1 = FUN_00ffdef0(param_1 + 0x100,&local_28);
  FUN_016b2da0(uVar1,0);
  local_28 = 0xc72ea1416f28d65c;
  uVar1 = FUN_00ffdef0(param_1 + 0x100,&local_28);
  FUN_016b2da0(uVar1,0);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  return;
}


