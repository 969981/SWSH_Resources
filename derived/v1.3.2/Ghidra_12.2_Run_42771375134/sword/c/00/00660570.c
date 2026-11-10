/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00660570; name: FUN_00660570
 */


uint FUN_00660570(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  int iVar19;
  undefined *local_348;
  long *local_340;
  ulong local_338;
  ulong local_330;
  undefined8 local_328;
  long local_320;
  long local_318;
  long local_310;
  undefined8 local_308;
  ulong local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  long *local_270;
  long local_268;
  byte local_248;
  long *local_240;
  long local_238;
  byte local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8 [11];
  long local_190 [38];
  
  plVar18 = param_3 + 0xb;
  if ((int)*plVar18 == 0) {
LAB_00660748:
    uVar3 = 0;
    goto LAB_0066074c;
  }
  iVar2 = FUN_005ed130();
  if ((((iVar2 != *(int *)((long)param_1 + 0x1d4)) &&
       (((int)*plVar18 != 3 || *(int *)((long)param_1 + 0x1d4) != 5 ||
        (uVar14 = (**(code **)(*param_3 + 200))(param_3), (uVar14 & 1) == 0)))) ||
      ((int)param_3[0xc] < 1)) ||
     ((*(int *)((long)param_3 + 100) < 1 ||
      (((((int)*plVar18 == 3 && ((int)param_3[0xd] < 1)) || ((int)param_3[0xe] < 1)) ||
       ((*(int *)((long)param_3 + 0x6c) < 1 || (*(int *)((long)param_3 + 0x5c) == 0))))))))
  goto LAB_00660748;
  FUN_005f1340(local_1e8,param_1[3]);
  if ((char)param_3[0x10] == '\0') {
    (**(code **)(*param_3 + 0xb8))(param_3,local_1e8);
    FUN_005f3730(local_1e8);
    plVar18 = local_190;
    param_3 = local_1e8;
  }
  local_2f8 = *param_2;
  local_2f0 = param_2[1];
  local_2e8 = param_2[2];
  local_2e0 = param_2[3];
  local_2d8 = param_2[4];
  local_2d0 = param_2[5];
  local_2c8 = param_2[6];
  local_2c0 = param_2[7];
  local_2b8 = param_2[8];
  local_2b0 = param_2[9];
  uStack_2a8 = param_2[10];
  local_2a0 = param_2[0xb];
  local_298 = param_2[0xc];
  local_290 = *(undefined4 *)(param_2 + 0xd);
  local_28c = *(undefined4 *)((long)param_2 + 0x6c);
  local_288 = *(undefined4 *)(param_2 + 0xe);
  local_284 = *(undefined4 *)((long)param_2 + 0x74);
  local_280 = param_2[0xf];
  uStack_278 = param_2[0x10];
  FUN_005c4670(&local_270,param_2 + 0x11,0);
  FUN_005c4670(&local_240,param_2 + 0x17,0);
  local_210 = param_2[0x1d];
  local_208 = param_2[0x1e];
  uStack_200 = param_2[0x1f];
  local_1f8 = param_2[0x20];
  uStack_1f0 = param_2[0x21];
  local_2f8 = CONCAT44(local_2f8._4_4_,*(undefined4 *)((long)param_3 + 0x5c));
  local_2e8 = param_3[0xc];
  local_2e0._4_4_ = *(int *)((long)param_3 + 0x6c);
  if (((int)param_3[0xb] == 3) && (*(int *)((long)param_1 + 0x1d4) == 5)) {
    local_2e0._0_4_ = 1;
    plVar9 = param_3 + 0xd;
  }
  else {
    local_2e0._0_4_ = (undefined4)param_3[0xd];
    plVar9 = param_3 + 0xe;
  }
  iVar2 = (int)*plVar9;
  local_2d8 = CONCAT44(local_2d8._4_4_,iVar2);
  local_340 = (long *)param_1[3];
  local_348 = PTR_DAT_02714340 + 0x10;
  local_338 = 0;
  local_330 = 0;
  local_308 = 0;
  local_300 = 0;
  local_318 = 0;
  local_310 = 0;
  local_328 = 0x18;
  local_320 = 0;
  if (local_340 == (long *)0x0) {
    local_340 = (long *)FUN_005bc6f0();
    iVar2 = (int)local_2d8;
  }
  iVar13 = local_2e0._4_4_ * 6;
  if (*(int *)((long)param_1 + 0x1d4) != 4) {
    iVar13 = iVar2 * local_2e0._4_4_;
  }
  iVar2 = local_2e0._4_4_ * 6 * iVar2;
  if (*(int *)((long)param_1 + 0x1d4) != 6) {
    iVar2 = iVar13;
  }
  uVar14 = (ulong)iVar2;
  if (local_338 != uVar14) {
    if ((uVar14 < local_330) || (uVar4 = FUN_005ec9d0(&local_348,uVar14,1), (uVar4 & 1) != 0)) {
      local_338 = uVar14;
      if (iVar2 != 0) {
        local_318 = local_320;
        local_310 = local_320 + uVar14 * 0x18;
        goto LAB_00660840;
      }
    }
    else {
      local_338 = 0;
    }
    local_318 = 0;
    local_310 = 0;
  }
LAB_00660840:
  switch(*(undefined4 *)((long)param_1 + 0x1d4)) {
  case 2:
  case 5:
    if ((int)local_2d8 < 1) break;
    iVar2 = 0;
    iVar13 = 0;
    iVar7 = local_2e0._4_4_;
    do {
      if ((int)*plVar18 == 3) {
        if (0 < iVar7) {
          lVar16 = (long)iVar13 * 0x18;
          iVar7 = 0;
          do {
            plVar5 = (long *)(**(code **)(*param_3 + 0x98))(param_3,iVar7);
            plVar9 = (long *)(local_320 + lVar16);
            *plVar9 = *plVar5 + (long)*(int *)((long)plVar5 + 0x24) * (long)iVar2;
            *(int *)(plVar9 + 2) = (int)plVar5[4];
            plVar9[1] = plVar5[1];
            *(undefined4 *)((long)plVar9 + 0x14) = *(undefined4 *)((long)plVar5 + 0x24);
            iVar7 = iVar7 + 1;
            lVar16 = lVar16 + 0x18;
          } while (iVar7 < local_2e0._4_4_);
          goto LAB_00660968;
        }
      }
      else if (0 < iVar7) {
        lVar16 = (long)iVar13 * 0x18;
        iVar7 = 0;
        do {
          puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,iVar2,iVar7);
          puVar1 = (undefined8 *)(local_320 + lVar16);
          lVar16 = lVar16 + 0x18;
          *puVar1 = *puVar6;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar6 + 0x1c);
          puVar1[1] = puVar6[1];
          *(int *)((long)puVar1 + 0x14) = *(int *)(puVar6 + 3) * *(int *)((long)puVar6 + 0x1c);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_2e0._4_4_);
LAB_00660968:
        iVar13 = iVar13 + iVar7;
        iVar7 = local_2e0._4_4_;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_2d8);
    goto LAB_00660da8;
  case 3:
    if (0 < local_2e0._4_4_) {
      lVar16 = 0;
      iVar13 = 0;
      do {
        puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x98))(param_3,iVar13);
        puVar1 = (undefined8 *)(local_320 + lVar16);
        lVar16 = lVar16 + 0x18;
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar6 + 4);
        puVar1[1] = puVar6[1];
        *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)((long)puVar6 + 0x24);
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_2e0._4_4_);
      goto LAB_00660da8;
    }
    break;
  case 4:
  case 6:
    if (0 < (int)local_2d8) {
      iVar2 = 0;
      iVar13 = 0;
      iVar7 = local_2e0._4_4_;
      do {
        if (iVar7 < 1) {
LAB_00660c98:
          if (0 < iVar7) {
            lVar16 = (long)iVar13 * 0x18;
            iVar7 = 0;
            do {
              puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x90))(param_3,iVar2,5,iVar7);
              puVar1 = (undefined8 *)(local_320 + lVar16);
              lVar16 = lVar16 + 0x18;
              *puVar1 = *puVar6;
              *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar6 + 0x1c);
              puVar1[1] = puVar6[1];
              *(int *)((long)puVar1 + 0x14) = *(int *)(puVar6 + 3) * *(int *)((long)puVar6 + 0x1c);
              iVar7 = iVar7 + 1;
            } while (iVar7 < local_2e0._4_4_);
            iVar13 = iVar13 + iVar7;
            iVar7 = local_2e0._4_4_;
          }
        }
        else {
          iVar7 = 0;
          lVar16 = ((long)iVar13 + (long)iVar13 * 2) * 8;
          iVar17 = iVar13 + 2;
          iVar19 = iVar13 + 3;
          iVar15 = iVar13 + 4;
          iVar8 = iVar13;
          do {
            iVar12 = iVar15;
            iVar11 = iVar19;
            iVar10 = iVar17;
            iVar8 = iVar8 + 1;
            puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x90))(param_3,iVar2,0,iVar7);
            iVar7 = iVar7 + 1;
            puVar1 = (undefined8 *)(local_320 + lVar16);
            lVar16 = lVar16 + 0x18;
            *puVar1 = *puVar6;
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar6 + 0x1c);
            puVar1[1] = puVar6[1];
            *(int *)((long)puVar1 + 0x14) = *(int *)(puVar6 + 3) * *(int *)((long)puVar6 + 0x1c);
            iVar17 = iVar10 + 1;
            iVar19 = iVar11 + 1;
            iVar15 = iVar12 + 1;
          } while (iVar7 < local_2e0._4_4_);
          iVar13 = iVar13 + iVar7;
          if (0 < local_2e0._4_4_) {
            iVar7 = 0;
            lVar16 = ((long)iVar8 + (long)iVar8 * 2) * 8;
            do {
              iVar19 = iVar12;
              iVar17 = iVar11;
              iVar8 = iVar10;
              puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x90))(param_3,iVar2,1,iVar7);
              iVar7 = iVar7 + 1;
              puVar1 = (undefined8 *)(local_320 + lVar16);
              lVar16 = lVar16 + 0x18;
              *puVar1 = *puVar6;
              *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar6 + 0x1c);
              puVar1[1] = puVar6[1];
              *(int *)((long)puVar1 + 0x14) = *(int *)(puVar6 + 3) * *(int *)((long)puVar6 + 0x1c);
              iVar10 = iVar8 + 1;
              iVar11 = iVar17 + 1;
              iVar12 = iVar19 + 1;
            } while (iVar7 < local_2e0._4_4_);
            if (local_2e0._4_4_ < 1) {
              iVar8 = iVar13 + iVar7;
            }
            else {
              iVar7 = 0;
              lVar16 = ((long)iVar8 + (long)iVar8 * 2) * 8;
              do {
                iVar15 = iVar19;
                iVar13 = iVar17;
                puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x90))(param_3,iVar2,2,iVar7);
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 1;
                puVar1 = (undefined8 *)(local_320 + lVar16);
                lVar16 = lVar16 + 0x18;
                *puVar1 = *puVar6;
                *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar6 + 0x1c);
                puVar1[1] = puVar6[1];
                *(int *)((long)puVar1 + 0x14) = *(int *)(puVar6 + 3) * *(int *)((long)puVar6 + 0x1c)
                ;
                iVar17 = iVar13 + 1;
                iVar19 = iVar15 + 1;
              } while (iVar7 < local_2e0._4_4_);
              if (0 < local_2e0._4_4_) {
                iVar7 = 0;
                lVar16 = ((long)iVar13 + (long)iVar13 * 2) * 8;
                do {
                  iVar8 = iVar15;
                  puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x90))(param_3,iVar2,3,iVar7);
                  iVar7 = iVar7 + 1;
                  iVar13 = iVar13 + 1;
                  puVar1 = (undefined8 *)(local_320 + lVar16);
                  lVar16 = lVar16 + 0x18;
                  *puVar1 = *puVar6;
                  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar6 + 0x1c);
                  puVar1[1] = puVar6[1];
                  *(int *)((long)puVar1 + 0x14) =
                       *(int *)(puVar6 + 3) * *(int *)((long)puVar6 + 0x1c);
                  iVar15 = iVar8 + 1;
                } while (iVar7 < local_2e0._4_4_);
                if (0 < local_2e0._4_4_) {
                  lVar16 = (long)iVar8 * 0x18;
                  iVar17 = 0;
                  iVar13 = iVar8;
                  do {
                    puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x90))(param_3,iVar2,4,iVar17);
                    iVar17 = iVar17 + 1;
                    puVar1 = (undefined8 *)(local_320 + lVar16);
                    lVar16 = lVar16 + 0x18;
                    *puVar1 = *puVar6;
                    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar6 + 0x1c);
                    puVar1[1] = puVar6[1];
                    *(int *)((long)puVar1 + 0x14) =
                         *(int *)(puVar6 + 3) * *(int *)((long)puVar6 + 0x1c);
                    iVar13 = iVar13 + 1;
                    iVar7 = local_2e0._4_4_;
                  } while (iVar17 < local_2e0._4_4_);
                  goto LAB_00660c98;
                }
                iVar7 = local_2e0._4_4_;
                goto LAB_00660d28;
              }
            }
            iVar13 = iVar8;
          }
          iVar7 = local_2e0._4_4_;
        }
LAB_00660d28:
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)local_2d8);
      goto LAB_00660da8;
    }
  }
  iVar13 = 0;
LAB_00660da8:
  local_298 = local_320;
  uStack_2a8 = CONCAT44(iVar13,(undefined4)uStack_2a8);
  local_2b8 = CONCAT44(local_2b8._4_4_,(uint)((int)local_2c8 == 3) << 3);
  uVar3 = (**(code **)(*param_1 + 0xb0))(param_1,&local_2f8);
  lVar16 = local_320;
  plVar18 = local_340;
  local_348 = PTR_DAT_02714340 + 0x10;
  if (((local_300 & 1) == 0) && (local_320 != 0)) {
    if (local_340 != (long *)0x0) {
      (**(code **)(*local_340 + 0x50))(local_340,local_320);
      (**(code **)(*plVar18 + 0x48))
                (plVar18,lVar16,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    local_320 = 0;
  }
  if ((local_218 & 1) == 0) {
    if ((local_238 != 0) && (local_240 != (long *)0x0)) {
      (**(code **)(*local_240 + 0x48))
                (local_240,local_238,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_238 = 0;
  }
  if ((local_248 & 1) == 0) {
    if ((local_268 != 0) && (local_270 != (long *)0x0)) {
      (**(code **)(*local_270 + 0x48))
                (local_270,local_268,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_268 = 0;
  }
  FUN_005f1470(local_1e8);
LAB_0066074c:
  return uVar3 & 1;
}


