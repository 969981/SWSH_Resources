/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040df30; name: FUN_0040df30
 */


undefined8 FUN_0040df30(long param_1,long param_2,uint param_3)

{
  double *pdVar1;
  uint uVar2;
  double dVar3;
  undefined *puVar4;
  long lVar5;
  double *pdVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  double dVar11;
  double dVar12;
  
  puVar4 = PTR_DAT_02712a90;
  lVar5 = *(long *)(param_1 + 0xe8);
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0xf0) != 0) {
      lVar8 = (ulong)*(uint *)(param_1 + 0xf0) << 4;
      plVar10 = (long *)(lVar5 + 8);
      do {
        if (*plVar10 != 0) {
          FUN_00404870(*(undefined4 *)puVar4);
        }
        lVar8 = lVar8 + -0x10;
        plVar10 = plVar10 + 2;
      } while (lVar8 != 0);
      lVar5 = *(long *)(param_1 + 0xe8);
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar5);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (param_3 != 0) {
    uVar9 = (ulong)param_3;
    lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar9 << 4);
    *(long *)(param_1 + 0xe8) = lVar5;
    if (lVar5 == 0) {
      return 2;
    }
    *(uint *)(param_1 + 0xf4) = param_3;
    puVar4 = PTR_DAT_02712b38;
    dVar3 = DAT_01cd5288;
    pdVar6 = (double *)(param_2 + 8);
    do {
      uVar2 = *(uint *)(param_1 + 0xf0);
      if (uVar2 < *(uint *)(param_1 + 0xf4)) {
        *(uint *)(param_1 + 0xf0) = uVar2 + 1;
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (ulong)uVar2 * 0x10);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
      }
      else {
        puVar7 = (undefined8 *)0x0;
      }
      *(undefined4 *)puVar7 = *(undefined4 *)(pdVar6 + -1);
      dVar11 = (double)NEON_ucvtf((ulong)*(uint *)puVar4);
      dVar11 = *pdVar6 * dVar3 * dVar11;
      dVar12 = 0.5;
      if (dVar11 <= 0.0) {
        dVar12 = -0.5;
      }
      uVar9 = uVar9 - 1;
      *(int *)((long)puVar7 + 4) = (int)(dVar12 + dVar11);
      pdVar1 = pdVar6 + 1;
      pdVar6 = pdVar6 + 3;
      puVar7[1] = *pdVar1;
    } while (uVar9 != 0);
  }
  return 1;
}


