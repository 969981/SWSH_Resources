/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ccbe0; name: FUN_005ccbe0
 */


undefined8 FUN_005ccbe0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_178 [128];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_50;
  
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  if ((int)param_1[4] != 1) {
    return 1;
  }
  if (param_2 == 0) {
    if (param_1[3] == 0) {
      plVar5 = (long *)FUN_005bf860();
      param_2 = (**(code **)(*plVar5 + 0x60))();
      goto LAB_005ccc18;
    }
    FUN_005cd260(param_1);
    lVar9 = param_1[0x16];
  }
  else {
LAB_005ccc18:
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    FUN_005cd260(param_1);
    lVar9 = param_1[0x16];
  }
  if (lVar9 == 0) {
    plVar5 = (long *)param_1[0x14];
    if (plVar5 != (long *)0x0) {
      lVar9 = param_1[0x15];
      puVar6 = (undefined8 *)
               (**(code **)(*plVar5 + 0x40))
                         (plVar5,8,1,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      if (puVar6 != (undefined8 *)0x0) {
        if (lVar9 != 0) {
          *puVar6 = *(undefined8 *)param_1[0x18];
        }
        if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (param_1[0x18] != 0)) {
          plVar5 = (long *)param_1[0x14];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,param_1[0x18],"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          param_1[0x18] = 0;
        }
        param_1[0x19] = 0;
        param_1[0x1c] = 0;
        param_1[0x1a] = 0;
        param_1[0x18] = (long)puVar6;
        param_1[0x15] = (ulong)(lVar9 != 0);
        param_1[0x16] = 1;
        if (lVar9 == 0) {
          param_1[0x19] = 0;
          param_1[0x1a] = 0;
        }
        else {
          param_1[0x19] = (long)puVar6;
          param_1[0x1a] = (long)(puVar6 + (lVar9 != 0));
        }
        goto LAB_005ccd0c;
      }
    }
    param_1[0x15] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
LAB_005ccd0c:
  plVar5 = (long *)FUN_005bf860();
  lVar9 = (**(code **)(*plVar5 + 0x78))();
  if (lVar9 == 0) {
    return 0;
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x78,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x706);
  FUN_005f69d0(lVar9,param_1[3]);
  param_1[0x56] = lVar9;
  if (((lVar9 != 0) && (uVar7 = FUN_005f6d20(lVar9), (uVar7 & 1) == 0)) &&
     ((long *)param_1[0x56] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x56] + 0x18))();
    param_1[0x56] = 0;
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x1a8,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x166);
  FUN_005e3700(lVar9,param_1[3]);
  param_1[6] = lVar9;
  FUN_005e3ce0(lVar9);
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x248,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x169);
  FUN_005d9b00(lVar9,param_1[3]);
  param_1[7] = lVar9;
  FUN_005da530(lVar9);
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x18,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x16c);
  FUN_005eac80(lVar9,param_1[3]);
  param_1[8] = lVar9;
  FUN_005ead00(lVar9);
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x18,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x16f);
  FUN_005d31b0(lVar9,param_1[3]);
  param_1[9] = lVar9;
  FUN_005d3230(lVar9);
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x68,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x172);
  FUN_005d2c50(lVar9,param_1[3]);
  param_1[10] = lVar9;
  FUN_005d2f00(lVar9);
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0xb8,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x175);
  FUN_005d0ea0(lVar9,param_1[3]);
  param_1[0xb] = lVar9;
  FUN_005d1200(lVar9);
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x2a0,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp",
                     0x178);
  FUN_005e1c80(lVar9,param_1[3]);
  param_1[0xc] = lVar9;
  FUN_005e24b0(lVar9);
  plVar5 = (long *)param_1[3];
  plVar12 = (long *)param_1[0x4c];
  if (plVar12 == plVar5) {
    if (0xff < (ulong)param_1[0x4e]) goto LAB_005cd158;
  }
  else {
    plVar1 = param_1 + 0x50;
    if (((*(byte *)(param_1 + 0x54) & 1) == 0) && (lVar9 = *plVar1, lVar9 != 0)) {
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x50))(plVar12,lVar9);
        (**(code **)(*plVar12 + 0x48))
                  (plVar12,lVar9,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x54] = 0;
    *plVar1 = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x4c] = (long)plVar5;
  }
  if (plVar5 != (long *)0x0) {
    uVar13 = param_1[0x4d];
    lVar9 = (**(code **)(*plVar5 + 0x40))
                      (plVar5,0x10,0x100,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
    uVar7 = uVar13;
    if (0xff < uVar13) {
      uVar7 = 0x100;
    }
    if (lVar9 != 0) {
      if (uVar7 != 0) {
        uVar4 = 0xfffffffffffffeff;
        if (0xfffffffffffffeff < ~uVar13) {
          uVar4 = ~uVar13;
        }
        uVar10 = uVar7 & 3;
        if (-uVar4 - 2 < 3) {
          lVar11 = 0;
        }
        else {
          uVar4 = 0xfffffffffffffeff;
          if (0xfffffffffffffeff < ~uVar13) {
            uVar4 = ~uVar13;
          }
          lVar14 = 0;
          lVar11 = 0;
          do {
            puVar6 = (undefined8 *)(lVar9 + lVar14);
            uVar8 = ((undefined8 *)(param_1[0x50] + lVar14))[1];
            lVar11 = lVar11 + 4;
            *puVar6 = *(undefined8 *)(param_1[0x50] + lVar14);
            puVar6[1] = uVar8;
            uVar8 = *(undefined8 *)(param_1[0x50] + lVar14 + 0x18);
            puVar6[2] = *(undefined8 *)(param_1[0x50] + lVar14 + 0x10);
            puVar6[3] = uVar8;
            uVar8 = *(undefined8 *)(param_1[0x50] + lVar14 + 0x28);
            puVar6[4] = *(undefined8 *)(param_1[0x50] + lVar14 + 0x20);
            puVar6[5] = uVar8;
            lVar2 = param_1[0x50] + lVar14;
            lVar14 = lVar14 + 0x40;
            uVar8 = *(undefined8 *)(lVar2 + 0x38);
            puVar6[6] = *(undefined8 *)(lVar2 + 0x30);
            puVar6[7] = uVar8;
          } while (~uVar4 - uVar10 != lVar11);
        }
        if (uVar10 != 0) {
          lVar11 = lVar11 << 4;
          lVar14 = -uVar10;
          do {
            puVar6 = (undefined8 *)(param_1[0x50] + lVar11);
            puVar3 = (undefined8 *)(lVar9 + lVar11);
            uVar8 = puVar6[1];
            lVar11 = lVar11 + 0x10;
            lVar14 = lVar14 + 1;
            *puVar3 = *puVar6;
            puVar3[1] = uVar8;
          } while (lVar14 != 0);
        }
      }
      if (((*(byte *)(param_1 + 0x54) & 1) == 0) && (lVar14 = param_1[0x50], lVar14 != 0)) {
        plVar5 = (long *)param_1[0x4c];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x50))(plVar5,lVar14);
          (**(code **)(*plVar5 + 0x48))
                    (plVar5,lVar14,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        param_1[0x50] = 0;
      }
      param_1[0x54] = 0;
      param_1[0x52] = 0;
      param_1[0x51] = 0;
      param_1[0x50] = lVar9;
      param_1[0x4d] = uVar7;
      param_1[0x4e] = 0x100;
      if (uVar7 == 0) {
        param_1[0x51] = 0;
        param_1[0x52] = 0;
      }
      else {
        param_1[0x51] = lVar9;
        param_1[0x52] = lVar9 + uVar7 * 0x10;
      }
      goto LAB_005cd158;
    }
  }
  param_1[0x4d] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
LAB_005cd158:
  uVar8 = FUN_005cd350(param_1);
  FUN_005cd540(uVar8,param_1[3]);
  plVar5 = (long *)FUN_0067d0e0();
  local_f8 = 3;
  uStack_f0 = 0xb00000000;
  (**(code **)(*plVar5 + 0x98))(plVar5,PTR_DAT_02713fb0,*(undefined8 *)PTR_PTR_02713fd0,&local_f8);
  plVar5 = (long *)FUN_0067d0e0();
  local_f8 = 3;
  uStack_f0 = 0x200000000;
  (**(code **)(*plVar5 + 0x98))(plVar5,PTR_DAT_02713fb8,*(undefined8 *)PTR_PTR_02713fd8,&local_f8);
  plVar5 = (long *)FUN_0067d0e0();
  local_f8 = 3;
  uStack_f0 = 0x100000000;
  (**(code **)(*plVar5 + 0x98))(plVar5,PTR_DAT_02713fc0,*(undefined8 *)PTR_PTR_02713fe0,&local_f8);
  (**(code **)(*(long *)param_1[3] + 0x58))((long *)param_1[3],auStack_78);
  FUN_005c59e0(&local_f8,0x80,local_70);
  FUN_005c59e0(auStack_178,0x80,local_50);
  return 1;
}


