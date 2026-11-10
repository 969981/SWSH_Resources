/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00555c00; name: FUN_00555c00
 */


undefined8 FUN_00555c00(long param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  byte bVar10;
  long lVar9;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined4 local_64;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(param_1 + 0x2f0))();
    if ((((((-1 < (int)uVar5) &&
           (uVar5 = (**(code **)**(undefined8 **)(param_1 + 0x398))
                              (*(undefined8 **)(param_1 + 0x398),*(undefined8 *)(param_1 + 0x20)),
           -1 < (int)uVar5)) &&
          ((puVar6 = *(undefined8 **)(param_1 + 0x3b8), puVar6 == (undefined8 *)0x0 ||
           (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)), -1 < (int)uVar5)))
          ) && ((puVar6 = *(undefined8 **)(param_1 + 0x3b0), puVar6 == (undefined8 *)0x0 ||
                (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)),
                -1 < (int)uVar5)))) &&
        ((puVar6 = *(undefined8 **)(param_1 + 0x3a8), puVar6 == (undefined8 *)0x0 ||
         (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)), -1 < (int)uVar5))))
       && ((puVar6 = *(undefined8 **)(param_1 + 0x3a0), puVar6 == (undefined8 *)0x0 ||
           (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)), -1 < (int)uVar5)))
       ) {
      iVar4 = *(int *)(param_1 + 0xdc);
      if (0 < iVar4) {
        lVar17 = 0;
        do {
          puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x310) + lVar17 * 8);
          uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20));
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < iVar4);
      }
      uVar5 = (**(code **)**(undefined8 **)(param_1 + 0x318))
                        (*(undefined8 **)(param_1 + 0x318),*(undefined8 *)(param_1 + 0x20));
      if (-1 < (int)uVar5) {
        puVar6 = *(undefined8 **)(param_1 + 0x328);
        if (puVar6 != (undefined8 *)0x0) {
          uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20));
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          lVar17 = *(long *)(param_1 + 0x328);
          uVar11 = *(uint *)(lVar17 + 0x30);
          if (uVar11 != 0) {
            uVar15 = 0;
            do {
              if ((int)uVar15 < (int)uVar11) {
                lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + (long)(int)uVar15 * 8);
              }
              else {
                lVar17 = 0;
              }
              do {
                lVar9 = lVar17;
                lVar17 = *(long *)(lVar9 + 0x120);
              } while (lVar17 != 0);
              plVar7 = *(long **)(lVar9 + 0xa8);
              (**(code **)(*plVar7 + 0x88))(plVar7,uVar15 < *(uint *)(param_1 + 0xf0));
              lVar17 = *(long *)(param_1 + 0x328);
              uVar11 = *(uint *)(lVar17 + 0x30);
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar11);
          }
        }
        puVar6 = *(undefined8 **)(param_1 + 0x330);
        if (((puVar6 == (undefined8 *)0x0) ||
            (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)), -1 < (int)uVar5))
           && ((puVar6 = *(undefined8 **)(param_1 + 0x338), puVar6 == (undefined8 *)0x0 ||
               (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)),
               -1 < (int)uVar5)))) {
          puVar6 = *(undefined8 **)(param_1 + 0x340);
          if (puVar6 != (undefined8 *)0x0) {
            uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20));
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            lVar17 = *(long *)(param_1 + 0x340);
            uVar11 = *(uint *)(lVar17 + 0x30);
            if (uVar11 == 0) {
              lVar17 = 0;
            }
            else {
              uVar15 = 0;
              do {
                if ((int)uVar15 < (int)uVar11) {
                  lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + (long)(int)uVar15 * 8);
                }
                else {
                  lVar17 = 0;
                }
                do {
                  lVar9 = lVar17;
                  lVar17 = *(long *)(lVar9 + 0x120);
                } while (lVar17 != 0);
                plVar7 = *(long **)(lVar9 + 0xa8);
                (**(code **)(*plVar7 + 0x90))(plVar7,0);
                lVar17 = *(long *)(param_1 + 0x340);
                uVar11 = *(uint *)(lVar17 + 0x30);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar11);
              if ((int)uVar11 < 1) {
                lVar17 = 0;
              }
              else {
                lVar17 = **(long **)(lVar17 + 0x38);
              }
            }
            do {
              lVar9 = lVar17;
              lVar17 = *(long *)(lVar9 + 0x120);
            } while (lVar17 != 0);
            plVar7 = *(long **)(lVar9 + 0xa8);
            (**(code **)(*plVar7 + 0x90))(plVar7,1);
          }
          puVar6 = *(undefined8 **)(param_1 + 0x390);
          if ((puVar6 == (undefined8 *)0x0) ||
             (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)), -1 < (int)uVar5)
             ) {
            if ((*(undefined8 **)(param_1 + 0x350) == (undefined8 *)0x0) ||
               (*(int *)(param_1 + 0xfc) == 0)) {
LAB_00555f38:
              puVar6 = *(undefined8 **)(param_1 + 0x3c0);
              if ((((puVar6 == (undefined8 *)0x0) ||
                   (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)),
                   -1 < (int)uVar5)) &&
                  ((puVar6 = *(undefined8 **)(param_1 + 0x3d0), puVar6 == (undefined8 *)0x0 ||
                   (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)),
                   -1 < (int)uVar5)))) &&
                 ((puVar6 = *(undefined8 **)(param_1 + 0x3c8), puVar6 == (undefined8 *)0x0 ||
                  (uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20)),
                  -1 < (int)uVar5)))) {
                if (*(long *)(param_1 + 0x340) != 0) {
                  local_64 = 0x3f000000;
                  iVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1e0))
                                    (*(long **)(param_1 + 0x20),0x40,0x40,1,0,0x3d,0,0,
                                     (undefined8 *)(param_1 + 0x348),0);
                  if (((iVar4 < 0) && (*(int *)PTR_DAT_02713970 != 0)) &&
                     (*(int *)PTR_DAT_02713980 != 0)) {
                    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: "
                                 ,0x739);
                    uVar5 = FUN_00546ea0(iVar4);
                    FUN_00517ae0("CRenderGlare::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_pGPUTextureTrimCircle) failed (0x%x: %s).\n"
                                 ,iVar4,uVar5);
                  }
                  FUN_00546b90(0x3d);
                  puVar3 = PTR_PTR_02713988;
                  local_78 = 0x3c8000003c800000;
                  puVar8 = (undefined8 *)
                           FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x1008,
                                        "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x750,
                                        0);
                  puVar6 = puVar8;
                  if (puVar8 != (undefined8 *)0x0) {
                    puVar6 = puVar8 + 1;
                    *puVar8 = 0x1000;
                  }
                  fVar2 = DAT_01d4bf54;
                  fVar1 = DAT_01d4bb6c;
                  uVar16 = 0;
                  puVar8 = puVar6;
                  do {
                    uVar18 = 0;
                    do {
                      local_80 = ((float)(uVar18 & 0xffffffff) + 0.5) * fVar1;
                      fStack_7c = ((float)(uVar16 & 0xffffffff) + 0.5) * fVar1;
                      FUN_00561eb0(&local_90,&local_80,&local_78,&local_64);
                      if ((1.0 <= local_90) || (local_90 <= 0.0)) {
                        bVar10 = 0;
                        bVar13 = 0;
                        if (local_8c < 1.0) goto LAB_00556104;
LAB_00556138:
                        bVar12 = 0;
                        bVar10 = bVar13;
joined_r0x00556144:
                        bVar13 = bVar12;
                        if (1.0 <= local_88) goto joined_r0x00556184;
LAB_00556148:
                        bVar13 = bVar12;
                        if (local_88 <= 0.0) goto joined_r0x00556184;
                        bVar13 = (byte)((uint)(int)(local_88 * fVar2) >> 0x18);
                        bVar14 = bVar13;
                        if (local_84 < 1.0) goto LAB_00556188;
LAB_005561b0:
                        bVar13 = bVar14;
                        bVar14 = 0xff;
                      }
                      else {
                        bVar10 = (byte)((uint)(int)(local_90 * fVar2) >> 8);
                        bVar13 = bVar10;
                        if (1.0 <= local_8c) goto LAB_00556138;
LAB_00556104:
                        if (0.0 < local_8c) {
                          bVar12 = (byte)((uint)(int)(local_8c * fVar2) >> 0x10);
                          goto joined_r0x00556144;
                        }
                        bVar12 = 0;
                        bVar13 = 0;
                        if (local_88 < 1.0) goto LAB_00556148;
joined_r0x00556184:
                        bVar12 = bVar13;
                        bVar13 = 0;
                        bVar14 = 0;
                        if (1.0 <= local_84) goto LAB_005561b0;
LAB_00556188:
                        if (local_84 <= 0.0) {
                          bVar14 = 0;
                        }
                        else {
                          bVar14 = (byte)(int)(local_84 * fVar2);
                        }
                      }
                      *(byte *)((long)puVar8 + uVar18) = bVar12 | bVar10 | bVar13 | bVar14;
                      uVar18 = uVar18 + 1;
                    } while (uVar18 != 0x40);
                    uVar16 = uVar16 + 1;
                    puVar8 = puVar8 + 8;
                  } while (uVar16 != 0x40);
                  plVar7 = *(long **)(param_1 + 0x348);
                  (**(code **)(*plVar7 + 0x48))(plVar7,puVar6,0,0,1);
                  (**(code **)(*plVar7 + 0x78))(plVar7,0);
                  FUN_005b9b10(*(undefined8 *)puVar3,puVar6 + -1);
                }
                uVar5 = 0;
              }
            }
            else {
              puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x350);
              uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20));
              if (-1 < (int)uVar5) {
                uVar16 = 1;
                do {
                  if (*(uint *)(param_1 + 0xfc) <= uVar16) goto LAB_00555f38;
                  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x350) + uVar16 * 8);
                  uVar5 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x20));
                  uVar16 = uVar16 + 1;
                } while (-1 < (int)uVar5);
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}


