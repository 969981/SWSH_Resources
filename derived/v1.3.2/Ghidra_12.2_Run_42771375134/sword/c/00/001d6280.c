/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d6280; name: FUN_001d6280
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001d6280(long *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 local_70 [8];
  undefined4 local_68 [2];
  undefined1 local_60 [8];
  undefined8 local_58;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 >> 5 & 1) != 0) {
    lVar8 = *param_1;
    lVar12 = *(long *)(PTR_DAT_02711068 + (ulong)(uVar2 >> 0x18 & 0xf) * 8 + 0x30);
    lVar7 = param_1[2];
    if (lVar7 == 0) {
      lVar7 = FUN_001d1a00(lVar8);
      param_1[2] = lVar7;
      uVar3 = *(uint *)(lVar7 + 0xa0);
    }
    else {
      uVar3 = *(uint *)(lVar7 + 0xa0);
    }
    puVar10 = (uint *)(lVar7 + 0x98);
    uVar5 = (ulong)uVar3;
    if (uVar3 != 1) {
      if (uVar3 == 0) goto LAB_001d6374;
      puVar10 = (uint *)(*(long *)(lVar8 + 0x2030) + (ulong)*puVar10 * 8);
    }
    uVar11 = 0;
    do {
      lVar8 = *(long *)(puVar10 + uVar11 * 2);
      pbVar1 = (byte *)(lVar8 + 0x60);
      if ((*(byte *)(lVar8 + 8) & 0x40) != 0) {
        pbVar1 = (byte *)(*(long *)(lVar8 + 0x10) + 0x34);
      }
      if ((*pbVar1 & 5) != 0) {
        local_68[0] = 0x80;
        local_70[0] = 0;
        FUN_003d9690(lVar12 + (long)param_1,lVar8 + 0x20,local_68,local_70,0);
        uVar5 = (ulong)*(uint *)(lVar7 + 0xa0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
LAB_001d6374:
  if ((uVar2 >> 3 & 1) != 0) {
    lVar7 = param_1[2];
    if (lVar7 == 0) {
      lVar7 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = lVar7;
    }
    puVar4 = PTR_DAT_02711068;
    uVar5 = (ulong)*(uint *)(lVar7 + 0x38);
    if (*(uint *)(lVar7 + 0x38) != 0) {
      if (*(uint *)(param_1 + 1) >> 0x1e < 3) {
        uVar11 = 0;
        do {
          plVar6 = *(long **)(*(long *)(lVar7 + 0x30) + uVar11 * 8);
          if ((*(uint *)(plVar6 + 1) & 0xf000000) == 0x1000000) {
            lVar8 = *param_1;
            *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) & 0x3fffffff | 0x80000000;
            *plVar6 = lVar8;
          }
          pbVar1 = (byte *)(*(long *)(puVar4 + (ulong)(*(uint *)(param_1 + 1) >> 0x18 & 0xf) * 8 +
                                               0x30) + (long)param_1 + 0xc);
          if ((*(uint *)(param_1 + 1) & 1) != 0) {
            pbVar1 = (byte *)param_1[2];
          }
          if ((*pbVar1 >> 3 & 1) == 0) {
            FUN_003d9610(*(long *)(puVar4 + (ulong)(*(uint *)(param_1 + 1) >> 0x18 & 0xf) * 8 + 0x30
                                  ) + (long)param_1,plVar6 + 4);
            FUN_00206d40(plVar6);
            uVar5 = (ulong)*(uint *)(lVar7 + 0x38);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
      else {
        lVar8 = *(long *)(lVar7 + 0x30);
        uVar11 = 0;
        do {
          plVar6 = *(long **)(lVar8 + uVar11 * 8);
          if ((*(uint *)(plVar6 + 1) & 0xf000000) == 0x1000000) {
            lVar12 = *param_1;
            *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) & 0x3fffffff;
            *plVar6 = lVar12;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
    }
    local_58 = 0;
    FUN_001d6550(lVar7 + 8,0,&local_58);
    FUN_001d6630(lVar7 + 8,*(undefined4 *)(lVar7 + 0x38));
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 & 7) != 0) {
    puVar9 = (undefined1 *)param_1[2];
    lVar7 = *(long *)(PTR_DAT_02711068 + (ulong)(uVar2 >> 0x18 & 0xf) * 8 + 0x30) + (long)param_1;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)FUN_001d1a00(*param_1);
      uVar2 = *(uint *)(param_1 + 1);
      param_1[2] = (long)puVar9;
    }
    if ((uVar2 & 1) != 0) {
      local_60[0] = *puVar9;
      FUN_003ba2d0(lVar7,local_60);
      uVar2 = *(uint *)(param_1 + 1);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_003ba310(lVar7,puVar9[1]);
      uVar2 = *(uint *)(param_1 + 1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined1 *)(lVar7 + 0xe) = puVar9[2];
    }
  }
  return;
}


