/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535940; name: FUN_01535940
 */


undefined8 FUN_01535940(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  if (param_2 < 3) {
    uVar1 = *(uint *)(&DAT_02172f84 + (long)(int)param_2 * 4);
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar2 = FUN_014ae670(param_2,uVar4);
      if (((iVar2 != 0x37d) && (lVar3 = FUN_01534080(param_1,param_2,uVar4), lVar3 != 0)) &&
         ((*(byte *)(lVar3 + 0x20) & 1) == 0)) {
        return 0;
      }
    } while (uVar4 < uVar1);
  }
  return 1;
}


