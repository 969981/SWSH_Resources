/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3e30; name: FUN_00bd3e30
 */


void FUN_00bd3e30(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_28;
  
  local_28 = 0x88ba4f286b15bac5;
  uVar1 = FUN_00ffdef0(param_1 + 0x100,&local_28);
  FUN_016b2da0(uVar1,1);
  FUN_00ffa3d0(param_1,0);
  FUN_00ffa160(param_1,1,1);
  local_28 = 0xaf29d7bfffad6d9f;
  plVar2 = (long *)FUN_00ffde30(param_1 + 0x100,&local_28);
  FUN_016b2d70(plVar2,1);
  (**(code **)(*plVar2 + 0x50))(plVar2);
  FUN_00bd3ee0(param_1);
  return;
}


