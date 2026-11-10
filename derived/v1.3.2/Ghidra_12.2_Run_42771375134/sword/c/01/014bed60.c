/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bed60; name: FUN_014bed60
 */


undefined8 FUN_014bed60(short *param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*param_1 == 0x10) {
    uVar2 = FUN_0077db50();
    if (((uVar2 & 0xff00) == 0x100) && (cVar1 = FUN_0077db50(param_1), cVar1 == '\x14')) {
      return 1;
    }
  }
  return 0;
}


