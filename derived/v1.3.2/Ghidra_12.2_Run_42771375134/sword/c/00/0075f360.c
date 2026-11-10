/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f360; name: FUN_0075f360
 */


ulong * FUN_0075f360(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  
  if ((*(byte *)((long)param_1 + 0xc) >> 2 & 1) == 0) {
    uVar7 = *param_1;
    lVar5 = uVar7 + 0x18;
    lVar9 = lVar5;
    if (uVar7 < 0x11) {
      lVar9 = 0x28;
    }
    uVar6 = *(ulong *)((long)param_1 + lVar9);
    puVar4 = (ulong *)((long)param_1 + lVar9);
    lVar9 = uVar6 + 0x18;
  }
  else {
    uVar6 = *param_1;
    lVar5 = uVar6 + 0x18;
    puVar4 = param_1;
    uVar7 = uVar6;
    lVar9 = lVar5;
  }
  if (uVar7 < 0x11) {
    lVar5 = 0x28;
  }
  if (uVar6 < 0x11) {
    lVar9 = 0x28;
  }
  lVar1 = 0x18;
  if ((ulong)(lVar9 + lVar5) < 0x11) {
    lVar1 = 0x28;
  }
  uVar7 = (lVar9 + lVar5) - lVar1;
  puVar8 = param_1;
  if ((*(byte *)((long)param_1 + 0xc) >> 1 & 1) == 0) {
    puVar8 = (ulong *)((long)param_1 - param_1[-1]);
  }
  bVar3 = *(byte *)((long)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  puVar2 = (ulong *)((long)puVar4 + lVar9);
  if ((bVar3 & 4) != 0) {
    puVar2 = puVar4;
  }
  *(undefined2 *)((long)param_1 + 0xd) = 0x300;
  lVar5 = uVar7 + 0x10;
  *param_1 = uVar7;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xf) = 0;
  bVar3 = (puVar8 == param_1) << 1 | 4;
  if (puVar2 != puVar4) {
    bVar3 = (puVar8 == param_1) << 1;
  }
  lVar9 = uVar7 + 0x18;
  *(byte *)((long)param_1 + 0xc) = bVar3;
  if (uVar7 < 0x11) {
    lVar5 = 0x20;
    lVar9 = 0x28;
  }
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  *(long *)((long)param_1 + lVar5) = lVar9;
  return puVar4;
}


