/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535b20; name: FUN_01535b20
 */


bool FUN_01535b20(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if (2 < param_2) {
    return false;
  }
  if (param_2 == 2) {
    uVar6 = 0xd2;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return true;
      }
      lVar4 = -0x4b00;
      iVar2 = 0;
      do {
        lVar1 = param_1 + lVar4;
        if ((((*(long *)(lVar1 + 0x4b60) != 0) || (*(long *)(lVar1 + 0x4b68) != 0)) ||
            (*(long *)(lVar1 + 0x4b70) != 0)) || (*(long *)(lVar1 + 0x4b78) != 0)) {
          iVar2 = iVar2 + 1;
        }
        lVar4 = lVar4 + 0x30;
      } while (lVar4 != 0);
      return iVar2 == 400;
    }
    uVar6 = 0xd3;
  }
  uVar5 = 0;
  while( true ) {
    uVar5 = uVar5 + 1;
    iVar2 = FUN_014ae670(param_2,uVar5);
    if ((((iVar2 != 0x37d) &&
         (plVar3 = (long *)FUN_01534080(param_1,param_2,uVar5), plVar3 != (long *)0x0)) &&
        ((*plVar3 == 0 && ((plVar3[1] == 0 && (plVar3[2] == 0)))))) && (plVar3[3] == 0)) break;
    if (uVar6 <= uVar5) {
      return true;
    }
  }
  return false;
}


