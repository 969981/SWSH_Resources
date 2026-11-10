/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933680; name: FUN_00933680
 */


void FUN_00933680(undefined8 *param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_008f8ca0(*param_1);
  if (bVar1 < 2) {
    FUN_00933870(param_1[(ulong)bVar1 * 4 + 1],param_2);
    return;
  }
  return;
}


