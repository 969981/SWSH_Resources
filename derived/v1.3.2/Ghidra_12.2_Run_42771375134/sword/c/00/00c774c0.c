/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c774c0; name: FUN_00c774c0
 */


bool FUN_00c774c0(long *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if (*param_1 != 0) {
    cVar2 = FUN_0069bda0(*param_1,param_1 + 5);
    bVar1 = cVar2 != '\0';
  }
  return bVar1;
}


