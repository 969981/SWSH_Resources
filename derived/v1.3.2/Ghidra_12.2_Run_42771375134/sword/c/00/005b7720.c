/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b7720; name: FUN_005b7720
 */


undefined8 FUN_005b7720(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined5 uStack_74;
  undefined3 local_6f;
  undefined5 uStack_6c;
  
  FUN_005528d0(&local_88,param_1 + 0x10,"::m_pLuminanceTexture");
  puVar2 = PTR_PTR_02713988;
  uVar4 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                       "C:/workspace/YEBIS_draft/src/GPU/GPUTextureLuminance.cpp",0x97,0);
  FUN_0059aa70(uVar4,local_80);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  FUN_00551380(&local_88);
  *(undefined4 *)(param_1 + 0x60) = param_4;
  local_88 = 0x100004400;
  local_80 = 0x1c00000001;
  local_78 = 1;
  uStack_6c = 0;
  uStack_74 = 0;
  local_6f = 0;
  uVar4 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x30),&local_88);
  if (-1 < (int)uVar4) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (param_2 != 0) {
      dVar10 = log((double)(long)*(int *)(param_2 + 0x54));
      dVar12 = DAT_01cd5460;
      dVar10 = ldexp(1.0,(int)(dVar10 / DAT_01cd5460));
      if (param_3 < 3) {
        param_3 = 2;
      }
      dVar11 = log((double)(long)*(int *)(param_2 + 0x58));
      dVar12 = ldexp(1.0,(int)(dVar11 / dVar12));
      fVar8 = 1.0 / (float)(uint)(int)dVar10;
      if (1.0 / (float)(uint)(int)dVar10 <= 1.0 / (float)(uint)(int)dVar12) {
        fVar8 = 1.0 / (float)(uint)(int)dVar12;
      }
      fVar8 = logf(fVar8);
      fVar9 = logf(1.0 / (float)param_3);
      uVar1 = (int)(fVar8 / fVar9) - 1;
      *(uint *)(param_1 + 0x80) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      puVar3 = PTR_DAT_027139b0;
      if (1 < (int)(fVar8 / fVar9)) {
        iVar6 = *(int *)PTR_DAT_027139b0;
        if (iVar6 < 1) {
          plVar7 = (long *)FUN_005b9a50(*(undefined8 *)puVar2,0x29c08,"../src/GPU\\GPUClassUtil.h",
                                        0x49,0);
          FUN_0056dc10(plVar7,0);
          *(long **)PTR_DAT_027139b8 = plVar7;
          *(undefined4 *)puVar3 = 1;
        }
        else {
          plVar7 = *(long **)PTR_DAT_027139b8;
          *(int *)PTR_DAT_027139b0 = iVar6 + 1;
          if (1 < iVar6 + 1) goto LAB_005b7950;
        }
        if (plVar7 == (long *)0x0) {
          iVar6 = 0;
        }
        else {
          uVar4 = *(undefined8 *)puVar2;
          (**(code **)(*plVar7 + 0x20))(plVar7);
          FUN_005b9b10(uVar4,plVar7);
          iVar6 = 0;
          *(undefined8 *)PTR_DAT_027139b8 = 0;
        }
LAB_005b7950:
        *(int *)puVar3 = iVar6;
        iVar6 = *(int *)(param_1 + 0x80);
        plVar5 = (long *)FUN_005b9a50(*(undefined8 *)puVar2,(long)iVar6 * 8 + 8,
                                      "C:/workspace/YEBIS_draft/src/GPU/GPUTextureLuminance.cpp",
                                      0xdf,0);
        plVar7 = plVar5;
        if (plVar5 != (long *)0x0) {
          plVar7 = plVar5 + 1;
          *plVar5 = (long)iVar6;
        }
        *(long **)(param_1 + 0x78) = plVar7;
                    /* WARNING: Subroutine does not return */
        memset(plVar7,0,(long)*(int *)(param_1 + 0x80) << 3);
      }
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x98) = 2;
  }
  return uVar4;
}


