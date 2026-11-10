/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144cfa0; name: FUN_0144cfa0
 */


int FUN_0144cfa0(long param_1,ulong param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar1 = FUN_01457550();
  if (*(int *)(param_1 + 0x3dc) < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    lVar6 = 0x50;
    do {
      pcVar2 = (char *)FUN_0152d900(lVar4,*(undefined4 *)(param_1 + lVar6 * 4));
      if ((*pcVar2 == '\x02') &&
         ((long)((ulong)(byte)pcVar2[0x18] * 0xe10) <= lVar1 - *(long *)(pcVar2 + 8))) {
        FUN_0152d930(lVar4,*(undefined4 *)(param_1 + lVar6 * 4),3);
        iVar5 = iVar5 + 1;
      }
      lVar3 = lVar6 + -0x4f;
      lVar6 = lVar6 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x3dc));
    if ((0 < iVar5) && ((param_2 & 1) != 0)) {
      FUN_0144bb70(param_1,1);
    }
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return iVar5;
}


