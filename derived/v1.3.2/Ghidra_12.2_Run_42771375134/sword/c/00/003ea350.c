/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ea350; name: FUN_003ea350
 */


void FUN_003ea350(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x1128);
  if (*(int *)(lVar3 + 0x18) == 0) {
    iVar4 = *(int *)(lVar3 + 8);
    uVar2 = iVar4 + 1;
    *(uint *)(lVar3 + 8) = uVar2;
  }
  else {
    uVar2 = *(int *)(lVar3 + 0x18) - 1;
    iVar4 = *(int *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 4);
    *(uint *)(lVar3 + 0x18) = uVar2;
    uVar2 = iVar4 + 1;
  }
  lVar3 = *(long *)(param_1 + 0x808);
  uVar1 = *(uint *)(lVar3 + 0x14) & 0x7fffffff;
  if (uVar1 <= uVar2) {
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
    if (uVar1 < uVar2) {
      FUN_003c6d10(lVar3,uVar2);
    }
    *(uint *)(lVar3 + 0x10) = uVar2;
  }
  FUN_00131550(*(undefined8 *)(param_1 + 0x728),iVar4,0xffffffff,param_2,param_3 & 1);
  return;
}


