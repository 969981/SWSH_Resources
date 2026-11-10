/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468b70; name: FUN_00468b70
 */


void FUN_00468b70(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0047d6f0();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x54) = param_2;
  FUN_0042c1b0();
  return;
}


