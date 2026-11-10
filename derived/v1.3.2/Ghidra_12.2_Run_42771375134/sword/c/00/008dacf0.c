/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dacf0; name: FUN_008dacf0
 */


void FUN_008dacf0(long param_1)

{
  long lVar1;
  
  FUN_00931990(*(undefined8 *)(param_1 + 8));
  lVar1 = FUN_008dd020();
  if (lVar1 != 0) {
    do {
      FUN_008db940(lVar1);
      lVar1 = FUN_008db990(lVar1);
    } while (lVar1 != 0);
  }
  return;
}


