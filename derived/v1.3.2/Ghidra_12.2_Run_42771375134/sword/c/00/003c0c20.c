/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c0c20; name: FUN_003c0c20
 */


undefined8 FUN_003c0c20(long param_1,long param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x34);
  uVar3 = *(uint *)(param_2 + 0x34);
  lVar1 = param_1;
  uVar4 = uVar3;
  if (uVar2 <= uVar3) {
    lVar1 = param_2;
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    if (uVar2 <= uVar3) {
      param_2 = param_1;
    }
    uVar2 = ~uVar2;
    if (uVar2 < ~uVar3) {
      uVar2 = ~uVar3;
    }
    iVar6 = uVar2 + 1;
    plVar5 = *(long **)(param_2 + 0x28);
    do {
      lVar7 = *plVar5;
      if ((*(char *)(lVar7 + 0x24) == '\x04') &&
         ((*(long *)(lVar7 + 8) == lVar1 || (*(long *)(lVar7 + 0x10) == lVar1)))) {
        *param_3 = ((byte)(**(ushort **)(*(long *)(lVar7 + 0x28) + 0x68) >> 3) ^ 0xff) & 1;
        return 1;
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar6 != 0);
  }
  *param_3 = 0;
  return 0;
}


