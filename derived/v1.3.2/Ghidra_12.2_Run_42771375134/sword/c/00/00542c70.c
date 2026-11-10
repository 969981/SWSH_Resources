/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00542c70; name: FUN_00542c70
 */


int FUN_00542c70(long *param_1,uint param_2,undefined4 param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if (0 < param_5) {
    lVar3 = 0;
    do {
      uVar2 = (**(code **)(*param_1 + 0x248))(param_1,param_3,*(undefined4 *)(param_4 + lVar3 * 4));
      if ((param_2 & (uVar2 ^ 0xffffffff)) == 0) {
        iVar1 = *(int *)(param_4 + lVar3 * 4);
        if (iVar1 == 0) {
          return param_6;
        }
        return iVar1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_5);
  }
  return param_6;
}


