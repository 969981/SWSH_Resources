/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008773e0; name: FUN_008773e0
 */


int FUN_008773e0(uint param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (param_2 ^ param_1) >> 0x10;
  iVar3 = 1;
  if ((uVar2 ^ param_1 & 0xffff) == (param_2 & 0xffff)) {
    iVar3 = 2;
  }
  iVar1 = 0;
  if (((param_2 ^ param_1) & 0xfff0 ^ uVar2) < 0x10) {
    iVar1 = iVar3;
  }
  iVar3 = 2;
  if (((param_3 == 0x22 | param_4) & iVar1 != 0) == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}


