/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ee340; name: FUN_005ee340
 */


undefined8 FUN_005ee340(int param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  void *__dest;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong __n;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uVar14;
  
  uVar4 = param_1 - 0x46;
  if (uVar4 < 0x23) {
    iVar10 = *(int *)(&DAT_02123f10 + (long)(int)uVar4 * 4);
  }
  else {
    iVar10 = 0;
  }
  param_3 = param_3 >> 2;
  if (param_3 < 2) {
    param_3 = 1;
  }
  uVar1 = param_4 >> 2;
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  plVar6 = (long *)FUN_005cbff0();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
  uVar7 = 0;
  if (plVar6 != (long *)0x0) {
    uVar3 = iVar10 * param_3;
    __n = (ulong)uVar3;
    __dest = (void *)(**(code **)(*plVar6 + 0x40))
                               (plVar6,1,__n,0xffffffff,
                                "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Utility.cpp"
                                ,0x1c3d);
    uVar7 = 0;
    if (__dest != (void *)0x0) {
      uVar2 = uVar1 >> 1;
      uVar8 = (ulong)uVar2;
      if (uVar2 != 0) {
        uVar5 = param_1 - 0x46;
        if (uVar5 == 0) {
          uVar14 = 0;
          do {
            pvVar13 = (void *)(param_2 + (ulong)(uVar3 * (uint)uVar14));
            pvVar12 = (void *)(param_2 + (long)(int)(uVar1 + ~(uint)uVar14) * (long)(int)uVar3);
            memcpy(__dest,pvVar12,__n);
            memcpy(pvVar12,pvVar13,__n);
            memcpy(pvVar13,__dest,__n);
            iVar10 = param_3;
            do {
              FUN_005ee710(0x46,pvVar13);
              pvVar13 = (void *)((long)pvVar13 + 8);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            iVar10 = param_3;
            do {
              FUN_005ee710(0x46,pvVar12);
              pvVar12 = (void *)((long)pvVar12 + 8);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar8);
        }
        else if (param_1 == 0x47) {
          uVar14 = 0;
          do {
            pvVar13 = (void *)(param_2 + (ulong)(uVar3 * (uint)uVar14));
            pvVar12 = (void *)(param_2 + (long)(int)(uVar1 + ~(uint)uVar14) * (long)(int)uVar3);
            memcpy(__dest,pvVar12,__n);
            memcpy(pvVar12,pvVar13,__n);
            memcpy(pvVar13,__dest,__n);
            iVar10 = param_3;
            do {
              FUN_005ee710(0x47,pvVar13);
              pvVar13 = (void *)((long)pvVar13 + 8);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            iVar10 = param_3;
            do {
              FUN_005ee710(0x47,pvVar12);
              pvVar12 = (void *)((long)pvVar12 + 8);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar8);
        }
        else {
          uVar9 = 0x7bf007fffU >> ((ulong)uVar5 & 0x3f) & 1;
          uVar14 = 0;
          do {
            pvVar13 = (void *)(param_2 + (ulong)(uVar3 * (uint)uVar14));
            pvVar12 = (void *)(param_2 + (long)(int)(uVar1 + ~(uint)uVar14) * (long)(int)uVar3);
            memcpy(__dest,pvVar12,__n);
            memcpy(pvVar12,pvVar13,__n);
            memcpy(pvVar13,__dest,__n);
            if ((uVar5 < 0x23) && (uVar9 != 0)) {
              lVar11 = *(long *)(&DAT_02123fa0 + (long)(int)uVar5 * 8);
              iVar10 = param_3;
              do {
                FUN_005ee710(param_1,pvVar13);
                pvVar13 = (void *)((long)pvVar13 + lVar11);
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              if ((uVar5 < 0x23) && (uVar9 != 0)) {
                iVar10 = param_3;
                do {
                  FUN_005ee710(param_1,pvVar12);
                  pvVar12 = (void *)((long)pvVar12 + lVar11);
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar8);
        }
      }
      if (((((uVar1 & 1) != 0) && (uVar4 < 0x23)) &&
          ((0x7bf007fffU >> ((ulong)uVar4 & 0x3f) & 1) != 0)) && (0 < param_3)) {
        lVar11 = *(long *)(&DAT_02123fa0 + (long)(int)uVar4 * 8);
        param_2 = param_2 + (ulong)(uVar3 * uVar2);
        do {
          FUN_005ee710(param_1,param_2);
          param_2 = param_2 + lVar11;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      plVar6 = (long *)FUN_005cbff0();
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,__dest,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Utility.cpp",0x1c5b);
      }
      uVar7 = 1;
    }
  }
  return uVar7;
}


