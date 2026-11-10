/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da32a0; name: FUN_00da32a0
 */


bool FUN_00da32a0(long param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 != 0) {
    cVar1 = FUN_0069d0f0(param_1,PTR_DAT_0271e748);
    if (cVar1 == '\0') {
      cVar1 = FUN_0069d160(param_1,PTR_DAT_0271e748);
      return cVar1 != '\0';
    }
    bVar2 = true;
  }
  return bVar2;
}


