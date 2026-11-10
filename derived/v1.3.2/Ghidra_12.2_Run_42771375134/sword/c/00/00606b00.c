/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00606b00; name: FUN_00606b00
 */


undefined8 FUN_00606b00(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar1 = *(long *)(param_1 + 0x10) + param_2;
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    if (*(ulong *)(param_1 + 8) < uVar1) {
      return 0x55;
    }
  }
  else {
    lVar2 = (**(code **)(param_1 + 0x28))(param_1,uVar1,0,0);
    if (lVar2 != 0) {
      return 0x55;
    }
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  return 0;
}


