/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f4440; name: FUN_005f4440
 */


long * FUN_005f4440(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  
  plVar3 = (long *)FUN_005cbff0();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,0x180,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp"
                              ,0x979);
  FUN_005f1340(plVar4,plVar3);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,0x3d,param_1,param_2,~param_4 & 1);
    fVar2 = DAT_01d4c154;
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar4 = (long *)0x0;
    }
    else {
      iVar1 = *(int *)((long)plVar4 + 0x6c);
      if (param_3 < 2) {
        param_3 = 1;
      }
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          plVar3 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,0,iVar9);
          iVar8 = *(int *)((long)plVar3 + 0x14);
          if (iVar8 < 1) {
            uVar12 = 0;
            uVar7 = 0xff;
            lVar15 = plVar3[1];
          }
          else {
            lVar15 = *plVar3;
            iVar6 = (int)plVar3[3];
            iVar14 = 0;
            uVar12 = 0;
            uVar7 = 0xff;
            do {
              if (0 < iVar6) {
                lVar10 = 0;
                uVar13 = uVar7;
                uVar11 = uVar12;
                do {
                  fVar16 = (float)FUN_005c9320((float)iVar14 / (float)iVar8,
                                               (float)(int)lVar10 / (float)iVar6,param_3);
                  uVar7 = (uint)((fVar16 * 0.5 + 0.5) * fVar2);
                  if (0xfe < (int)uVar7) {
                    uVar7 = 0xff;
                  }
                  uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
                  uVar12 = uVar7 & 0xff;
                  *(char *)(lVar15 + lVar10) = (char)uVar7;
                  iVar6 = (int)plVar3[3];
                  uVar7 = uVar12;
                  if (uVar13 <= uVar12) {
                    uVar7 = uVar13;
                  }
                  lVar10 = lVar10 + 1;
                  if (uVar12 <= uVar11) {
                    uVar12 = uVar11;
                  }
                  uVar13 = uVar7;
                  uVar11 = uVar12;
                } while ((int)lVar10 < iVar6);
                iVar8 = *(int *)((long)plVar3 + 0x14);
                lVar15 = lVar15 + lVar10;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar8);
            lVar15 = plVar3[1];
          }
          if (0 < lVar15) {
            lVar10 = *plVar3;
            lVar15 = 0;
            do {
              fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + lVar15));
              iVar8 = (int)(((fVar16 / fVar2 - (float)uVar7 / fVar2) /
                            ((float)uVar12 / fVar2 - (float)uVar7 / fVar2)) * fVar2);
              if (0xfe < iVar8) {
                iVar8 = 0xff;
              }
              *(byte *)(lVar10 + lVar15) = (byte)iVar8 & ((byte)(iVar8 >> 0x1f) ^ 0xff);
              lVar15 = lVar15 + 1;
            } while (lVar15 < plVar3[1]);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar1);
      }
    }
  }
  return plVar4;
}


