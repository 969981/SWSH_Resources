/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b1ee0; name: FUN_010b1ee0
 */


void FUN_010b1ee0(long param_1)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 local_18;
  
  lVar2 = *(long *)(param_1 + 0x600);
  uVar3 = *(ulong *)(lVar2 + 0xe8);
  if ((int)uVar3 == 0) {
    return;
  }
  if ((uVar3 & 0xffffffff) == 1) {
    lVar5 = 0;
  }
  else {
    lVar7 = 0;
    lVar5 = 0;
    do {
      *(undefined1 *)(*(long *)(lVar2 + 0xe0) + lVar7 + 4) = 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x600) + 0xe0) + lVar7;
      lVar7 = lVar7 + 0x10;
      *(undefined1 *)(lVar2 + 0xc) = 1;
      lVar2 = *(long *)(param_1 + 0x600);
      lVar5 = lVar5 + 2;
    } while ((uVar3 & 0xffffffff) - (uVar3 & 1) != lVar5);
  }
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(*(long *)(lVar2 + 0xe0) + lVar5 * 8 + 4) = 1;
    lVar2 = *(long *)(param_1 + 0x600);
  }
  puVar6 = *(ulong **)(lVar2 + 0xe0);
  lVar7 = *(long *)(lVar2 + 0xe8);
  puVar4 = puVar6 + lVar7;
  if ((lVar7 != 0) && ((*puVar6 & 0x100000000) == 0)) {
    lVar5 = lVar7 * 8;
    do {
      lVar5 = lVar5 + -8;
      if (lVar5 == 0) goto LAB_010b2074;
      pbVar1 = (byte *)((long)puVar6 + 0xc);
      puVar6 = puVar6 + 1;
    } while ((*pbVar1 & 1) == 0);
  }
  if (puVar4 != puVar6) {
    puVar8 = puVar6 + 1;
    if (puVar8 == puVar4) {
      if (puVar4 == puVar6) goto LAB_010b2074;
    }
    else {
      uVar3 = (long)(puVar4 + -2) - (long)puVar6;
      puVar9 = puVar4 + -2;
      puVar10 = puVar6;
      if (((uint)uVar3 >> 3 & 1) == 0) {
        puVar9 = puVar6;
        if ((puVar6[1] >> 0x20 & 1) == 0) {
          puVar9 = puVar6 + 1;
          *puVar6 = puVar6[1];
        }
        puVar8 = puVar6 + 2;
        puVar10 = puVar9;
      }
      puVar6 = puVar9;
      if (7 < uVar3) {
        puVar6 = puVar10;
        do {
          while ((*puVar8 >> 0x20 & 1) == 0) {
            puVar6 = puVar6 + 1;
            *puVar10 = *puVar8;
            uVar3 = puVar8[1];
            puVar10 = puVar6;
            if ((uVar3 >> 0x20 & 1) == 0) goto LAB_010b203c;
LAB_010b2018:
            puVar8 = puVar8 + 2;
            if (puVar8 == puVar4) goto LAB_010b2054;
          }
          uVar3 = puVar8[1];
          if ((uVar3 >> 0x20 & 1) != 0) goto LAB_010b2018;
LAB_010b203c:
          puVar6 = puVar6 + 1;
          *puVar10 = uVar3;
          puVar8 = puVar8 + 2;
          puVar10 = puVar6;
        } while (puVar8 != puVar4);
      }
LAB_010b2054:
      lVar7 = *(long *)(lVar2 + 0xe8);
      puVar4 = (ulong *)(*(long *)(lVar2 + 0xe0) + lVar7 * 8);
      if (puVar4 == puVar6) goto LAB_010b2074;
    }
    *(long *)(lVar2 + 0xe8) = lVar7 - ((long)puVar4 - (long)puVar6 >> 3);
  }
LAB_010b2074:
  local_18 = 0xead1085e4c3977b1;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_18);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  FUN_00ffcf80(param_1 + 0x100,"anime_stamp_off");
  return;
}


