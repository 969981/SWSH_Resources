/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd41e0; name: FUN_00bd41e0
 */


void FUN_00bd41e0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  FUN_00bd4230();
  local_18 = 0x88ba4f286b15bac5;
  uVar1 = FUN_00ffdef0(param_1 + 0x100,&local_18);
  FUN_016b2da0(uVar1,0);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  return;
}


