/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e332a0; name: FUN_00e332a0
 */


undefined2 FUN_00e332a0(undefined8 param_1,int *param_2)

{
  ulong uVar1;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
    return 0;
  }
  uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
  if (uVar1 == 0) {
    return 0;
  }
  return *(undefined2 *)((long)param_2 + uVar1);
}


