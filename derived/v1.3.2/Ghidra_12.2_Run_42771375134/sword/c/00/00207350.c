/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207350; name: FUN_00207350
 */


void FUN_00207350(long *param_1,long *param_2,byte param_3,uint param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *local_50;
  byte local_48;
  undefined7 uStack_47;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 >> 0x1e == 0) {
    return;
  }
  lVar9 = *param_1;
  if (*(char *)(lVar9 + 0x1fb9) == '\0') {
    pbVar2 = (byte *)(*(long *)(PTR_DAT_02711068 + (ulong)(uVar4 >> 0x18 & 0xf) * 8 + 0x30) +
                      (long)param_1 + 0xc);
    if ((uVar4 & 1) != 0) {
      pbVar2 = (byte *)param_1[2];
    }
    if ((*pbVar2 >> 3 & 1) == 0) {
      FUN_003d9640(*(long *)(PTR_DAT_02711068 + (ulong)(uVar4 >> 0x18 & 0xf) * 8 + 0x30) +
                   (long)param_1,param_2 + 4,param_3 & 1);
      FUN_00206d50(param_2);
    }
LAB_0020741c:
    if ((*(uint *)(param_2 + 1) & 0xf000000) == 0x1000000) {
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0x3fffffff;
      *param_2 = 0;
    }
    return;
  }
  if (uVar4 >> 0x1e == 1) goto LAB_0020741c;
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    lVar3 = FUN_001d1a00(lVar9,uVar4 >> 0x18 & 0xf);
    uVar4 = *(uint *)(param_1 + 1);
    param_1[2] = lVar3;
  }
  if ((uVar4 >> 5 & 1) == 0) {
LAB_002074c4:
    uVar4 = *(uint *)(lVar3 + 0x38);
    if (uVar4 == 0) goto LAB_002074f4;
LAB_002074cc:
    lVar7 = *(long *)(lVar3 + 0x30);
    uVar5 = 0;
    do {
      uVar8 = (uint)uVar5;
      if (*(long **)(lVar7 + uVar5 * 8) == param_2) break;
      uVar8 = uVar8 + 1;
      uVar5 = (ulong)uVar8;
    } while (uVar8 < uVar4);
    if (uVar8 == uVar4) goto LAB_002074f4;
    *(uint *)(lVar3 + 0x38) = uVar4 - 1;
    *(undefined8 *)(lVar7 + (ulong)uVar8 * 8) = *(undefined8 *)(lVar7 + (ulong)(uVar4 - 1) * 8);
    if ((*(uint *)(param_2 + 1) & 0xf000000) != 0x1000000) goto LAB_00207600;
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0x3fffffff | 0x80000000;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 0xa0);
    if (uVar4 == 1) {
      if (*(long **)(lVar3 + 0x98) == param_2) goto LAB_002074b0;
      goto LAB_002074c4;
    }
    if (uVar4 == 0) {
LAB_002074b0:
      *(undefined4 *)(lVar3 + 0xa0) = 0;
LAB_002074b4:
      *(undefined8 *)(lVar3 + 0x98) = 0;
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xffffffdf;
      goto LAB_002074c4;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x2030) + (ulong)*(uint *)(lVar3 + 0x98) * 8);
    uVar5 = 0;
    uVar8 = uVar4;
    do {
      while (uVar6 = (uint)uVar5, (long *)puVar1[uVar5] != param_2) {
        uVar6 = uVar6 + 1;
        uVar5 = (ulong)uVar6;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) goto LAB_0020748c;
      }
      uVar8 = uVar8 - 1;
      puVar1[uVar5] = puVar1[uVar8];
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
LAB_0020748c:
    *(uint *)(lVar3 + 0xa0) = uVar6;
    if (uVar6 == 0) goto LAB_002074b4;
    if (uVar6 != 1) goto LAB_002074c4;
    *(undefined8 *)(lVar3 + 0x98) = *puVar1;
    uVar4 = *(uint *)(lVar3 + 0x38);
    if (uVar4 != 0) goto LAB_002074cc;
LAB_002074f4:
    if ((*(byte *)((long)param_1 +
                  *(long *)(PTR_DAT_02711068 +
                           ((ulong)*(byte *)((long)param_1 + 0xb) & 0xf) * 8 + 0x30) + 0xc) >> 3 & 1
        ) == 0) {
      local_48 = param_3 & 1;
      uVar4 = *(uint *)(lVar3 + 0x90);
      if (uVar4 < (*(uint *)(lVar3 + 0x94) & 0x7fffffff)) {
LAB_00207534:
        puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x88) + (ulong)uVar4 * 0x10);
        puVar1[1] = CONCAT71(uStack_47,local_48);
        *puVar1 = param_2;
        *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + 1;
        local_50 = param_2;
      }
      else {
LAB_002075d4:
        local_50 = param_2;
        FUN_0020a4f0(lVar3 + 0x40,&local_50);
      }
    }
    else {
      if ((param_4 & 1) == 0) {
        local_48 = 0;
        uVar4 = *(uint *)(lVar3 + 0x90);
        if ((*(uint *)(lVar3 + 0x94) & 0x7fffffff) <= uVar4) goto LAB_002075d4;
        goto LAB_00207534;
      }
      if ((*(byte *)((long)param_2 + 0xb) >> 4 & 1) != 0) {
        FUN_001cafb0(lVar9 + 0x1fe8,param_2);
        *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xefffffff;
      }
    }
    if ((*(uint *)(param_2 + 1) & 0xf000000) != 0x1000000) goto LAB_00207600;
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0xc0000000;
  }
  *param_2 = lVar9;
LAB_00207600:
  FUN_001d1850(*param_1,param_1);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 8;
  return;
}


