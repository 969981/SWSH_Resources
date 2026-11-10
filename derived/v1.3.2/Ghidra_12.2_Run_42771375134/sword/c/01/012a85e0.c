/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a85e0; name: FUN_012a85e0
 */


void FUN_012a85e0(long param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    cVar1 = FUN_007a9cb0();
    if (cVar1 == '\x02') {
      FUN_012a8630(param_1);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}


