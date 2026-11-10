/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00469160; name: FUN_00469160
 */


undefined8 FUN_00469160(uint *param_1,uint param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  lVar1 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)param_2 << 4);
  *(long *)(param_1 + 2) = lVar1;
  if (lVar1 == 0) {
    *param_1 = 0;
    return 0x34;
  }
  return 1;
}


