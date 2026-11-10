/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015359e0; name: FUN_015359e0
 */


undefined8 FUN_015359e0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = FUN_017294a0();
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
    iVar1 = FUN_014ae670(0,uVar4);
    if (((iVar1 != 0x37d) && (lVar3 = FUN_01534080(param_1,0,uVar4), lVar3 != 0)) &&
       ((*(byte *)(lVar3 + 0x20) & 1) == 0)) {
      return 0;
    }
  } while (uVar4 < 400);
  if ((uVar2 & 0xff) != 0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar1 = FUN_014ae670(1,uVar4);
      if (((iVar1 != 0x37d) && (lVar3 = FUN_01534080(param_1,1,uVar4), lVar3 != 0)) &&
         ((*(byte *)(lVar3 + 0x20) & 1) == 0)) {
        return 0;
      }
    } while (uVar4 < 0xd3);
  }
  if ((uVar2 & 0xff00) != 0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar1 = FUN_014ae670(2,uVar4);
      if (((iVar1 != 0x37d) && (lVar3 = FUN_01534080(param_1,2,uVar4), lVar3 != 0)) &&
         ((*(byte *)(lVar3 + 0x20) & 1) == 0)) {
        return 0;
      }
    } while (uVar4 < 0xd2);
  }
  return 1;
}


