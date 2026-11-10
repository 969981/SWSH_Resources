/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c55d0; name: FUN_005c55d0
 */


void FUN_005c55d0(undefined1 *param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if (param_3 == (char *)0x0) {
      if (param_1 != (undefined1 *)0x0) {
        *param_1 = 0;
        return;
      }
    }
    else {
      cVar1 = *param_3;
      if (param_4 == -1) {
        if (cVar1 == '\0') {
          lVar2 = 0;
        }
        else if (param_2 < 1) {
          lVar3 = 0;
          do {
            param_1[lVar3] = cVar1;
            lVar2 = lVar3 + 1;
            cVar1 = param_3[lVar3 + 1];
            lVar3 = lVar2;
          } while (cVar1 != '\0');
        }
        else {
          lVar3 = 0;
          do {
            if (param_2 <= lVar3) goto LAB_005c5670;
            param_1[lVar3] = cVar1;
            lVar2 = lVar3 + 1;
            cVar1 = param_3[lVar3 + 1];
            lVar3 = lVar2;
          } while (cVar1 != '\0');
        }
      }
      else {
        lVar2 = 0;
        if ((0 < param_4) && (cVar1 != '\0')) {
          if (param_2 < 1) {
            lVar3 = 0;
            do {
              lVar2 = lVar3 + 1;
              param_1[lVar3] = cVar1;
              if (param_4 < 2) break;
              cVar1 = param_3[lVar3 + 1];
              param_4 = param_4 + -1;
              lVar3 = lVar2;
            } while (cVar1 != '\0');
          }
          else {
            lVar3 = 0;
            do {
              if (param_2 <= lVar3) {
LAB_005c5670:
                param_1[lVar3 + -1] = 0;
                return;
              }
              lVar2 = lVar3 + 1;
              param_1[lVar3] = cVar1;
              if (param_4 < 2) break;
              cVar1 = param_3[lVar3 + 1];
              param_4 = param_4 + -1;
              lVar3 = lVar2;
            } while (cVar1 != '\0');
          }
        }
      }
      param_1[lVar2] = 0;
    }
  }
  return;
}


