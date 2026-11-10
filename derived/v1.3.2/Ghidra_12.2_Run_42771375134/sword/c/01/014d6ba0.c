/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d6ba0; name: FUN_014d6ba0
 */


void FUN_014d6ba0(long param_1,ulong param_2)

{
  undefined8 local_28;
  
  FUN_00ffa290(param_1,1,1);
  if ((param_2 & 1) == 0) {
    local_28 = 0x3b8f5513c2470901;
    FUN_00ffd010(param_1 + 0x100,&local_28);
  }
  else {
    FUN_010364c0(param_1,0);
  }
  FUN_010364c0(param_1,2);
  local_28 = 0x3b118f6fa718902d;
  FUN_00ffd510(DAT_01d4c6b8,param_1 + 0x100,&local_28);
  return;
}


