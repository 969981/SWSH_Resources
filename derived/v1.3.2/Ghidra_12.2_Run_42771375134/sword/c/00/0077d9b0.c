/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d9b0; name: FUN_0077d9b0
 */


int FUN_0077d9b0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 1;
  sVar1 = *param_1;
  while( true ) {
    while( true ) {
      while (sVar1 == 10) {
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
        sVar1 = *param_1;
      }
      if (sVar1 != 0x10) break;
      param_1 = param_1 + (ulong)(ushort)param_1[1] + 2;
      sVar1 = *param_1;
    }
    if (sVar1 == 0) break;
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  return iVar2;
}


