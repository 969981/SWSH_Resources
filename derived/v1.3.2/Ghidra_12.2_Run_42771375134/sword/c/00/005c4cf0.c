/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4cf0; name: FUN_005c4cf0
 */


undefined1 * FUN_005c4cf0(int *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = param_2;
  if (param_1 != (int *)0x0) {
    lVar3 = 0;
    do {
      lVar5 = lVar3;
      lVar3 = lVar5 + 1;
    } while (param_1[lVar5] != 0);
    lVar3 = param_3 + -1;
    if (lVar3 <= lVar5) {
      lVar5 = lVar3;
    }
    if (lVar5 != 0) {
      if (lVar3 == 0) {
        return param_2;
      }
      iVar1 = *param_1;
      if (iVar1 == 0) {
        lVar5 = 0;
      }
      else if (param_3 < 2) {
        lVar3 = 0;
        do {
          param_2[lVar3] = (char)iVar1;
          lVar5 = lVar3 + 1;
          iVar1 = param_1[lVar3 + 1];
          lVar3 = lVar5;
        } while (iVar1 != 0);
      }
      else {
        lVar4 = 0;
        do {
          if (lVar3 <= lVar4) {
            puVar2 = param_2 + lVar4 + -1;
            goto LAB_005c4d84;
          }
          param_2[lVar4] = (char)iVar1;
          lVar5 = lVar4 + 1;
          iVar1 = param_1[lVar4 + 1];
          lVar4 = lVar5;
        } while (iVar1 != 0);
      }
      puVar2 = param_2 + lVar5;
    }
  }
LAB_005c4d84:
  *puVar2 = 0;
  return param_2;
}


