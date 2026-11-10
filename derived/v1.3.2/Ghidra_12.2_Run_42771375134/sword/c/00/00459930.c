/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00459930; name: FUN_00459930
 */


undefined4 FUN_00459930(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar3) {
    lVar2 = *(long *)(param_1 + 0x18);
    iVar4 = 0;
    do {
      while( true ) {
        iVar1 = iVar3 - iVar4;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar4 + (iVar1 >> 1);
        lVar5 = (long)iVar1;
        uVar6 = *(ulong *)(lVar2 + (long)iVar1 * 0x18);
        if ((param_2 < uVar6) ||
           ((param_2 == uVar6 && (param_3 < *(uint *)(lVar2 + lVar5 * 0x18 + 8))))) break;
        if ((param_2 <= uVar6) &&
           ((param_2 != uVar6 || (param_3 <= *(uint *)(lVar2 + lVar5 * 0x18 + 8))))) {
          if (lVar2 + lVar5 * 0x18 == 0) {
            return 0x3f800000;
          }
          return *(undefined4 *)(lVar2 + lVar5 * 0x18 + 0x10);
        }
        iVar4 = iVar1 + 1;
        if (iVar3 < iVar4) {
          return 0x3f800000;
        }
      }
      iVar3 = iVar1 + -1;
    } while (iVar4 <= iVar3);
  }
  return 0x3f800000;
}


