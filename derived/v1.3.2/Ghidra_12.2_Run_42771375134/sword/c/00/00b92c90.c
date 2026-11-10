/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b92c90; name: FUN_00b92c90
 */


void FUN_00b92c90(long param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  FUN_00ffa3d0(param_1,0);
  FUN_00ffa160(param_1,1,1);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  local_18 = 0xde84e9d037549cec;
  uVar1 = FUN_00ffdef0(param_1 + 0x100,&local_18);
  if (*(long *)(param_1 + 0x5e0) != *(long *)(param_1 + 0x5e8)) {
    FUN_016b2da0(uVar1,1);
  }
  return;
}


