/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e63ef0; name: FUN_00e63ef0
 */


void FUN_00e63ef0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar1 + 0x180))(0,plVar1,PTR_DAT_0271e870);
  (**(code **)(*plVar1 + 400))(plVar1,PTR_DAT_0271e898,0);
  (**(code **)(*plVar1 + 0x1f0))(plVar1,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}


