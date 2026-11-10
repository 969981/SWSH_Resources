/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bef40; name: FUN_014bef40
 */


bool FUN_014bef40(short *param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*param_1 != 0x10) {
    return false;
  }
  uVar2 = FUN_0077db50();
  if ((uVar2 & 0xff00) != 0x100) {
    return false;
  }
  cVar1 = FUN_0077db50(param_1);
  if (cVar1 == -0x33) {
    return true;
  }
  return cVar1 == -0x32;
}


