/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fc950; name: FUN_005fc950
 */


undefined8 FUN_005fc950(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  uVar8 = (**(code **)PTR_DAT_02714498)(param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(undefined8 *)(param_1 + 0x388) = uVar8;
  *(undefined8 *)(param_1 + 0xc0) = *param_3;
  uVar8 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0xd8) = param_3[3];
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  *(undefined8 *)(param_1 + 200) = uVar8;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  uVar8 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[8];
  *(undefined8 *)(param_1 + 0xf8) = param_3[7];
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  *(undefined8 *)(param_1 + 0xe8) = uVar8;
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  lVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                    (*(long **)(param_1 + 0x10),0x180,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                     ,0x110);
  *(long *)(param_1 + 0x198) = lVar9;
  uVar8 = 0;
  if (lVar9 != 0) {
    *(undefined1 *)(param_1 + 0x398) = 1;
    FUN_005fc580(param_1);
    FUN_005fc840(param_1);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x11c);
    if (0 < *(int *)(param_1 + 0x11c)) {
      lVar9 = 0;
      do {
        plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                                    (*(long **)(param_1 + 0x10),0x30,0x10,
                                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                                     ,0x503);
        FUN_00655170(plVar10,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
        FUN_00655210(plVar10,1);
        (**(code **)(*plVar10 + 0x40))(plVar10);
        lVar3 = param_1 + lVar9 * 8;
        uVar8 = *(undefined8 *)(lVar3 + 0x150);
        puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x50))(plVar10);
        *puVar11 = uVar8;
        (**(code **)(*plVar10 + 0x48))(plVar10);
        *(long **)(lVar3 + 0x178) = plVar10;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x170));
    }
    uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2a8))();
    lVar9 = param_1 + 0x348;
    cVar7 = (**(code **)PTR_DAT_02714478)(lVar9,uVar8);
    if (cVar7 == '\x01') {
      iVar1 = *(int *)((long)param_3 + 0x1c) + 2;
      (**(code **)PTR_DAT_02714480)(*(undefined8 *)(param_1 + 0x198),lVar9,param_1 + 0x114);
      iVar2 = *(int *)(param_1 + 0x114) + 1;
      iVar6 = 0;
      if (iVar1 != 0) {
        iVar6 = iVar2 / iVar1;
      }
      *(int *)(param_1 + 0x118) = iVar2 - iVar6 * iVar1;
      (**(code **)PTR_DAT_02714488)(lVar9,0xffffffffffffffff);
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}


