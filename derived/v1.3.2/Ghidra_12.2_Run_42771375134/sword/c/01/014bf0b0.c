/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf0b0; name: FUN_014bf0b0
 */


bool FUN_014bf0b0(short *param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  
  sVar1 = *param_1;
  uVar3 = FUN_0077db50();
  if (sVar1 == 0x10) {
    cVar2 = FUN_0077db50(param_1);
    return (uVar3 >> 8 & 0xff) == 0x19 && cVar2 == '\0';
  }
  return false;
}


