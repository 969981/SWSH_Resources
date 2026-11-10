/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00504760; name: FUN_00504760
 */


uint * FUN_00504760(long *param_1,long param_2,undefined8 param_3,ulong *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  float fVar10;
  ulong local_60;
  undefined1 local_58;
  int local_54;
  
  puVar4 = PTR_DAT_02712e28;
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 != 0) {
    uVar6 = *(uint *)(param_2 + 0x90);
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = uVar6 / uVar7;
    }
    for (puVar8 = *(uint **)(*param_1 + (ulong)(uVar6 - uVar3 * uVar7) * 8); puVar8 != (uint *)0x0;
        puVar8 = *(uint **)(puVar8 + 2)) {
      if (*puVar8 == uVar6) {
        puVar8[0x1c] = puVar8[0x1c] + 1;
        return puVar8 + 0x1e;
      }
    }
  }
  puVar8 = (uint *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0xc0);
  if (puVar8 != (uint *)0x0) {
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x1c] = 0;
    puVar8[0x2e] = 0;
    puVar8[0x2f] = 0;
    puVar8[0x24] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x19] = *(uint *)(param_2 + 0x8c);
    uVar2 = *(undefined1 *)(param_2 + 0x60);
    iVar5 = FUN_00508420(puVar8 + 0x1e,*(undefined1 *)(param_2 + 0x94),
                         *(undefined1 *)(param_2 + 0x95));
    if (iVar5 == 0) {
      local_60 = *param_4 & 0xfffffffffffffffc;
      uVar7 = (uint)*param_4;
      local_58 = (undefined1)((uVar7 & 3) << 3);
      local_54 = (int)param_4[1] + (uVar7 & 3);
      iVar5 = FUN_00508470(puVar8,uVar2,&local_60);
      if (iVar5 == 0) {
        puVar8[0x1c] = puVar8[0x1c] + 1;
        uVar7 = *(uint *)(param_2 + 0x90);
        *puVar8 = uVar7;
        uVar6 = *(uint *)(param_1 + 1);
        if ((uVar6 != 0) &&
           (fVar10 = (float)NEON_ucvtf((int)param_1[2]), fVar10 / (float)uVar6 <= DAT_01d4bee0)) {
LAB_00504930:
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar7 / uVar6;
          }
          lVar9 = (ulong)(uVar7 - uVar3 * uVar6) * 8;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(*param_1 + lVar9);
          *(uint **)(*param_1 + lVar9) = puVar8;
          *(int *)(param_1 + 2) = (int)param_1[2] + 1;
          return puVar8 + 0x1e;
        }
        FUN_00504ad0(param_1);
        uVar6 = *(uint *)(param_1 + 1);
        if (uVar6 != 0) {
          uVar7 = *puVar8;
          goto LAB_00504930;
        }
      }
    }
    FUN_00504690(puVar8);
    uVar1 = *(undefined4 *)puVar4;
    if (*(long *)(puVar8 + 0x10) != 0) {
      FUN_00404870(uVar1);
    }
    if (*(long *)(puVar8 + 0xc) != 0) {
      FUN_00404870(*(undefined4 *)puVar4);
    }
    if (*(long *)(puVar8 + 8) != 0) {
      FUN_00404870(*(undefined4 *)puVar4);
    }
    if (*(long *)(puVar8 + 4) != 0) {
      FUN_00404870(*(undefined4 *)puVar4);
    }
    FUN_00404870(uVar1,puVar8);
  }
  return (uint *)0x0;
}


