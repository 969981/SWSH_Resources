/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb450; name: FUN_008fb450
 */


void FUN_008fb450(long param_1,undefined8 param_2,short param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_008e2850(param_2,param_3);
  if ((param_3 == 0xa5) || ((uVar1 & 1) != 0)) {
    *(short *)(*(long *)(param_1 + 0x88) + 0xcee) = param_3;
    return;
  }
  return;
}


