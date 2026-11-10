/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f680; name: FUN_0075f680
 */


void FUN_0075f680(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  void *__s;
  uint uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  cVar4 = FUN_00761750(param_3);
  iVar3 = (int)(char)(cVar4 + 1);
  uVar2 = iVar3 - 3;
  lVar5 = (long)iVar3 + -3;
  if ((uint)lVar5 < 5) {
    lVar5 = *(long *)(&DAT_0213f520 + lVar5 * 8);
  }
  else {
    lVar5 = -0x81;
  }
  lVar1 = lVar5 + (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5);
  if (lVar1 != 0) {
    lVar6 = (long)(int)uVar2 * 0x400 + lVar5 * 0x20;
    lVar5 = param_2;
    do {
      FUN_0075f1a0(lVar5);
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  *param_1 = param_2;
  __s = (void *)(param_2 + lVar1 * 0x20);
  param_1[2] = (long)__s;
                    /* WARNING: Subroutine does not return */
  memset(__s,0,(long)(cVar4 + 1) << 2);
}


