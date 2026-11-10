/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b210; name: FUN_0047b210
 */


int FUN_0047b210(float param_1,long param_2,void *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  void *__dest;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float afStack_60 [4];
  
  puVar5 = PTR_DAT_02712a90;
  iVar6 = 0x1f;
  if ((DAT_01d4c2f4 <= param_1) && (param_1 <= DAT_01d4c5c0)) {
    uVar2 = *(uint *)(param_2 + 0x48);
    if (*(uint *)(param_2 + 0x48) <= param_4) {
      uVar2 = param_4;
    }
    lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 * 4);
    if (lVar7 == 0) {
      iVar6 = 2;
    }
    else {
      __dest = (void *)((long)afStack_60 - ((ulong)uVar2 * 4 + 0xf & 0x7fffffff0));
      if (param_4 != 0) {
        memcpy(__dest,param_3,(ulong)param_4 << 2);
      }
      uVar3 = *(uint *)(param_2 + 0x48);
      if (param_4 < uVar3) {
        lVar9 = *(long *)(param_2 + 0x40);
        uVar11 = (ulong)param_4;
        uVar8 = uVar11;
        if ((uVar3 - param_4 & 1) != 0) {
          *(float *)((long)__dest + uVar11 * 4) = *(float *)(lVar9 + uVar11 * 4) * DAT_01d4be08;
          uVar8 = uVar11 + 1;
        }
        if ((ulong)uVar3 - 1 != uVar11) {
          lVar1 = uVar8 * 4 + 4;
          pfVar10 = (float *)(lVar9 + lVar1);
          pfVar12 = (float *)((long)__dest + lVar1);
          do {
            pfVar12[-1] = pfVar10[-1] * DAT_01d4be08;
            uVar8 = uVar8 + 2;
            *pfVar12 = *pfVar10 * DAT_01d4be08;
            pfVar10 = pfVar10 + 2;
            pfVar12 = pfVar12 + 2;
          } while (uVar8 < uVar3);
        }
      }
      iVar6 = FUN_004b11a0(__dest,param_4,lVar7,afStack_60 + 3);
      if (iVar6 == 1) {
        if (*(long *)(param_2 + 0x40) != 0) {
          FUN_00404870(*(undefined4 *)puVar5);
        }
        *(long *)(param_2 + 0x40) = lVar7;
        *(uint *)(param_2 + 0x48) = uVar2;
        param_1 = param_1 * DAT_01d4bf34;
        *(float *)(param_2 + 0x4c) = 1.0 / afStack_60[3];
        *(float *)(param_2 + 0x50) = param_1;
        iVar4 = *(int *)(param_2 + 0x80);
      }
      else {
        FUN_00404870(*(undefined4 *)puVar5,lVar7);
        iVar4 = *(int *)(param_2 + 0x80);
      }
      if (iVar4 != 0) {
        puVar13 = *(undefined4 **)(param_2 + 0x78);
        do {
          puVar14 = puVar13 + 4;
          FUN_004a80f0(*(undefined4 *)(param_2 + 0x50),*puVar13,*(undefined8 *)(param_2 + 0x40),
                       puVar13 + 2);
          puVar13 = puVar14;
        } while (puVar14 !=
                 (undefined4 *)(*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 0x80) * 0x10)
                );
      }
      if (*(int *)(param_2 + 0x70) != 0) {
        lVar7 = *(long *)(param_2 + 0x68);
        do {
          FUN_00404870(*(undefined4 *)puVar5,*(undefined8 *)(lVar7 + 8));
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != *(long *)(param_2 + 0x68) + (ulong)*(uint *)(param_2 + 0x70) * 0x10);
      }
      uVar8 = (ulong)*(uint *)(param_2 + 0x90);
      *(undefined4 *)(param_2 + 0x70) = 0;
      if (*(uint *)(param_2 + 0x90) != 0) {
        lVar9 = *(long *)(param_2 + 0x88);
        lVar7 = lVar9;
        do {
          if (*(long *)(lVar7 + 8) != 0) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            FUN_004047f0(*(undefined4 *)puVar5);
            *(undefined8 *)(lVar7 + 8) = 0;
            *(undefined4 *)(lVar7 + 0x14) = 0;
            lVar9 = *(long *)(param_2 + 0x88);
            uVar8 = (ulong)*(uint *)(param_2 + 0x90);
          }
          lVar7 = lVar7 + 0x18;
        } while (lVar7 != lVar9 + uVar8 * 0x18);
      }
      *(undefined4 *)(param_2 + 0x90) = 0;
    }
  }
  return iVar6;
}


