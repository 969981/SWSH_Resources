/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b1dc0; name: FUN_010b1dc0
 */


void FUN_010b1dc0(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(uint *)((long)param_1 + 0x119e8);
  switch(uVar3) {
  case 0:
    lVar4 = 0x32;
    __src = param_1;
    do {
      if ((*(char *)((long)__src + 0x50) != '\0') && (*(int *)((long)__src + 4) != -1)) {
        memcpy((void *)((long)param_1 + uVar3 * 0xa0 + 16000),__src,0x9a);
        uVar3 = (ulong)((int)uVar3 + 1);
      }
      lVar4 = lVar4 + -1;
      __src = (void *)((long)__src + 0xa0);
    } while (lVar4 != 0);
    *(int *)((long)param_1 + 0x119e4) = (int)uVar3;
    if ((int)uVar3 == 0) {
      return;
    }
    *(uint *)((long)param_1 + 0x119e8) = 0;
    return;
  case 1:
    uVar1 = 5;
    uVar2 = 1;
    break;
  case 2:
    uVar1 = 2;
    uVar2 = 2;
    break;
  case 3:
    uVar1 = 3;
    uVar2 = 3;
    break;
  case 4:
    uVar1 = 4;
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 5;
    uVar1 = 1;
    break;
  default:
    return;
  }
  FUN_010b3410(param_1,uVar1,uVar2);
  return;
}


