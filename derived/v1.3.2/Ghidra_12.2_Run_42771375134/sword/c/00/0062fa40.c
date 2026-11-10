/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062fa40; name: FUN_0062fa40
 */


undefined8 FUN_0062fa40(long *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  ushort *puVar11;
  
  lVar8 = *(long *)(*param_1 + 0xb0);
  lVar9 = *(long *)(param_1[2] + 0x108);
  if (0 < lVar9) {
    memcpy((void *)param_1[0x1c],(void *)param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4
          );
  }
  lVar6 = param_1[1];
  lVar5 = param_1[0x22];
  uVar4 = *(undefined8 *)(lVar6 + 0x150);
  uVar2 = *(undefined8 *)(lVar6 + 0x158);
  uVar1 = *(undefined8 *)(lVar6 + 0x160);
  *(undefined8 *)(lVar5 + 0x230) = *(undefined8 *)(lVar6 + 0x168);
  *(undefined8 *)(lVar5 + 0x228) = uVar1;
  *(undefined8 *)(lVar5 + 0x220) = uVar2;
  *(undefined8 *)(lVar5 + 0x218) = uVar4;
  uVar4 = *(undefined8 *)(lVar6 + 0x170);
  uVar2 = *(undefined8 *)(lVar6 + 0x178);
  uVar1 = *(undefined8 *)(lVar6 + 0x180);
  *(undefined8 *)(lVar5 + 0x250) = *(undefined8 *)(lVar6 + 0x188);
  *(undefined8 *)(lVar5 + 0x248) = uVar1;
  *(undefined8 *)(lVar5 + 0x240) = uVar2;
  *(undefined8 *)(lVar5 + 0x238) = uVar4;
  uVar4 = *(undefined8 *)(lVar6 + 400);
  uVar2 = *(undefined8 *)(lVar6 + 0x198);
  uVar1 = *(undefined8 *)(lVar6 + 0x1a0);
  *(undefined8 *)(lVar5 + 0x270) = *(undefined8 *)(lVar6 + 0x1a8);
  *(undefined8 *)(lVar5 + 0x268) = uVar1;
  *(undefined8 *)(lVar5 + 0x260) = uVar2;
  *(undefined8 *)(lVar5 + 600) = uVar4;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1[0x22] + 0x198) = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
    *(undefined8 *)(param_1[0x22] + 0x1a0) = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
  }
  else {
    *(undefined8 *)(param_1[0x22] + 0x198) = 0x10000;
    *(undefined8 *)(param_1[0x22] + 0x1a0) = 0x10000;
    memcpy((void *)param_1[0x1e],(void *)param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4
          );
  }
  puVar11 = (ushort *)((long)param_1 + 0xdc);
  plVar3 = param_1 + 0x1d;
  lVar5 = *plVar3 + (ulong)*puVar11 * 0x10;
  *(ulong *)(lVar5 + -0x40) = *(long *)(lVar5 + -0x40) + 0x20U & 0xffffffffffffffc0;
  lVar5 = *plVar3 + (ulong)*puVar11 * 0x10;
  *(ulong *)(lVar5 + -0x30) = *(long *)(lVar5 + -0x30) + 0x20U & 0xffffffffffffffc0;
  lVar5 = *plVar3 + (ulong)*puVar11 * 0x10;
  *(ulong *)(lVar5 + -0x18) = *(long *)(lVar5 + -0x18) + 0x20U & 0xffffffffffffffc0;
  lVar5 = *plVar3 + (ulong)*puVar11 * 0x10;
  *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) + 0x20U & 0xffffffffffffffc0;
  if (0 < lVar9) {
    lVar5 = param_1[0x22];
    pbVar10 = *(byte **)(param_1[3] + 0x70);
    *(long *)(lVar5 + 0x330) = lVar9;
    *(undefined8 *)(lVar5 + 0x328) = *(undefined8 *)(lVar5 + 0x2c0);
    *(char *)(param_1[0x22] + 0x3c8) = param_2;
    lVar7 = param_1[0x22];
    lVar9 = param_1[0x1a];
    lVar5 = param_1[0x1b];
    lVar6 = param_1[0x1d];
    *(long *)(lVar7 + 0x118) = param_1[0x1c];
    *(long *)(lVar7 + 0x120) = lVar6;
    *(long *)(lVar7 + 0x108) = lVar9;
    *(long *)(lVar7 + 0x110) = lVar5;
    lVar9 = param_1[0x1e];
    lVar5 = param_1[0x1f];
    lVar6 = param_1[0x21];
    *(long *)(lVar7 + 0x138) = param_1[0x20];
    *(long *)(lVar7 + 0x140) = lVar6;
    *(long *)(lVar7 + 0x128) = lVar9;
    *(long *)(lVar7 + 0x130) = lVar5;
    plVar3 = (long *)param_1[0x22];
    *(undefined4 *)(plVar3 + 0x4f) = 3;
    plVar3[0x51] = 0;
    *(undefined2 *)((long)plVar3 + 0x224) = 0;
    plVar3[0x50] = plVar3[0x65];
    plVar3[0x52] = plVar3[0x66];
    plVar3[0xb] = plVar3[0x23];
    plVar3[0xc] = plVar3[0x24];
    plVar3[9] = plVar3[0x21];
    plVar3[10] = plVar3[0x22];
    plVar3[0x13] = plVar3[0x23];
    plVar3[0x14] = plVar3[0x24];
    plVar3[0x11] = plVar3[0x21];
    plVar3[0x12] = plVar3[0x22];
    plVar3[0x1b] = plVar3[0x23];
    plVar3[0x1c] = plVar3[0x24];
    plVar3[0x19] = plVar3[0x21];
    plVar3[0x1a] = plVar3[0x22];
    plVar3[0xf] = plVar3[0x27];
    plVar3[0x10] = plVar3[0x28];
    *(undefined2 *)((long)plVar3 + 0x26c) = 1;
    *(undefined2 *)((long)plVar3 + 0x26e) = 1;
    plVar3[0xd] = plVar3[0x25];
    plVar3[0xe] = plVar3[0x26];
    plVar3[0x15] = plVar3[0x25];
    plVar3[0x16] = plVar3[0x26];
    *(undefined2 *)(plVar3 + 0x4e) = 1;
    plVar3[0x1d] = plVar3[0x25];
    plVar3[0x1e] = plVar3[0x26];
    plVar3[0x17] = plVar3[0x27];
    plVar3[0x18] = plVar3[0x28];
    *(undefined2 *)((long)plVar3 + 0x222) = 0x4000;
    plVar3[0x1f] = plVar3[0x27];
    plVar3[0x20] = plVar3[0x28];
    *(undefined4 *)((long)plVar3 + 0x226) = *(undefined4 *)((long)plVar3 + 0x222);
    *(undefined4 *)((long)plVar3 + 0x21e) = *(undefined4 *)((long)plVar3 + 0x222);
    *(undefined4 *)(plVar3 + 0x48) = 1;
    plVar3[0x46] = 1;
    plVar3[4] = 0;
    *(undefined4 *)(plVar3 + 0x5e) = 0;
    uVar4 = (**(code **)(*plVar3 + 0x440))();
    if (((int)uVar4 != 0) && (*(char *)(param_1[0x22] + 0x3c9) != '\0')) {
      return uVar4;
    }
    *pbVar10 = *pbVar10 | *(char *)(param_1[0x22] + 0x268) << 5 | 4;
  }
  if ((*(int *)(lVar8 + 0x78) != 0x28) || (*(char *)(param_1[0x22] + 0x42b) == '\0')) {
    lVar8 = param_1[0x1d] + (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
    lVar9 = *(long *)(lVar8 + -0x38);
    param_1[0xe] = *(long *)(lVar8 + -0x40);
    param_1[0xf] = lVar9;
    lVar9 = *(long *)(lVar8 + -0x28);
    param_1[0x10] = *(long *)(lVar8 + -0x30);
    param_1[0x11] = lVar9;
    lVar9 = *(long *)(lVar8 + -0x18);
    param_1[0x27] = *(long *)(lVar8 + -0x20);
    param_1[0x28] = lVar9;
    lVar9 = *(long *)(lVar8 + -8);
    param_1[0x29] = *(long *)(lVar8 + -0x10);
    param_1[0x2a] = lVar9;
  }
  return 0;
}


