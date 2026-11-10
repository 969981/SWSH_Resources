/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00945420; name: FUN_00945420
 */


int FUN_00945420(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_1 != 0xa5)) {
    iVar2 = FUN_00880b10(param_1);
    if (iVar2 != 0) {
      cVar1 = FUN_00880ae0(param_1);
      if ((byte)(cVar1 - 1U) < 0x11) {
        return *(int *)(&DAT_0214ae20 + (long)(char)(cVar1 - 1U) * 4);
      }
      return 0x2f8;
    }
    param_1 = 0x2e7;
  }
  return param_1;
}


