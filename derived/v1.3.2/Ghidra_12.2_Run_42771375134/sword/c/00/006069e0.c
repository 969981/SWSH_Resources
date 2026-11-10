/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006069e0; name: FUN_006069e0
 */


undefined8 FUN_006069e0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    if (*(ulong *)(param_1 + 8) < param_2) {
      return 0x55;
    }
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,0,0);
    if (lVar1 != 0) {
      return 0x55;
    }
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  return 0;
}


