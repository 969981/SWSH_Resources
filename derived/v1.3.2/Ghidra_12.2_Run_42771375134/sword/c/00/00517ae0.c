/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00517ae0; name: FUN_00517ae0
 */


int FUN_00517ae0(char *param_1)

{
  int iVar1;
  undefined1 local_f0 [128];
  
  iVar1 = vsnprintf(&DAT_0275c1b8,0x800,param_1,local_f0 + 0x80);
  if (DAT_0275c0f8 == (code *)0x0) {
    printf(&DAT_0275c1b8);
  }
  else {
    (*DAT_0275c0f8)(&DAT_0275c1b8);
  }
  return iVar1;
}


