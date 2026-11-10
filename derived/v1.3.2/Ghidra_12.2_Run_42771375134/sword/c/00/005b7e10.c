/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b7e10; name: FUN_005b7e10
 */


undefined8 FUN_005b7e10(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar1 = PTR_DAT_027139b0;
  iVar3 = *(int *)PTR_DAT_027139b0;
  if (iVar3 < 1) {
    plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar4,0);
    *(long **)PTR_DAT_027139b8 = plVar4;
    *(undefined4 *)puVar1 = 1;
joined_r0x005b7f04:
    if (plVar4 == (long *)0x0) {
      *(undefined4 *)puVar1 = 0;
      iVar3 = *(int *)(param_1 + 0x80);
      goto joined_r0x005b7f18;
    }
    uVar5 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar4 + 0x20))(plVar4);
    FUN_005b9b10(uVar5,plVar4);
    iVar3 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
  else {
    plVar4 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (iVar3 + 1 < 2) goto joined_r0x005b7f04;
  }
  *(int *)puVar1 = iVar3;
  iVar3 = *(int *)(param_1 + 0x80);
joined_r0x005b7f18:
  if (0 < iVar3) {
    lVar7 = 0;
    bVar8 = false;
    lVar2 = param_2;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x78) + lVar7 * 8);
      if (*(uint *)(lVar6 + 0x54) < *(uint *)(lVar2 + 0x54)) {
        bVar8 = true;
        local_80 = 0x3f8000003f800000;
        uStack_78 = 0x3f8000003f800000;
        local_90 = 0;
        uStack_88 = 0;
        FUN_0057e050(0,0,0,0x3f800000,plVar4,lVar2,lVar6,0,&local_80,0,0,0,1,&local_90,0,0xffffffff)
        ;
        iVar3 = *(int *)(param_1 + 0x80);
        lVar2 = lVar6;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar3);
    if (!bVar8) {
      lVar6 = param_2;
    }
    param_2 = lVar6;
  }
  *(long *)(param_1 + 0x88) = param_2;
  return 0;
}


