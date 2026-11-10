/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ade50; name: FUN_014ade50
 */


int FUN_014ade50(char *param_1,ulong param_2,int param_3,ushort param_4,int param_5)

{
  int iVar1;
  
  if (param_5 != 2) {
    iVar1 = snprintf(param_1,param_2 & 0xffffffff,"ZKN_FORM_%03d_%03d",param_3,(uint)param_4);
    return iVar1;
  }
  if ((param_3 == 0x37c) && (param_4 == 1)) {
    iVar1 = snprintf(param_1,param_2 & 0xffffffff,"ZKN_FORM_%03d_998",0x37c);
    return iVar1;
  }
  iVar1 = snprintf(param_1,param_2 & 0xffffffff,"ZKN_FORM_%03d_999",param_3);
  return iVar1;
}


