/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed3b0; name: FUN_005ed3b0
 */


int FUN_005ed3b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_4 < 1) {
      if (param_5 < 1) {
        if (param_6 < 1) {
          if (((param_1 < 1) && (param_2 < 1)) && (param_3 < 1)) {
            return 0;
          }
          iVar5 = 0;
          do {
            do {
              iVar4 = param_3;
              iVar3 = param_2;
              iVar2 = param_1 >> 1;
              param_2 = iVar3 >> 1;
              param_3 = iVar4 >> 1;
              iVar5 = iVar5 + 1;
              bVar1 = 1 < param_1;
              param_1 = iVar2;
            } while (bVar1);
          } while ((1 < iVar3) || (1 < iVar4));
        }
        else {
          iVar5 = 0;
          do {
            if (((param_1 < 1) && (param_2 < 1)) && (param_3 < 1)) {
              return iVar5;
            }
            param_3 = param_3 >> 1;
            param_1 = param_1 >> 1;
            param_2 = param_2 >> 1;
            iVar5 = iVar5 + 1;
          } while (param_6 <= param_3);
        }
      }
      else {
        iVar5 = 0;
        while (((0 < param_1 || (0 < param_2)) || (0 < param_3))) {
          param_3 = param_3 >> 1;
          param_2 = param_2 >> 1;
          iVar5 = iVar5 + 1;
          if (param_2 < param_5) {
            return iVar5;
          }
          param_1 = param_1 >> 1;
          if (0 < param_6 && param_3 < param_6) {
            return iVar5;
          }
        }
      }
    }
    else if (param_5 < 1) {
      if (param_6 < 1) {
        iVar5 = 0;
        do {
          if (((param_1 < 1) && (param_2 < 1)) && (param_3 < 1)) {
            return iVar5;
          }
          param_1 = param_1 >> 1;
          param_2 = param_2 >> 1;
          param_3 = param_3 >> 1;
          iVar5 = iVar5 + 1;
        } while (param_4 <= param_1);
      }
      else {
        iVar5 = 0;
        do {
          if (((param_1 < 1) && (param_2 < 1)) && (param_3 < 1)) {
            return iVar5;
          }
          param_1 = param_1 >> 1;
          iVar5 = iVar5 + 1;
          if (param_1 < param_4) {
            return iVar5;
          }
          param_3 = param_3 >> 1;
          param_2 = param_2 >> 1;
        } while (param_6 <= param_3);
      }
    }
    else {
      iVar5 = 0;
      while (((0 < param_1 || (0 < param_2)) || (0 < param_3))) {
        param_3 = param_3 >> 1;
        param_1 = param_1 >> 1;
        iVar5 = iVar5 + 1;
        if (param_1 < param_4) {
          return iVar5;
        }
        param_2 = param_2 >> 1;
        if (param_2 < param_5) {
          return iVar5;
        }
        if (0 < param_6 && param_3 < param_6) {
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}


