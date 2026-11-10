/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00557fb0; name: FUN_00557fb0
 */


undefined8 FUN_00557fb0(long param_1,long param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar3 = PTR_DAT_027139b0;
  iVar7 = *(int *)PTR_DAT_027139b0;
  if (iVar7 < 1) {
    plVar10 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar10,0);
    *(long **)PTR_DAT_027139b8 = plVar10;
    *(undefined4 *)puVar3 = 1;
    if (plVar10 != (long *)0x0) goto LAB_00558018;
LAB_00558124:
    *(undefined4 *)puVar3 = 0;
    iVar7 = *(int *)(param_1 + 0x308);
  }
  else {
    plVar10 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar7 + 1;
    if (iVar7 + 1 < 2) {
      if (plVar10 == (long *)0x0) goto LAB_00558124;
LAB_00558018:
      uVar11 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      FUN_005b9b10(uVar11,plVar10);
      iVar7 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
    *(int *)puVar3 = iVar7;
    iVar7 = *(int *)(param_1 + 0x308);
  }
  if (0 < iVar7) {
    iVar2 = *(int *)(param_2 + 0x38);
    uVar1 = 0;
    if (iVar2 - 2U < 0x28) {
      uVar1 = (uint)(0xc0000c4011 >> ((ulong)(iVar2 - 2U) & 0x3f)) & 1;
    }
    if ((((0x39 < iVar2 - 10U) || ((1L << ((ulong)(iVar2 - 10U) & 0x3f) & 0x200100001000001U) == 0))
        && (((uint)(iVar2 != 0x1a) & (uVar1 ^ 0xffffffff)) != 0)) ||
       ((uVar4 = FUN_00538690(*(undefined4 *)(**(long **)(param_1 + 0x300) + 0x38)),
        (uVar4 & 1) == 0 && (iVar7 = *(int *)(param_1 + 0x308), 0 < iVar7)))) {
      lVar8 = 0;
      bVar9 = false;
      lVar6 = param_2;
      do {
        lVar12 = *(long *)(*(long *)(param_1 + 0x300) + lVar8 * 8);
        if (*(uint *)(lVar12 + 0x54) < *(uint *)(lVar6 + 0x54)) {
          bVar9 = true;
          local_80 = 0x3f8000003f800000;
          uStack_78 = 0x3f8000003f800000;
          local_90 = 0;
          uStack_88 = 0;
          FUN_0057e050(0,0,0,0x3f800000,plVar10,lVar6,lVar12,0,&local_80,0,0,0,1,&local_90,0,
                       0xffffffff);
          iVar7 = *(int *)(param_1 + 0x308);
          lVar6 = lVar12;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar7);
      if (!bVar9) {
        lVar12 = param_2;
      }
      lVar8 = *(long *)(param_1 + 0x2f0);
      iVar7 = *(int *)(lVar8 + 0x30);
      goto joined_r0x00558144;
    }
  }
  lVar8 = *(long *)(param_1 + 0x2f0);
  iVar7 = *(int *)(lVar8 + 0x30);
  lVar12 = param_2;
joined_r0x00558144:
  if (iVar7 < 3) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10);
  }
  if (param_3 == 0) {
    FUN_00557810(param_1,lVar12,uVar11);
  }
  else {
    if (iVar7 < 2) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 8);
    }
    FUN_00557810(param_1,lVar12,uVar11);
    if (*(int *)(*(long *)(param_1 + 0x2f0) + 0x30) < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0x38) + 0x10);
    }
    FUN_00590620(plVar10,uVar5,uVar11,param_4,param_3,0);
  }
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  FUN_00540da0(*(undefined8 *)(param_1 + 0x20),0);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x170))(*(long **)(param_1 + 0x20),0);
  return 0;
}


