/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e27c0; name: FUN_007e27c0
 */


long FUN_007e27c0(long *param_1,byte *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  byte *local_48;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    FUN_00801420(lVar6);
  }
  lVar7 = param_1[4];
  if (*(long *)(lVar7 + 0x58) != 0) {
    puVar1 = *(void **)(lVar7 + 0x50);
    while (puVar1 != (void *)0x0) {
      pvVar8 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar8;
    }
    uVar5 = *(ulong *)(lVar7 + 0x48);
    *(undefined8 *)(lVar7 + 0x50) = 0;
    if (uVar5 != 0) {
      uVar2 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          lVar3 = lVar4 * 8;
          lVar4 = lVar4 + 4;
          *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar3) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar3 + 0x18) = 0;
        } while (uVar5 - uVar2 != lVar4);
      }
      if (uVar2 != 0) {
        lVar4 = lVar4 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar4) = 0;
          lVar4 = lVar4 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(lVar7 + 0x58) = 0;
    lVar7 = param_1[4];
  }
  if (*(long *)(lVar7 + 0x30) != 0) {
    puVar1 = *(void **)(lVar7 + 0x28);
    while (puVar1 != (void *)0x0) {
      pvVar8 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar8;
    }
    uVar5 = *(ulong *)(lVar7 + 0x20);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    if (uVar5 != 0) {
      uVar2 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          lVar3 = lVar4 * 8;
          lVar4 = lVar4 + 4;
          *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar3) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar3 + 0x18) = 0;
        } while (uVar5 - uVar2 != lVar4);
      }
      if (uVar2 != 0) {
        lVar4 = lVar4 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x18) + lVar4) = 0;
          lVar4 = lVar4 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(lVar7 + 0x30) = 0;
    lVar7 = param_1[4];
  }
  local_48 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_48 = param_2 + 1;
  }
  lVar7 = FUN_007f7570(lVar7 + 0x118,&local_48);
  if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) &&
     ((param_1[3] == 0 || (lVar7 = FUN_007e27c0(param_1[3],param_2), lVar7 == 0)))) {
    uVar5 = FUN_007e2a40(param_1,param_2);
    if ((uVar5 & 1) != 0) {
      local_48 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        local_48 = *(byte **)(param_2 + 0x10);
      }
      lVar7 = FUN_007f7570(param_1[4] + 0x118,&local_48);
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) goto LAB_007e2a10;
    }
    lVar7 = 0;
  }
LAB_007e2a10:
  if (lVar6 != 0) {
    FUN_008014c0(lVar6);
  }
  return lVar7;
}


