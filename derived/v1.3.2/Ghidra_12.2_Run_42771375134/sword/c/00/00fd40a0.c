/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd40a0; name: FUN_00fd40a0
 */


undefined8 FUN_00fd40a0(long param_1,int param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x651) == '\0') || (*(int *)(param_1 + 0x630) != param_2)) {
    if ((*(char *)(param_1 + 0x679) == '\0') || (*(int *)(param_1 + 0x658) != param_2)) {
      if ((*(char *)(param_1 + 0x6a1) == '\0') || (*(int *)(param_1 + 0x680) != param_2)) {
        if ((*(char *)(param_1 + 0x6c9) == '\0') || (*(int *)(param_1 + 0x6a8) != param_2)) {
          if ((*(char *)(param_1 + 0x6f1) == '\0') || (*(int *)(param_1 + 0x6d0) != param_2)) {
            if ((*(char *)(param_1 + 0x719) == '\0') || (*(int *)(param_1 + 0x6f8) != param_2)) {
              if ((*(char *)(param_1 + 0x741) == '\0') || (*(int *)(param_1 + 0x720) != param_2)) {
                if ((*(char *)(param_1 + 0x769) == '\0') || (*(int *)(param_1 + 0x748) != param_2))
                {
                  if ((*(char *)(param_1 + 0x791) == '\0') || (*(int *)(param_1 + 0x770) != param_2)
                     ) {
                    if (*(char *)(param_1 + 0x7b9) == '\0') {
                      return 0;
                    }
                    if (*(int *)(param_1 + 0x798) != param_2) {
                      return 0;
                    }
                    lVar1 = 9;
                  }
                  else {
                    lVar1 = 8;
                  }
                }
                else {
                  lVar1 = 7;
                }
              }
              else {
                lVar1 = 6;
              }
            }
            else {
              lVar1 = 5;
            }
          }
          else {
            lVar1 = 4;
          }
        }
        else {
          lVar1 = 3;
        }
      }
      else {
        lVar1 = 2;
      }
    }
    else {
      lVar1 = 1;
    }
  }
  else {
    lVar1 = 0;
  }
  lVar1 = param_1 + lVar1 * 0x28;
  *(undefined4 *)(*(long *)(param_1 + 0x5d0) + 8) = *(undefined4 *)(lVar1 + 0x640);
  **(undefined4 **)(param_1 + 0x5d0) = *(undefined4 *)(lVar1 + 0x644);
  return 1;
}


