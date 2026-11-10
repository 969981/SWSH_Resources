/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001743d0; name: FUN_001743d0
 */


void FUN_001743d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar6 = **(long **)(param_1 + 0x30);
  lVar3 = *(long *)(lVar6 + 0x2dc0);
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar4 = lVar3;
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    lVar8 = *(long *)(param_1 + 0xb0);
    uVar5 = 0;
    do {
      for (uVar1 = *(uint *)(*(long *)(lVar8 + 0x108) + (ulong)*(uint *)(lVar3 + uVar5 * 4) * 0x2c +
                            0x18); uVar1 != 0xffffffff;
          uVar1 = *(uint *)(lVar7 + (ulong)uVar1 * 0x10 + 8)) {
        lVar7 = *(long *)(lVar8 + 0xe8);
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0x90) + (ulong)uVar1 * 8);
        FUN_001712e0(*(undefined8 *)(param_1 + 0x28),lVar4,uVar1,*(long *)(param_1 + 0xb0),
                     *(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xa8));
        *(undefined8 *)(lVar4 + 0x20) = uVar9;
        *(undefined2 *)(lVar4 + 0x1e) = 2;
        lVar4 = lVar4 + 0x30;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
    lVar3 = *(long *)(lVar6 + 0x2dc0);
  }
  FUN_00175780(lVar3,(int)((ulong)(lVar4 - lVar3) >> 4) * -0x55555555,auStack_78,auStack_70,0x20);
  *(undefined4 *)(lVar6 + 0x2d58) = 0;
  lVar3 = *(long *)(param_1 + 0x30);
  uVar2 = *(uint *)(lVar3 + 0x10);
  if ((*(uint *)(lVar6 + 0x2d5c) & 0x7fffffff) < uVar2) {
    FUN_00175dc0(lVar6 + 0x2d50);
    lVar3 = *(long *)(param_1 + 0x30);
    uVar2 = *(uint *)(lVar3 + 0x10);
  }
  *(uint *)(lVar6 + 0x2d58) = uVar2;
  *(undefined4 *)(lVar6 + 0x2d68) = 0;
  if ((*(uint *)(lVar6 + 0x2d6c) & 0x7fffffff) < uVar2) {
    FUN_00175dc0(lVar6 + 0x2d60);
    lVar3 = *(long *)(param_1 + 0x30);
    uVar2 = *(uint *)(lVar3 + 0x10);
  }
  *(uint *)(lVar6 + 0x2d68) = uVar2;
  *(undefined4 *)(lVar6 + 0x2d48) = 0;
  if (uVar2 == 0) {
    *(int *)(lVar6 + 0x2cf8) = (int)((ulong)(lVar4 - *(long *)(lVar6 + 0x2cf0)) >> 4) * -0x55555555;
    *(long *)(lVar6 + 0x2dc0) = lVar4;
    return;
  }
  *(undefined4 *)(lVar6 + 0x2d78) = 0;
  uVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x2a8) + *(int *)(lVar3 + 8) + 1;
  if ((*(uint *)(lVar6 + 0x2d7c) & 0x7fffffff) < uVar2) {
    FUN_001ed4d0(lVar6 + 0x2d70,uVar2);
  }
  *(uint *)(lVar6 + 0x2d78) = uVar2;
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(lVar6 + 0x2d70),0,(ulong)(uVar2 * 4));
}


