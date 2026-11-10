/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006752f0; name: FUN_006752f0
 */


void FUN_006752f0(undefined8 *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = FUN_005bc740();
  if (lVar3 == 0) {
    uVar4 = FUN_005bc6f0();
    *param_1 = uVar4;
  }
  else {
    uVar4 = FUN_005bc740();
    *param_1 = uVar4;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    __n = *(size_t *)(param_3 + 0x10);
  }
  else {
    lVar3 = 0;
    param_1[1] = param_2;
    do {
      lVar2 = lVar3 + 1;
      lVar3 = lVar3 + 1;
    } while (param_2[lVar2] != '\0');
    param_1[2] = lVar3;
    param_1[4] = 0;
    param_1[5] = param_1[5] | 1;
    __n = *(size_t *)(param_3 + 0x10);
  }
  if (__n != 0) {
    lVar3 = param_1[2];
    uVar6 = lVar3 + __n;
    if ((ulong)param_1[4] <= uVar6) {
      uVar6 = uVar6 + 1;
      uVar5 = param_1[4] * 2;
      uVar1 = uVar6;
      if (uVar6 <= uVar5) {
        uVar1 = uVar5;
      }
      if (param_1[3] != 0) {
        uVar1 = param_1[3] + uVar6;
      }
      FUN_005c5e00(param_1,uVar1,1);
      lVar3 = param_1[2];
      uVar6 = lVar3 + __n;
    }
    memcpy((void *)(param_1[1] + lVar3),*(void **)(param_3 + 8),__n);
    param_1[2] = param_1[2] + __n;
    *(undefined1 *)(param_1[1] + uVar6) = 0;
  }
  return;
}


