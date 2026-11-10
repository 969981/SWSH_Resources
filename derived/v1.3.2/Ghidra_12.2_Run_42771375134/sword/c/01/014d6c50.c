/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d6c50; name: FUN_014d6c50
 */


void FUN_014d6c50(long param_1,uint param_2)

{
  undefined8 local_18;
  
  if (99 < param_2) {
    param_2 = 100;
  }
  local_18 = 0x3b118f6fa718902d;
  FUN_00ffd510((float)(100 - param_2),param_1 + 0x100,&local_18);
  return;
}


