/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f450; name: FUN_0075f450
 */


ulong * FUN_0075f450(ulong *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  
  pbVar5 = (byte *)((long)param_1 + 0xc);
  lVar1 = param_2 + 0x18;
  lVar2 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar2 = 0x28;
  }
  if (param_2 < 0x11) {
    lVar1 = 0x28;
  }
  puVar4 = (ulong *)((long)param_1 + lVar2);
  if ((*pbVar5 & 4) != 0) {
    puVar4 = param_1;
  }
  puVar6 = param_1;
  if ((*pbVar5 >> 1 & 1) == 0) {
    puVar6 = (ulong *)((long)param_1 - param_1[-1]);
  }
  puVar7 = param_1 + 1;
  *(undefined4 *)puVar7 = 0xffffffff;
  puVar10 = (undefined2 *)((long)param_1 + 0xd);
  *puVar10 = 0x300;
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  puVar9 = (undefined8 *)((long)param_1 + 0xf);
  *puVar9 = 0;
  *(char *)((long)param_1 + 0xc) = (puVar6 == param_1) << 1;
  lVar3 = param_2 + 0x10;
  *param_1 = param_2;
  if (param_2 < 0x11) {
    lVar3 = 0x20;
  }
  *(long *)((long)param_1 + lVar3) = lVar1;
  uVar8 = (lVar2 - lVar1) - 0x18;
  if ((ulong)(lVar2 - lVar1) < 0x29) {
    uVar8 = 0x10;
  }
  if ((*(byte *)((long)param_1 + 0xc) >> 2 & 1) == 0) {
    lVar1 = *param_1 + 0x18;
    if (*param_1 < 0x11) {
      lVar1 = 0x28;
    }
    puVar6 = (ulong *)((long)param_1 + lVar1);
    puVar7 = puVar6 + 1;
    pbVar5 = (byte *)((long)puVar6 + 0xc);
    puVar10 = (undefined2 *)((long)puVar6 + 0xd);
    puVar9 = (undefined8 *)((long)puVar6 + 0xf);
  }
  else {
    puVar6 = param_1;
  }
  *(undefined4 *)puVar7 = 0xffffffff;
  *(undefined1 *)puVar10 = 0;
  *(undefined1 *)((long)puVar6 + 0xe) = 3;
  lVar1 = uVar8 + 0x10;
  *(undefined1 *)(puVar9 + 2) = 0;
  if (uVar8 < 0x11) {
    lVar1 = 0x20;
  }
  *puVar9 = 0;
  puVar9[1] = 0;
  lVar2 = uVar8 + 0x18;
  *puVar6 = uVar8;
  if (uVar8 < 0x11) {
    lVar2 = 0x28;
  }
  *pbVar5 = (puVar4 == param_1) << 2;
  *(long *)((long)puVar6 + lVar1) = lVar2;
  return puVar6;
}


