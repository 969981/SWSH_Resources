/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf1e0; name: FUN_014bf1e0
 */


bool FUN_014bf1e0(short *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0x10) {
    uVar1 = FUN_0077db50();
    return (uVar1 >> 8 & 0xff) == 100;
  }
  return false;
}


