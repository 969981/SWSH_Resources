/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f36ef0; name: FUN_00f36ef0
 */


long FUN_00f36ef0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x590) == '\0') {
    plVar2 = param_1;
  }
  else {
    lVar1 = param_1[1];
    plVar2 = param_1 + 1;
    if (*(char *)(lVar1 + 0x590) != '\0') {
      lVar1 = param_1[2];
      plVar2 = param_1 + 2;
      if (*(char *)(lVar1 + 0x590) != '\0') {
        lVar1 = param_1[3];
        plVar2 = param_1 + 3;
        if (*(char *)(lVar1 + 0x590) != '\0') {
          lVar1 = param_1[4];
          plVar2 = param_1 + 4;
          if (*(char *)(lVar1 + 0x590) != '\0') {
            lVar1 = param_1[5];
            plVar2 = param_1 + 5;
            if (*(char *)(lVar1 + 0x590) != '\0') {
              lVar1 = param_1[6];
              plVar2 = param_1 + 6;
              if (*(char *)(lVar1 + 0x590) != '\0') {
                lVar1 = param_1[7];
                plVar2 = param_1 + 7;
                if (*(char *)(lVar1 + 0x590) != '\0') {
                  lVar1 = param_1[8];
                  plVar2 = param_1 + 8;
                  if (*(char *)(lVar1 + 0x590) != '\0') {
                    lVar1 = param_1[9];
                    plVar2 = param_1 + 9;
                    if (*(char *)(lVar1 + 0x590) != '\0') {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  plVar3 = param_1 + 10;
  if ((((((*plVar3 == 0) || (plVar3 = param_1 + 0xb, *plVar3 == 0)) ||
        (plVar3 = param_1 + 0xc, *plVar3 == 0)) ||
       ((plVar3 = param_1 + 0xd, *plVar3 == 0 || (plVar3 = param_1 + 0xe, *plVar3 == 0)))) ||
      ((plVar3 = param_1 + 0xf, *plVar3 == 0 ||
       ((plVar3 = param_1 + 0x10, *plVar3 == 0 || (plVar3 = param_1 + 0x11, *plVar3 == 0)))))) ||
     ((plVar3 = param_1 + 0x12, *plVar3 == 0 || (plVar3 = param_1 + 0x13, *plVar3 == 0)))) {
    lVar1 = *plVar2;
    *plVar3 = lVar1;
    *(undefined1 *)(lVar1 + 0x590) = 1;
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
    lVar1 = *plVar2;
  }
  return lVar1;
}


