/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047ddf0; name: FUN_0047ddf0
 */


void FUN_0047ddf0(char *param_1)

{
  size_t sVar1;
  long lVar2;
  undefined1 auStack_a0 [128];
  
  sVar1 = strlen(param_1);
  memcpy(auStack_a0 + (0x80 - (sVar1 + 0x10 & 0xfffffffffffffff0)),param_1,sVar1 + 1);
  for (lVar2 = *(long *)(PTR_DAT_02713240 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    if (*(long *)(lVar2 + 0x108) != 0) {
      FUN_00458640(*(long *)(lVar2 + 0x108),
                   auStack_a0 + (0x80 - (sVar1 + 0x10 & 0xfffffffffffffff0)));
    }
  }
  return;
}


