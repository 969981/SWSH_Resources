/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffa3f0; name: FUN_00ffa3f0
 */


void FUN_00ffa3f0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00ffa440(*(undefined8 *)(param_1 + 0x60));
  if (lVar1 == 0 || lVar1 != param_1) {
    return;
  }
  FUN_00ff8cb0(*(undefined8 *)(param_1 + 0x60),0,0);
  return;
}


