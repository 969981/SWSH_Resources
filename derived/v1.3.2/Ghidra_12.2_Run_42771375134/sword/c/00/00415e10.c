/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00415e10; name: FUN_00415e10
 */


/* WARNING: Removing unreachable block (ram,0x00415ebc) */
/* WARNING: Removing unreachable block (ram,0x00415ff8) */

undefined8 * FUN_00415e10(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_02712a90;
  if (DAT_02737a08 == 0) {
    if (DAT_02737a0c == 0) {
      puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x40);
      uVar3 = DAT_02737a08;
      if (puVar6 == (undefined4 *)0x0) goto LAB_00415f48;
      if ((DAT_02737a00 == (undefined4 *)0x0) || (DAT_02737a00 == puVar6)) {
        DAT_02737a0c = 0x10;
        DAT_02737a00 = puVar6;
      }
      else {
        uVar7 = (ulong)DAT_02737a08;
        if ((DAT_02737a08 != 0) && (bVar5 = DAT_02737a08 != 1, *puVar6 = *DAT_02737a00, bVar5)) {
          uVar1 = ~uVar3 & 1;
          if (uVar3 == 2) {
            lVar8 = 1;
          }
          else {
            lVar4 = 0;
            do {
              lVar8 = lVar4;
              puVar6[lVar8 + 1] = DAT_02737a00[lVar8 + 1];
              puVar6[lVar8 + 2] = DAT_02737a00[lVar8 + 2];
              lVar4 = lVar8 + 2;
            } while ((uVar7 - 1) - (ulong)uVar1 != lVar8 + 2);
            lVar8 = lVar8 + 3;
            if (uVar1 == 0) goto LAB_00415f34;
          }
          puVar6[lVar8] = DAT_02737a00[lVar8];
        }
LAB_00415f34:
        FUN_00404870(*(undefined4 *)puVar2,DAT_02737a00);
        DAT_02737a0c = 0x10;
        DAT_02737a00 = puVar6;
      }
    }
    uVar7 = (ulong)DAT_02737a08;
    DAT_02737a08 = DAT_02737a08 + 1;
    if (DAT_02737a00 + uVar7 != (undefined4 *)0x0) {
      DAT_02737a00[uVar7] = 0xffffffff;
    }
  }
LAB_00415f48:
  puVar2 = PTR_DAT_02712a90;
  DAT_02737a20 = 0;
  DAT_02737a30 = DAT_02737a30 & 0xc0 | 0x27;
  DAT_02737a28 = 0;
  if (DAT_02737a18 != 0) goto LAB_00416078;
  if (DAT_02737a1c == 0) {
    puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x40);
    uVar3 = DAT_02737a18;
    if (puVar6 == (undefined4 *)0x0) goto LAB_00416078;
    if ((DAT_02737a10 == (undefined4 *)0x0) || (DAT_02737a10 == puVar6)) {
      DAT_02737a1c = 0x10;
      DAT_02737a10 = puVar6;
    }
    else {
      uVar7 = (ulong)DAT_02737a18;
      if ((DAT_02737a18 != 0) && (bVar5 = DAT_02737a18 != 1, *puVar6 = *DAT_02737a10, bVar5)) {
        uVar1 = ~uVar3 & 1;
        if (uVar3 == 2) {
          lVar8 = 1;
        }
        else {
          lVar4 = 0;
          do {
            lVar8 = lVar4;
            puVar6[lVar8 + 1] = DAT_02737a10[lVar8 + 1];
            puVar6[lVar8 + 2] = DAT_02737a10[lVar8 + 2];
            lVar4 = lVar8 + 2;
          } while ((uVar7 - 1) - (ulong)uVar1 != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if (uVar1 == 0) goto LAB_00416064;
        }
        puVar6[lVar8] = DAT_02737a10[lVar8];
      }
LAB_00416064:
      FUN_00404870(*(undefined4 *)puVar2,DAT_02737a10);
      DAT_02737a1c = 0x10;
      DAT_02737a10 = puVar6;
    }
  }
  uVar7 = (ulong)DAT_02737a18;
  DAT_02737a18 = DAT_02737a18 + 1;
  if (DAT_02737a10 + uVar7 != (undefined4 *)0x0) {
    DAT_02737a10[uVar7] = 0xffffffff;
  }
LAB_00416078:
  DAT_02737a34 = 0;
  DAT_02737a3c = 0;
  DAT_02737a44 = 0;
  DAT_02737a50 = 0;
  DAT_02737a58 = 0;
  DAT_02737a48 = DAT_02737a48 & 0xe0;
  return &DAT_02737a00;
}


