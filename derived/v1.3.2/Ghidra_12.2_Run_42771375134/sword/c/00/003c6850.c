/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6850; name: FUN_003c6850
 */


void FUN_003c6850(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02712788 + 0x10);
  param_1[1] = 0;
  param_1[2] = param_2;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0x1fffffff | (param_3 & 3) << 0x1d;
  lVar2 = *(long *)(param_2 + 0x48);
  lVar4 = *(long *)(lVar2 + 0x1128);
  if (*(int *)(lVar4 + 0x18) == 0) {
    uVar3 = *(uint *)(lVar4 + 8);
    *(uint *)(lVar4 + 8) = uVar3 + 1;
  }
  else {
    uVar1 = *(int *)(lVar4 + 0x18) - 1;
    uVar3 = *(uint *)(*(long *)(lVar4 + 0x10) + (ulong)uVar1 * 4);
    *(uint *)(lVar4 + 0x18) = uVar1;
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xe0000000 | uVar3 & 0x1fffffff;
  lVar2 = *(long *)(lVar2 + 0x808);
  uVar3 = (uVar3 & 0x1fffffff) + 1;
  uVar1 = *(uint *)(lVar2 + 0x14) & 0x7fffffff;
  if (uVar1 <= uVar3) {
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
    if (uVar1 < uVar3) {
      FUN_003c6d10(lVar2,uVar3);
    }
    *(uint *)(lVar2 + 0x10) = uVar3;
  }
  FUN_003ba620(param_2,param_1);
  return;
}


