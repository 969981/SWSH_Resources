/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005065a0; name: FUN_005065a0
 */


void FUN_005065a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (**(long **)(param_1 + 0x28) != 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,**(long **)(param_1 + 0x28));
      **(undefined8 **)(param_1 + 0x28) = 0;
      lVar1 = *(long *)(param_1 + 0x20);
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,lVar1);
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


