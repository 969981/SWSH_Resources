/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5550; name: FUN_005c5550
 */


void FUN_005c5550(undefined1 *param_1,long param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if (param_3 != (char *)0x0) {
      cVar1 = *param_3;
      if (cVar1 == '\0') {
        lVar3 = 0;
      }
      else if (param_2 < 1) {
        lVar2 = 0;
        do {
          param_1[lVar2] = cVar1;
          lVar3 = lVar2 + 1;
          cVar1 = param_3[lVar2 + 1];
          lVar2 = lVar3;
        } while (cVar1 != '\0');
      }
      else {
        lVar2 = 0;
        do {
          if (param_2 <= lVar2) {
            param_1 = param_1 + lVar2 + -1;
            goto LAB_005c55c4;
          }
          param_1[lVar2] = cVar1;
          lVar3 = lVar2 + 1;
          cVar1 = param_3[lVar2 + 1];
          lVar2 = lVar3;
        } while (cVar1 != '\0');
      }
      param_1 = param_1 + lVar3;
    }
LAB_005c55c4:
    *param_1 = 0;
  }
  return;
}


