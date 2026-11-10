/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098adf0; name: FUN_0098adf0
 */


void FUN_0098adf0(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_0093eb90(param_1,2);
  if ((((uVar1 == (param_2 & 0xff)) && (uVar2 = FUN_0093eb90(param_1,3), uVar2 != uVar1)) &&
      (iVar3 = FUN_0093eb90(param_1,0x22), iVar3 != 9)) &&
     (((param_3 == 8 || (iVar3 = FUN_0093eb90(param_1,0x22), iVar3 == param_3)) &&
      (iVar3 = FUN_0093eb90(param_1,0x23), iVar3 < 0)))) {
    uVar1 = FUN_0093ebd0(param_1,0x48,1);
    FUN_0093ec40(param_1,0,uVar1 & 1);
    return;
  }
  return;
}


