/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f590; name: FUN_0075f590
 */


bool FUN_0075f590(ulong *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar1 = 0x28;
  }
  lVar2 = param_2 + 0x18;
  if (param_2 < 0x11) {
    lVar2 = 0x28;
  }
  return 0x27 < (ulong)(lVar1 - lVar2);
}


