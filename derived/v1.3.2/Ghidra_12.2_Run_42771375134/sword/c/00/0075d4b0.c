/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075d4b0; name: FUN_0075d4b0
 */


void FUN_0075d4b0(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 1) < 0xfffffffe) {
    FUN_0175dcd0(*param_1,0xfff0b9d8);
  }
  if ((int)param_2[1] == -2) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  }
  else if ((int)param_2[1] == -1) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  else {
    lVar2 = *param_1;
    lVar3 = *param_2;
    if (((lVar2 != lVar3) && (lVar2 != 0)) && (lVar3 != 0)) {
      lVar2 = FUN_01760230(lVar2,0xfff0b9d8);
      lVar3 = FUN_01760230(lVar3,0xfff0b9d8);
      if (lVar2 == lVar3) {
        lVar2 = *param_1;
        if (*param_2 == 0) {
          FUN_01760310(lVar2);
        }
        else {
          FUN_01760c90(*param_2,0xfff0b9d8,(long)(int)param_2[1]);
          if (*param_2 != lVar2) {
            FUN_0175edc0(*param_2,lVar2,1);
          }
        }
        uVar1 = FUN_0175dbf0(*param_1,0xfff0b9d8);
        *(undefined4 *)(param_1 + 1) = uVar1;
        return;
      }
      lVar3 = *param_2;
    }
    *param_1 = lVar3;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)(param_2 + 1) = 0xfffffffe;
    *param_2 = 0;
  }
  return;
}


