/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cfdf0; name: FUN_001cfdf0
 */


void FUN_001cfdf0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 & 0xffffff) != 0) {
    puVar9 = (uint *)param_1[2];
    puVar5 = PTR_DAT_02711068;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)FUN_001d1a00(*param_1,uVar1 >> 0x18 & 0xf);
      param_1[2] = puVar9;
      puVar5 = PTR_DAT_02711068;
    }
    PTR_DAT_02711068 = puVar5;
    if (((uVar1 & 1) != 0) && (uVar2 = puVar9[1], uVar2 != 0)) {
      lVar7 = *(long *)(param_2 + 0x2040);
      uVar3 = *puVar9;
      uVar4 = *(uint *)(param_1 + 4);
      uVar6 = 0;
      do {
        lVar8 = *(long *)(lVar7 + (ulong)uVar3 * 8 + uVar6 * 8);
        uVar6 = uVar6 + 1;
        lVar8 = *(long *)(puVar5 + (ulong)(*(byte *)(lVar8 + 0xb) & 0xf) * 8 + 0x30) + lVar8;
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xff000000 | uVar4 & 0xffffff;
      } while (uVar6 < uVar2);
    }
    puVar5 = PTR_DAT_02711068;
    if (((uVar1 >> 1 & 1) != 0) && (uVar6 = (ulong)puVar9[3], puVar9[3] != 0)) {
      lVar7 = *(long *)(param_2 + 0x2040);
      uVar1 = puVar9[2];
      uVar10 = 0;
      do {
        lVar8 = *(long *)(lVar7 + (ulong)uVar1 * 8 + uVar10 * 8);
        uVar2 = *(uint *)(lVar8 + 8);
        lVar8 = *(long *)(puVar5 + (ulong)(uVar2 >> 0x18 & 0xf) * 8 + 0x30) + lVar8;
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0xffffff;
        if ((uVar2 >> 0x1e) - 1 < 2) {
          FUN_003ba330();
          uVar6 = (ulong)puVar9[3];
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
    }
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xff000000;
  return;
}


