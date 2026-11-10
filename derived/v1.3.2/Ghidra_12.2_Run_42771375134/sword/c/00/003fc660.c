/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fc660; name: FUN_003fc660
 */


void FUN_003fc660(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint local_24;
  
  *param_1 = (long)(PTR_DAT_027129a8 + 0x10);
  lVar3 = *(long *)(param_1[2] + 0x48);
  lVar2 = (ulong)(*(uint *)(param_1 + 3) >> 5 & 0xffffff) * 4;
  *(uint *)(*(long *)(lVar3 + 0x11f8) + lVar2) =
       *(uint *)(*(long *)(lVar3 + 0x11f8) + lVar2) &
       (1 << (ulong)(*(uint *)(param_1 + 3) & 0x1f) ^ 0xffffffffU);
  if (*(int *)((long)param_1 + 0x4c) != -1) {
                    /* try { // try from 003fc6c4 to 003fc73f has its CatchHandler @ 003fc758 */
    FUN_003fe730(*(undefined8 *)(lVar3 + 0x820),param_1);
  }
  lVar3 = *(long *)(lVar3 + 0x1118);
  uVar1 = *(uint *)(param_1 + 9);
  local_24 = uVar1;
  FUN_00190b50(lVar3 + 0x20,uVar1 + 1);
  lVar2 = (ulong)(uVar1 >> 5) * 4;
  *(uint *)(*(long *)(lVar3 + 0x20) + lVar2) =
       *(uint *)(*(long *)(lVar3 + 0x20) + lVar2) | 1 << (ulong)(uVar1 & 0x1f);
  if (*(uint *)(lVar3 + 0x38) < (*(uint *)(lVar3 + 0x3c) & 0x7fffffff)) {
    *(uint *)(*(long *)(lVar3 + 0x30) + (ulong)*(uint *)(lVar3 + 0x38) * 4) = local_24;
    *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
  }
  else {
    FUN_001b4230(lVar3 + 0x30,&local_24);
  }
  FUN_003c6930(param_1);
  return;
}


