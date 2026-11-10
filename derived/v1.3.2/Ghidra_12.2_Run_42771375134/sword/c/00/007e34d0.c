/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e34d0; name: FUN_007e34d0
 */


undefined1  [16] FUN_007e34d0(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    FUN_00801420(lVar7);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar1 = *(void **)(param_1 + 0x50);
    while (puVar1 != (void *)0x0) {
      pvVar8 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar8;
    }
    uVar6 = *(ulong *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (uVar6 != 0) {
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar4 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar4) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar4 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar4 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar4 + 0x18) = 0;
        } while (uVar6 - uVar3 != lVar5);
      }
      if (uVar3 != 0) {
        lVar5 = lVar5 << 3;
        lVar4 = -uVar3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = *(void **)(param_1 + 0x28);
    while (puVar1 != (void *)0x0) {
      pvVar8 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar8;
    }
    uVar6 = *(ulong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (uVar6 != 0) {
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar4 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4 + 0x18) = 0;
        } while (uVar6 - uVar3 != lVar5);
      }
      if (uVar3 != 0) {
        lVar5 = lVar5 << 3;
        lVar4 = -uVar3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  auVar9 = FUN_007e2eb0(param_1,param_3);
  uVar3 = auVar9._8_8_;
  uVar6 = auVar9._0_8_ >> 0x20;
  if (auVar9._0_4_ == 0) {
    lVar5 = param_2[3];
    if (lVar5 != 0) {
      auVar9 = FUN_007e34d0(*(undefined8 *)(lVar5 + 0x20),lVar5,param_3);
      uVar3 = auVar9._8_8_;
      uVar6 = auVar9._0_8_ >> 0x20;
      if (auVar9._0_4_ != 0) goto joined_r0x007e3724;
    }
    uVar2 = FUN_007e3000(param_2,param_3);
    if ((uVar2 & 1) == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar3;
      auVar9 = auVar9 << 0x40;
    }
    else {
      auVar9 = FUN_007e2eb0(param_1,param_3);
      uVar6 = auVar9._0_8_ >> 0x20;
    }
  }
joined_r0x007e3724:
  if (lVar7 != 0) {
    FUN_008014c0(lVar7);
  }
  auVar10._8_8_ = auVar9._8_8_;
  auVar10._0_8_ = auVar9._0_8_ & 0xffffffff | uVar6 << 0x20;
  return auVar10;
}


