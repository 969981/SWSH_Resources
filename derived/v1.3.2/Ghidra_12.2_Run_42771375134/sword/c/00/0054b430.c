/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054b430; name: FUN_0054b430
 */


ulong FUN_0054b430(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_50 [16];
  
  if (*(char *)(param_1 + 0x2f0) == '\0') {
    FUN_00550fe0(auStack_50,param_2);
    lVar3 = *(long *)(param_1 + 0x2f8);
    if (*(long *)(param_1 + 0x300) != lVar3) {
      uVar4 = 0;
      do {
        iVar2 = FUN_00552890(*(long *)(lVar3 + uVar4 * 8) + 8,param_2);
        if (iVar2 != 0) {
          FUN_00551380(auStack_50);
          return uVar4;
        }
        lVar3 = *(long *)(param_1 + 0x2f8);
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar4 < (ulong)(*(long *)(param_1 + 0x300) - lVar3 >> 3));
    }
    FUN_00551380(auStack_50);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x2f8);
    if (lVar3 != *(long *)(param_1 + 0x300)) {
      iVar2 = (int)((ulong)(*(long *)(param_1 + 0x300) - lVar3) >> 3);
      iVar5 = iVar2 + -1;
      if (-1 < iVar5) {
        iVar2 = iVar5;
      }
      uVar4 = (ulong)(uint)(iVar2 >> 1);
      iVar2 = FUN_00552840(*(long *)(lVar3 + (long)(iVar2 >> 1) * 8) + 8,param_2,0xffffffff);
      if (iVar2 == 0) {
        return uVar4;
      }
      iVar6 = 0;
      do {
        if (iVar5 <= iVar6) {
          return 0xffffffff;
        }
        iVar1 = (int)uVar4 + -1;
        if (iVar2 < 1) {
          iVar6 = (int)uVar4 + 1;
          iVar1 = iVar5;
        }
        iVar5 = iVar1;
        iVar2 = iVar5 + iVar6;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        uVar4 = (ulong)(uint)(iVar2 >> 1);
        iVar2 = FUN_00552840(*(long *)(*(long *)(param_1 + 0x2f8) + (long)(iVar2 >> 1) * 8) + 8,
                             param_2,0xffffffff);
      } while (iVar2 != 0);
      return uVar4;
    }
  }
  return 0xffffffff;
}


