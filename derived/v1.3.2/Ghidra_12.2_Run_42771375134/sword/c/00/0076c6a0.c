/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076c6a0; name: FUN_0076c6a0
 */


void FUN_0076c6a0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x60);
  if (*plVar1 != 0) {
    FUN_0076d7f0(plVar1);
    if (*plVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x270) + 0x18))
                (*(long **)(param_1 + 0x270),*plVar1,*(undefined8 *)(param_1 + 0x268),8);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  return;
}


