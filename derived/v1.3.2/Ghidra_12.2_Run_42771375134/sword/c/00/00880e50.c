/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880e50; name: FUN_00880e50
 */


int FUN_00880e50(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 < 3) {
    FUN_00881490(DAT_029f6120,param_1);
    iVar1 = FUN_00881dd0(DAT_029f6120,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_00881f60(DAT_029f6120,param_2);
    }
  }
  else {
    uVar2 = 0;
    iVar1 = 0;
  }
  *param_3 = uVar2;
  return iVar1;
}


