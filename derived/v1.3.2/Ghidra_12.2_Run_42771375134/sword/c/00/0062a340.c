/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062a340; name: FUN_0062a340
 */


void FUN_0062a340(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x478);
  if (lVar3 == 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = **(uint **)(lVar3 + 0x18);
  FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 8));
  *(undefined8 *)(lVar3 + 8) = 0;
  FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x10));
  *(undefined8 *)(lVar3 + 0x10) = 0;
  FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x28));
  *(undefined8 *)(lVar3 + 0x28) = 0;
  FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x18));
  lVar2 = *(long *)(lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  if (lVar2 != 0) {
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        FUN_006028c0(uVar4,*(undefined8 *)(lVar2 + lVar5 + 8));
        lVar2 = *(long *)(lVar3 + 0x38) + lVar5;
        lVar5 = lVar5 + 0x10;
        *(undefined8 *)(lVar2 + 8) = 0;
        lVar2 = *(long *)(lVar3 + 0x38);
      } while ((ulong)uVar1 * 0x10 != lVar5);
    }
    FUN_006028c0(uVar4);
    *(undefined8 *)(lVar3 + 0x38) = 0;
  }
  if (*(long *)(lVar3 + 0x48) != 0) {
    FUN_0062c4b0(*(undefined8 *)(param_1 + 0xb8));
    FUN_006028c0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x30));
    *(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x30) = 0;
    FUN_006028c0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x28));
    *(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x28) = 0;
    FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x48));
    *(undefined8 *)(lVar3 + 0x48) = 0;
  }
  if (*(long *)(lVar3 + 0x58) != 0) {
    FUN_0062c4b0(*(undefined8 *)(param_1 + 0xb8));
    FUN_006028c0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0x58) + 0x30));
    *(undefined8 *)(*(long *)(lVar3 + 0x58) + 0x30) = 0;
    FUN_006028c0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0x58) + 0x28));
    *(undefined8 *)(*(long *)(lVar3 + 0x58) + 0x28) = 0;
    FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x58));
    *(undefined8 *)(lVar3 + 0x58) = 0;
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    FUN_0062c4b0(*(undefined8 *)(param_1 + 0xb8),*(long *)(lVar3 + 0x60) + 8);
    FUN_006028c0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0x60) + 0x28));
    *(undefined8 *)(*(long *)(lVar3 + 0x60) + 0x28) = 0;
    FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x60));
    *(undefined8 *)(lVar3 + 0x60) = 0;
  }
  FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x70));
  *(undefined8 *)(lVar3 + 0x70) = 0;
  FUN_006028c0(uVar4,*(undefined8 *)(lVar3 + 0x80));
  *(undefined8 *)(lVar3 + 0x80) = 0;
  FUN_006028c0(uVar4,lVar3);
  return;
}


