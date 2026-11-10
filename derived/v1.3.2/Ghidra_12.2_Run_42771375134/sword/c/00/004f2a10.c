/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f2a10; name: FUN_004f2a10
 */


undefined8
FUN_004f2a10(undefined8 param_1,int *param_2,float *param_3,int *param_4,undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  
  iVar2 = *param_2;
  if (param_2[1] < 1) {
    if (0 < iVar2) {
      lVar3 = 0;
      pfVar4 = (float *)(param_2 + 5);
      do {
        if ((((*param_3 <= *pfVar4) && (pfVar4[-3] <= param_3[3])) && (param_3[1] <= pfVar4[1])) &&
           (((pfVar4[-2] <= param_3[4] && (param_3[2] <= pfVar4[2])) && (pfVar4[-1] <= param_3[5])))
           ) {
          *param_4 = *param_4 + 1;
          uVar1 = FUN_004f2bb0(param_5,*(undefined8 *)(pfVar4 + 5));
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          iVar2 = *param_2;
        }
        lVar3 = lVar3 + 1;
        pfVar4 = pfVar4 + 10;
      } while (lVar3 < iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar3 = 0;
    pfVar4 = (float *)(param_2 + 4);
    do {
      if (((*param_3 <= pfVar4[1]) && (pfVar4[-2] <= param_3[3])) &&
         ((param_3[1] <= pfVar4[2] &&
          (((pfVar4[-1] <= param_3[4] && (param_3[2] <= pfVar4[3])) && (*pfVar4 <= param_3[5]))))))
      {
        uVar1 = FUN_004f2a10(param_1,*(undefined8 *)(pfVar4 + 4),param_3,param_4,param_5);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        iVar2 = *param_2;
      }
      lVar3 = lVar3 + 1;
      pfVar4 = pfVar4 + 10;
    } while (lVar3 < iVar2);
  }
  return 1;
}


