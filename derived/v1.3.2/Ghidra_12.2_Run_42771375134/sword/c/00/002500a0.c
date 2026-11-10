/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002500a0; name: FUN_002500a0
 */


ulong FUN_002500a0(long param_1)

{
  long lVar1;
  ushort uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ushort in_w4;
  undefined1 *in_x5;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint local_140 [16];
  uint local_100 [8];
  undefined1 auStack_e0 [128];
  
  uVar6 = FUN_0024fdc0();
  if ((int)uVar6 == 0) {
    *in_x5 = 0;
  }
  else {
    puVar9 = local_140;
    puVar10 = auStack_e0;
    puVar11 = local_100;
    uVar7 = uVar6 & 0xffffffff;
    do {
      uVar5 = FUN_0024ff60(param_1,puVar10,puVar9);
      puVar9 = puVar9 + 2;
      puVar10 = puVar10 + 0x10;
      uVar7 = uVar7 - 1;
      *puVar11 = uVar5;
      puVar11 = puVar11 + 1;
    } while (uVar7 != 0);
    *in_x5 = 0;
    if ((int)uVar6 != 0) {
      lVar8 = *(long *)(param_1 + 0x50);
      uVar7 = 0;
      puVar9 = local_140 + 1;
      do {
        lVar1 = lVar8 + (ulong)(puVar9[-1] >> 1) * 4;
        pbVar3 = (byte *)(lVar1 + 2);
        if ((puVar9[-1] & 1) != 0) {
          pbVar3 = (byte *)(lVar1 + 3);
        }
        uVar2 = *pbVar3 & 0x7f;
        if (local_100[uVar7] < 2) {
          if (uVar2 != in_w4) {
            return 1;
          }
        }
        else {
          lVar1 = lVar8 + (ulong)(*puVar9 >> 1) * 4;
          pbVar3 = (byte *)(lVar1 + 2);
          if ((*puVar9 & 1) != 0) {
            pbVar3 = (byte *)(lVar1 + 3);
          }
          bVar4 = *pbVar3;
          if ((uVar2 != in_w4) && (*in_x5 = 1, (bVar4 & 0x7f) == in_w4)) {
            return 1;
          }
          if (((bVar4 & 0x7f) != in_w4) && (*in_x5 = 1, uVar2 == in_w4)) {
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 2;
      } while (uVar7 < (uVar6 & 0xffffffff));
    }
    uVar6 = 0;
  }
  return uVar6;
}


