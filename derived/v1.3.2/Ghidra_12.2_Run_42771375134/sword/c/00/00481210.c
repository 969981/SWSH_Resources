/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00481210; name: FUN_00481210
 */


undefined8 FUN_00481210(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  plVar2 = (long *)FUN_00481290(param_1,*(undefined8 *)(param_2 + 0x270),
                                *(undefined4 *)(param_2 + 0x278));
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  if (iVar1 == 0) {
    FUN_004c00c0(param_1);
  }
  *plVar2 = param_2;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  return 1;
}


