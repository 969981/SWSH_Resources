/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404950; name: FUN_00404950
 */


undefined8 FUN_00404950(int param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)PTR_DAT_02712a40 + (long)param_1 * 0x68;
  *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) - *(int *)(lVar1 + 4);
  *param_2 = 0;
  plVar2 = (long *)(lVar1 + 0x20);
  if (*plVar2 != 0) {
    plVar2 = *(long **)(lVar1 + 0x18);
  }
  *plVar2 = (long)param_2;
  *(undefined8 **)(lVar1 + 0x18) = param_2;
  return 1;
}


