/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a19190; name: FUN_00a19190
 */


void FUN_00a19190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_3;
  if (iVar1 == 0) {
    FUN_00a19250(param_1,param_2,param_3,param_4);
    uVar2 = 2;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      FUN_00a19250(param_1,param_2,0,param_4);
      FUN_00a19250(param_1,param_2,2,param_4);
      param_3 = 1;
    }
    FUN_00a19250(param_1,param_2,param_3,param_4);
    uVar2 = 3;
  }
  FUN_00a19250(param_1,param_2,uVar2,param_4);
  return;
}


