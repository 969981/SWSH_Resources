/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecd5c0; name: FUN_00ecd5c0
 */


void FUN_00ecd5c0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  
  pcVar3 = (char *)(param_1 + 0xb4);
  if ((*pcVar3 == '\0') || (plVar2 = (long *)(param_1 + 0x50), *plVar2 != *param_2)) {
    if ((*(char *)(param_1 + 0x124) == '\0') ||
       (plVar2 = (long *)(param_1 + 0xc0), *plVar2 != *param_2)) {
      if ((*(char *)(param_1 + 0x194) == '\0') ||
         (plVar2 = (long *)(param_1 + 0x130), *plVar2 != *param_2)) {
        if ((*(char *)(param_1 + 0x204) == '\0') ||
           (plVar2 = (long *)(param_1 + 0x1a0), *plVar2 != *param_2)) {
          if ((*(char *)(param_1 + 0x274) == '\0') ||
             (plVar2 = (long *)(param_1 + 0x210), *plVar2 != *param_2)) {
            if ((*(char *)(param_1 + 0x2e4) == '\0') ||
               (plVar2 = (long *)(param_1 + 0x280), *plVar2 != *param_2)) {
              if ((*(char *)(param_1 + 0x354) == '\0') ||
                 (plVar2 = (long *)(param_1 + 0x2f0), *plVar2 != *param_2)) {
                if ((*(char *)(param_1 + 0x3c4) == '\0') ||
                   (plVar2 = (long *)(param_1 + 0x360), *plVar2 != *param_2)) {
                  if ((*(char *)(param_1 + 0x434) == '\0') ||
                     (plVar2 = (long *)(param_1 + 0x3d0), *plVar2 != *param_2)) {
                    if (*(char *)(param_1 + 0x4a4) == '\0') {
                      return;
                    }
                    plVar2 = (long *)(param_1 + 0x440);
                    if (*plVar2 != *param_2) {
                      return;
                    }
                    pcVar3 = (char *)(param_1 + 0x4a4);
                    lVar4 = 9;
                  }
                  else {
                    pcVar3 = (char *)(param_1 + 0x434);
                    lVar4 = 8;
                  }
                }
                else {
                  pcVar3 = (char *)(param_1 + 0x3c4);
                  lVar4 = 7;
                }
              }
              else {
                pcVar3 = (char *)(param_1 + 0x354);
                lVar4 = 6;
              }
            }
            else {
              pcVar3 = (char *)(param_1 + 0x2e4);
              lVar4 = 5;
            }
          }
          else {
            pcVar3 = (char *)(param_1 + 0x274);
            lVar4 = 4;
          }
        }
        else {
          pcVar3 = (char *)(param_1 + 0x204);
          lVar4 = 3;
        }
      }
      else {
        pcVar3 = (char *)(param_1 + 0x194);
        lVar4 = 2;
      }
    }
    else {
      pcVar3 = (char *)(param_1 + 0x124);
      lVar4 = 1;
    }
  }
  else {
    lVar4 = 0;
  }
  FUN_00ecd480(param_1,plVar2);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  param_1 = param_1 + lVar4 * 0x70;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x461c4000;
  *pcVar3 = '\0';
  return;
}


