/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6930; name: FUN_003c6930
 */


void FUN_003c6930(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint local_34;
  
  uVar2 = *(uint *)(param_1 + 3);
  *param_1 = (long)(PTR_DAT_02712788 + 0x10);
  lVar4 = *(long *)(*(long *)(param_1[2] + 0x48) + 0x1128);
  uVar1 = uVar2 & 0x1fffffff;
  local_34 = uVar1;
                    /* try { // try from 003c6978 to 003c69e3 has its CatchHandler @ 003c69f8 */
  FUN_00190b50(lVar4 + 0x20,uVar1 + 1);
  lVar3 = (ulong)(uVar1 >> 5) * 4;
  *(uint *)(*(long *)(lVar4 + 0x20) + lVar3) =
       *(uint *)(*(long *)(lVar4 + 0x20) + lVar3) | 1 << (ulong)(uVar2 & 0x1f);
  if (*(uint *)(lVar4 + 0x38) < (*(uint *)(lVar4 + 0x3c) & 0x7fffffff)) {
    *(uint *)(*(long *)(lVar4 + 0x30) + (ulong)*(uint *)(lVar4 + 0x38) * 4) = local_34;
    *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
  }
  else {
    FUN_001b4230(lVar4 + 0x30,&local_34);
  }
  FUN_003ba640(param_1[2],param_1);
  return;
}


