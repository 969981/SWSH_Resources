/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a730; name: FUN_0039a730
 */


void FUN_0039a730(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_24;
  
  *(undefined1 *)(param_1 + 0x90) = 1;
  uVar6 = param_2 & 1;
  local_24 = (undefined4)(param_2 >> 1);
  lVar3 = *(long *)(param_1 + uVar6 * 0x30 + 8);
  uVar5 = param_2 >> 6 & 0x7ffffff;
  uVar1 = *(uint *)(lVar3 + uVar5 * 4);
  uVar2 = 1 << (param_2 >> 1 & 0x1f);
  if ((uVar1 & uVar2) != 0) {
    return;
  }
  *(uint *)(lVar3 + uVar5 * 4) = uVar1 | uVar2;
  lVar3 = param_1 + uVar6 * 0x30;
  puVar4 = (uint *)(lVar3 + 0x20);
  if (*puVar4 < (*(uint *)(lVar3 + 0x24) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar3 + 0x18) + (ulong)*puVar4 * 4) = local_24;
    *puVar4 = *puVar4 + 1;
  }
  else {
    FUN_001b4230((long *)(lVar3 + 0x18),&local_24);
  }
  param_1 = param_1 + uVar6 * 0x30;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}


