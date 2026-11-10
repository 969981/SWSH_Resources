/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e12d00; name: FUN_00e12d00
 */


undefined8 FUN_00e12d00(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)PTR_DAT_0271e8d0 + (long)*(int *)(param_1 + 0x360) * 0x58 + 0x70);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 1;
    }
    uVar1 = (**(code **)(*(long *)plVar2[3] + 0x10))();
    if ((uVar1 & 1) == 0) break;
    plVar2 = (long *)*plVar2;
  }
  return 0;
}


