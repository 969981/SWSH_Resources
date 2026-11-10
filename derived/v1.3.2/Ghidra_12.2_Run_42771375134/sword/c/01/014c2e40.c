/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c2e40; name: FUN_014c2e40
 */


void FUN_014c2e40(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  if (*(long *)(param_1 + 0x260) == 0) {
    uVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x268);
  }
  else {
    uVar1 = FUN_014c4e10();
    lVar2 = *(long *)(param_1 + 0x268);
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_014c4e10();
    uVar1 = uVar1 | (uint)uVar3;
  }
  if (((uVar1 & 1) != 0) || (*(char *)(param_1 + 0xc20) != '\0')) {
    uVar3 = FUN_014c2f20(param_1);
    *(undefined1 *)(param_1 + 0xc20) = 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xaf0) + 0x48);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 4;
    puVar5 = (undefined4 *)(*(long *)(*(long *)(param_1 + 0xaf0) + 0x40) + 8);
    do {
      lVar4 = *(long *)(puVar5 + -2);
      if (lVar4 != 0) {
        uVar3 = FUN_014c28d0(uVar3,*(undefined8 *)(lVar4 + 0xd8),lVar4,
                             *(undefined2 *)(lVar4 + 0x112),*puVar5,puVar5[1],0xffffffff);
      }
      lVar2 = lVar2 + -0x10;
      puVar5 = puVar5 + 4;
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN_014c4dc0();
  }
  if (*(long *)(param_1 + 0x268) == 0) {
    return;
  }
  FUN_014c4dc0();
  return;
}


