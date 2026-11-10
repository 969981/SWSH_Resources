/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059a3b0; name: FUN_0059a3b0
 */


undefined8
FUN_0059a3b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (param_5 == (undefined8 *)0x0) {
    uVar9 = 0xfffffffa;
  }
  else {
    *param_5 = 0;
    puVar4 = (undefined8 *)FUN_0054f450(param_2,*(undefined8 *)(param_1 + 0x30),param_7 & 1);
    puVar2 = PTR_PTR_02713988;
    if (puVar4 == (undefined8 *)0x0) {
      uVar9 = 0xffffffff;
    }
    else {
      plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x80,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceEffect.cpp",0x576,
                                    0);
      FUN_005463e0(plVar5,param_1);
      puVar3 = PTR_DAT_02713cb0;
      plVar5[0xc] = 0;
      plVar5[0xd] = 0;
      plVar5[0xe] = 0;
      *plVar5 = (long)(puVar3 + 0x10);
      *(undefined4 *)((long)plVar5 + 0xc) = 10;
      *param_5 = plVar5;
      plVar5[0xf] = (long)puVar4;
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      plVar5[9] = 0;
      lVar6 = plVar5[0xc];
      lVar7 = plVar5[0xd];
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      if (0 < (int)((ulong)(lVar7 - lVar6) >> 3)) {
        lVar10 = 0;
        do {
          lVar8 = *(long *)(lVar6 + lVar10 * 8);
          if (lVar8 != 0) {
            uVar9 = *(undefined8 *)puVar2;
            FUN_00551380(lVar8 + 8);
            FUN_005b9b10(uVar9,lVar8);
            *(undefined8 *)(plVar5[0xc] + lVar10 * 8) = 0;
            lVar6 = plVar5[0xc];
            lVar7 = plVar5[0xd];
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)((ulong)(lVar7 - lVar6) >> 3));
      }
      plVar5[0xd] = lVar6;
      *(int *)((long)plVar5 + 0x54) =
           (int)((ulong)(*(long *)(plVar5[0xf] + 0x300) - *(long *)(plVar5[0xf] + 0x2f8)) >> 3);
      iVar1 = *(int *)(puVar4 + 1);
      *(int *)(puVar4 + 1) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        uVar9 = *(undefined8 *)puVar2;
        (**(code **)*puVar4)(puVar4);
        FUN_005b9b10(uVar9,puVar4);
      }
      uVar9 = 0;
    }
  }
  return uVar9;
}


