/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fc860; name: FUN_003fc860
 */


void FUN_003fc860(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint local_68 [10];
  
  if (*(int *)(param_1 + 0x18) < 0) {
    FUN_003c6bd0(param_1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
    (**(code **)(**(long **)(*(long *)(lVar2 + 0x720) + 0x6e8) + 0xa8))(local_68);
    FUN_003cde40(*(undefined8 *)(lVar2 + 0x1048),param_1,4,local_68,
                 *(uint *)(lVar2 + 0x110c) >> 4 & 1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  (**(code **)(**(long **)(lVar4 + 0x760) + 0x28))
            (*(long **)(lVar4 + 0x760),*(undefined4 *)(param_1 + 0x48));
  lVar2 = (ulong)(*(uint *)(param_1 + 0x18) >> 5 & 0xffffff) * 4;
  *(uint *)(*(long *)(lVar4 + 0x11f8) + lVar2) =
       *(uint *)(*(long *)(lVar4 + 0x11f8) + lVar2) &
       (1 << (ulong)(*(uint *)(param_1 + 0x18) & 0x1f) ^ 0xffffffffU);
  if (*(int *)(param_1 + 0x4c) != -1) {
    FUN_003fe730(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x820),param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x1128);
  local_68[0] = uVar3 & 0x1fffffff;
  FUN_00190b50(lVar5 + 0x20,local_68[0] + 1);
  lVar2 = (ulong)(uVar3 >> 5 & 0xffffff) * 4;
  *(uint *)(*(long *)(lVar5 + 0x20) + lVar2) =
       *(uint *)(*(long *)(lVar5 + 0x20) + lVar2) | 1 << (ulong)(uVar3 & 0x1f);
  if (*(uint *)(lVar5 + 0x38) < (*(uint *)(lVar5 + 0x3c) & 0x7fffffff)) {
    *(uint *)(*(long *)(lVar5 + 0x30) + (ulong)*(uint *)(lVar5 + 0x38) * 4) = local_68[0];
    *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
  }
  else {
    FUN_001b4230(lVar5 + 0x30,local_68);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  lVar5 = *(long *)(lVar2 + 0x1128);
  if (*(int *)(lVar5 + 0x18) == 0) {
    uVar3 = *(uint *)(lVar5 + 8);
    *(uint *)(lVar5 + 8) = uVar3 + 1;
  }
  else {
    uVar1 = *(int *)(lVar5 + 0x18) - 1;
    uVar3 = *(uint *)(*(long *)(lVar5 + 0x10) + (ulong)uVar1 * 4);
    *(uint *)(lVar5 + 0x18) = uVar1;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xe0000000 | uVar3 & 0x1fffffff;
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
  FUN_003fbea0(param_1);
  (**(code **)(**(long **)(lVar4 + 0x760) + 0x20))
            (*(long **)(lVar4 + 0x760),param_1 + 0x20,*(undefined4 *)(param_1 + 0x48));
  return;
}


