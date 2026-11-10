/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00735620; name: FUN_00735620
 */


undefined8 FUN_00735620(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  if ((lVar3 != lVar4) && (lVar1 = FUN_007356d0(lVar3), *(int *)(lVar1 + 0x80) != param_2)) {
    do {
      lVar3 = lVar3 + 8;
      if (lVar4 == lVar3) {
        if (param_1[1] == lVar4) {
          return 0;
        }
        goto LAB_0073568c;
      }
      lVar1 = FUN_007356d0(lVar3);
    } while (*(int *)(lVar1 + 0x80) != param_2);
  }
  lVar4 = lVar3;
  if (param_1[1] == lVar3) {
    return 0;
  }
LAB_0073568c:
  uVar2 = FUN_007356d0(lVar4);
  return uVar2;
}


