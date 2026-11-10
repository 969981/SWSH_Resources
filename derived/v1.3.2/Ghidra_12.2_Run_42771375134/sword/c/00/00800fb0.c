/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800fb0; name: FUN_00800fb0
 */


int FUN_00800fb0(ulong param_1,char *param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte *param5;
  FILE *param0;
  
  param0 = *(FILE **)PTR_stderr_02716ee0;
  param5 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    param5 = param_4 + 1;
  }
  fprintf(param0,"[libprotobuf %s %s:%d] %s\n",(&PTR_DAT_026135e0)[param_1 & 0xffffffff],param_2,
          param_3,(char *)param5);
  iVar1 = fflush(param0);
  return iVar1;
}


