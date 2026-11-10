/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cb4d0; name: FUN_005cb4d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005cb4d0(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_28 [8];
  
  lVar4 = *(long *)(param_1 + 0x78);
  lVar7 = *(long *)(param_1 + 0x50);
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    uVar8 = *(ulong *)(lVar7 + 0x90);
    lVar2 = uVar8 + lVar4;
    if ((int)uVar8 < 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      uVar8 = uVar8 & 0xffffffff;
      do {
        lVar9 = *(long *)(*(long *)(lVar7 + 0xa8) + (uVar8 - 1) * 8);
        if (*(long *)(param_1 + 0x70) == 0) {
          *(long *)(param_1 + 0x68) = lVar9;
          *(long *)(param_1 + 0x70) = lVar9;
        }
        else {
          *(long *)(*(long *)(param_1 + 0x68) + 8) = lVar9;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(param_1 + 0x68);
          lVar4 = *(long *)(param_1 + 0x78);
          *(long *)(param_1 + 0x68) = lVar9;
        }
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
        *(long *)(param_1 + 0x78) = lVar4;
        bVar1 = 1 < (long)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
    lVar4 = lVar2;
  }
  uVar8 = (ulong)(int)lVar4;
  *(long *)(param_1 + 0x120) = lVar6;
  if (*(ulong *)(param_1 + 0x90) == uVar8) {
    uVar5 = *(ulong *)(param_1 + 0xe0);
  }
  else {
    if ((uVar8 < *(ulong *)(param_1 + 0x98)) ||
       (uVar5 = FUN_005cb970(param_1 + 0x80,uVar8,1), (uVar5 & 1) != 0)) {
      *(ulong *)(param_1 + 0x90) = uVar8;
      if (lVar4 << 0x20 != 0) {
        *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
        *(ulong *)(param_1 + 0xb8) = *(long *)(param_1 + 0xa8) + uVar8 * 8;
        uVar5 = *(ulong *)(param_1 + 0xe0);
        goto joined_r0x005cb668;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    uVar5 = *(ulong *)(param_1 + 0xe0);
  }
joined_r0x005cb668:
  if (uVar5 == uVar8) {
    lVar4 = *(long *)(param_1 + 0x68);
  }
  else {
    if ((uVar8 < *(ulong *)(param_1 + 0xe8)) ||
       (uVar5 = FUN_005cb970(param_1 + 0xd0,uVar8,1), (uVar5 & 1) != 0)) {
      *(ulong *)(param_1 + 0xe0) = uVar8;
      if (lVar4 << 0x20 != 0) {
        *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0xf8);
        *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0xf8) + uVar8 * 8;
        lVar4 = *(long *)(param_1 + 0x68);
        goto joined_r0x005cb6a8;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    lVar4 = *(long *)(param_1 + 0x68);
  }
joined_r0x005cb6a8:
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      *(long *)(*(long *)(param_1 + 0xa8) + lVar7 * 8) = lVar4;
      *(long *)(*(long *)(param_1 + 0xf8) + lVar7 * 8) = lVar4;
      *(long *)(lVar4 + 0x98) = lVar7;
      lVar4 = *(long *)(lVar4 + 0x10);
      lVar7 = lVar7 + 1;
    } while (lVar4 != 0);
  }
  plVar10 = (long *)(param_1 + 0x68);
  FUN_005cb6e0(auStack_28,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xf8));
  lVar4 = *(long *)(param_1 + 0x78);
  while ((lVar4 != 0 && (lVar4 = *plVar10, lVar4 != 0))) {
    lVar7 = *(long *)(lVar4 + 0x10);
    if (lVar7 == 0) {
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    else {
      *(undefined8 *)(lVar7 + 8) = 0;
      *plVar10 = lVar7;
    }
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x78) + -1;
    *(long *)(param_1 + 0x78) = lVar4;
  }
  uVar3 = FUN_005bf7e0();
  FUN_005c09c0(uVar3,param_1);
  return;
}


