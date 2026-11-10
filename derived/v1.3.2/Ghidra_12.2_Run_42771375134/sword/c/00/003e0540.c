/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e0540; name: FUN_003e0540
 */


void FUN_003e0540(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  byte local_68 [8];
  
  if (*(float *)(param_1 + 0x7b8) != 0.0) {
    lVar1 = param_1 + 0x1538;
    FUN_001b18e0(lVar1);
    FUN_0018fea0(lVar1);
    if ((*(byte *)(param_1 + 0x110c) >> 2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x16a8) = 1;
      *(long *)(param_1 + 0x16a0) = lVar1;
      (**(code **)(*(long *)(param_1 + 0x1538) + 0x20))(lVar1);
      *(undefined8 *)(param_1 + 0x1698) = *(undefined8 *)(*(long *)(param_1 + 0x16a0) + 0x10);
    }
    else {
      lVar11 = param_1 + 0x15e8;
      *(undefined4 *)(param_1 + 0x1608) = 1;
      *(long *)(param_1 + 0x1600) = lVar1;
      (**(code **)(*(long *)(param_1 + 0x1538) + 0x20))(lVar1);
      *(undefined8 *)(param_1 + 0x15f8) = *(undefined8 *)(*(long *)(param_1 + 0x1600) + 0x10);
      *(undefined4 *)(param_1 + 0x16a8) = 1;
      *(long *)(param_1 + 0x16a0) = lVar11;
      (**(code **)(*(long *)(param_1 + 0x15e8) + 0x20))(lVar11);
      *(undefined8 *)(param_1 + 0x1698) = *(undefined8 *)(*(long *)(param_1 + 0x16a0) + 0x10);
      (**(code **)(**(long **)(param_1 + 0x15f8) + 0xa0))(*(long **)(param_1 + 0x15f8),lVar11);
    }
    plVar2 = (long *)(param_1 + 0x16f8);
    *(undefined4 *)(param_1 + 0x1718) = 1;
    *(long *)(param_1 + 0x1710) = param_1 + 0x1688;
    (**(code **)(*(long *)(param_1 + 0x1688) + 0x20))();
    *(undefined8 *)(param_1 + 0x1708) = *(undefined8 *)(*(long *)(param_1 + 0x1710) + 0x10);
    if (*(long *)(param_1 + 0x928) == 0) {
LAB_003e06f4:
      pcVar9 = *(code **)(*plVar2 + 0x20);
      plVar8 = plVar2;
      plVar12 = plVar2;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x8f8);
      uVar10 = 0;
      do {
        if (*(uint *)(param_1 + 0x924) <= uVar10) goto LAB_003e06f4;
        FUN_003b17c0(local_68,*(undefined8 *)(lVar11 + uVar10 * 8));
        uVar10 = uVar10 + 1;
      } while ((local_68[0] >> 3 & 1) == 0);
      plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x928) + 0x20))
                                 (*(undefined4 *)(param_1 + 0x7b8),*(long **)(param_1 + 0x928),
                                  plVar2);
      *(undefined4 *)(param_1 + 0x12e0) = 1;
      *(long **)(param_1 + 0x12d8) = plVar8;
      (**(code **)(*plVar8 + 0x20))();
      *(undefined8 *)(param_1 + 0x12d0) = *(undefined8 *)(*(long *)(param_1 + 0x12d8) + 0x10);
      pcVar9 = *(code **)(*plVar8 + 0x28);
      plVar12 = (long *)(param_1 + 0x12c0);
    }
    (*pcVar9)(plVar8);
    lVar11 = param_1 + 0x17a0;
    *(undefined4 *)(param_1 + 0x17c0) = 1;
    *(long **)(param_1 + 0x17b8) = plVar12;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    *(undefined8 *)(param_1 + 0x17b0) = *(undefined8 *)(*(long *)(param_1 + 0x17b8) + 0x10);
    *(undefined4 *)(param_1 + 0x17f8) = 1;
    *(long *)(param_1 + 0x17f0) = lVar11;
    lVar3 = param_1 + 0x17d8;
    (**(code **)(*(long *)(param_1 + 0x17a0) + 0x20))(lVar11);
    *(undefined8 *)(param_1 + 0x17e8) = *(undefined8 *)(*(long *)(param_1 + 0x17f0) + 0x10);
    *(undefined4 *)(param_1 + 0x1788) = 1;
    *(long *)(param_1 + 0x1780) = lVar3;
    lVar4 = param_1 + 0x1768;
    (**(code **)(*(long *)(param_1 + 0x17d8) + 0x20))(lVar3);
    *(undefined8 *)(param_1 + 0x1778) = *(undefined8 *)(*(long *)(param_1 + 0x1780) + 0x10);
    *(undefined4 *)(param_1 + 0x1750) = 1;
    *(long *)(param_1 + 0x1748) = lVar4;
    lVar5 = param_1 + 0x1730;
    (**(code **)(*(long *)(param_1 + 0x1768) + 0x20))(lVar4);
    *(undefined8 *)(param_1 + 0x1740) = *(undefined8 *)(*(long *)(param_1 + 0x1748) + 0x10);
    *(undefined4 *)(param_1 + 0x1a28) = 1;
    *(long *)(param_1 + 0x1a20) = lVar5;
    lVar6 = param_1 + 0x1a08;
    (**(code **)(*(long *)(param_1 + 0x1730) + 0x20))(lVar5);
    *(undefined8 *)(param_1 + 0x1a18) = *(undefined8 *)(*(long *)(param_1 + 0x1a20) + 0x10);
    *(undefined4 *)(param_1 + 0x1a60) = 1;
    *(long *)(param_1 + 0x1a58) = lVar6;
    (**(code **)(*(long *)(param_1 + 0x1a08) + 0x20))(lVar6);
    *(undefined8 *)(param_1 + 0x1a50) = *(undefined8 *)(*(long *)(param_1 + 0x1a58) + 0x10);
    lVar7 = param_1 + 0x1330;
    FUN_001b18e0(lVar7,param_1 + 0x1a40);
    FUN_0018fea0(lVar7);
    *(undefined4 *)(param_1 + 0x1318) = 1;
    *(long *)(param_1 + 0x1310) = lVar7;
    (**(code **)(*(long *)(param_1 + 0x1330) + 0x20))(lVar7);
    *(undefined8 *)(param_1 + 0x1308) = *(undefined8 *)(*(long *)(param_1 + 0x1310) + 0x10);
    FUN_0018fea0(lVar1);
    (**(code **)(**(long **)(param_1 + 0x1698) + 0xa0))
              (*(long **)(param_1 + 0x1698),param_1 + 0x1688);
    (**(code **)(**(long **)(param_1 + 0x1708) + 0xa0))(*(long **)(param_1 + 0x1708),plVar2);
    (**(code **)(*plVar12 + 0x28))(plVar12);
    (**(code **)(**(long **)(param_1 + 0x17b0) + 0xa0))(*(long **)(param_1 + 0x17b0),lVar11);
    (**(code **)(**(long **)(param_1 + 0x17e8) + 0xa0))(*(long **)(param_1 + 0x17e8),lVar3);
    (**(code **)(**(long **)(param_1 + 0x1778) + 0xa0))(*(long **)(param_1 + 0x1778),lVar4);
    (**(code **)(**(long **)(param_1 + 0x1740) + 0xa0))(*(long **)(param_1 + 0x1740),lVar5);
    (**(code **)(**(long **)(param_1 + 0x1a18) + 0xa0))(*(long **)(param_1 + 0x1a18),lVar6);
    (**(code **)(**(long **)(param_1 + 0x1a50) + 0xa0))
              (*(long **)(param_1 + 0x1a50),param_1 + 0x1a40);
    FUN_0018fea0(lVar7);
    (**(code **)(**(long **)(param_1 + 0x1308) + 0xa0))
              (*(long **)(param_1 + 0x1308),param_1 + 0x12f8);
  }
  return;
}


