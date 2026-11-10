/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00159890; name: FUN_00159890
 */


void FUN_00159890(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 0x110 + (param_1 + 0xfU & 0x3ffffff0) * 4 + 0x110;
  *param_2 = iVar1;
  *param_3 = iVar1 + param_1 * 0x210;
  *param_4 = param_1 * 0x2a0;
  return;
}


