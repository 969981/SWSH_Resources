/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020ce70; name: FUN_0020ce70
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0020ce70(undefined8 param_1,long param_2,long param_3,long *param_4,ushort *param_5,
                 uint *param_6,long *param_7)

{
  char cVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  long *local_160 [5];
  uint local_134;
  ulong local_130;
  long *local_128;
  long local_120;
  long *local_118;
  ushort *local_110;
  long *local_108;
  ulong local_100;
  long *local_f8;
  ushort local_f0 [4];
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0 [32];
  uint local_90 [4];
  
  local_110 = param_5;
  local_108 = param_7;
  *(undefined1 *)(param_4 + 4) = 0;
  *(undefined4 *)((long)param_4 + 0x34) = 0;
  uVar2 = (ushort)param_6[4];
  if (*(char *)(param_2 + 0x90) == '\0') {
    if (*(int *)(*(long *)(param_2 + 0x60) + 0x2c) != *(int *)(param_2 + 0x88) && (uVar2 & 1) != 0)
    goto LAB_0020cee8;
LAB_0020cf10:
    if (((*(char *)(param_2 + 0x91) != '\0') ||
        (*(int *)(*(long *)(param_2 + 0x60) + 0x5c) != *(int *)(param_2 + 0x8c))) &&
       ((uVar2 >> 1 & 1) != 0)) {
      iVar8 = FUN_0020adc0(param_2,1,0,0);
      if (iVar8 == 1) {
LAB_0020cf4c:
        if (*(int *)(param_2 + 8) == -1) goto LAB_0020cfd8;
        goto LAB_0020cff8;
      }
      if (*(int *)(param_2 + 8) == -1) goto LAB_0020cfd8;
    }
    uVar13 = *(uint *)(param_2 + 0x70);
    local_90[0] = uVar13;
    local_90[1] = *(int *)(param_2 + 0x80);
    if (*(int *)(param_2 + 0x80) != 0 || uVar13 != 0) {
      local_120 = param_3;
      lVar15 = *(long *)(*(long *)(param_2 + 0x60) + 0x68);
      uVar9 = *(uint *)(param_2 + 0x58);
      if (*(uint *)(param_2 + 0x58) <= *(uint *)(param_2 + 0x54)) {
        uVar9 = *(uint *)(param_2 + 0x54);
      }
      if (uVar9 < 0x80) {
        local_128 = (long *)((long)local_160 - ((ulong)uVar9 * 0x18 + 0xf & 0x3ffffffff0));
        local_160[3] = (long *)0x0;
        local_160[4] = (long *)0x0;
      }
      else {
                    /* try { // try from 0020d068 to 0020d07b has its CatchHandler @ 0020d6b4 */
        local_160[3] = (long *)FUN_00401b30(&local_e8,(ulong)uVar9 * 0x18,
                                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
                                            ,0x268);
        local_128 = local_160[3];
        local_160[4] = local_160[3];
      }
      local_118 = (long *)(lVar15 + -0x10);
      bVar6 = local_108 == (long *)0x0;
      local_134 = (uint)(bVar6 || (uVar2 & 8) == 0);
      local_160[2] = param_4 + 1;
      local_160[0] = &local_e0;
      local_160[1] = (long *)(PTR_DAT_02711238 + 0x10);
      local_130 = 0;
      fVar18 = DAT_01d4c18c;
      local_160[3] = local_160[4];
      do {
        if (uVar13 != 0) {
          lVar15 = 0;
          uVar17 = 0;
          local_f8 = (long *)(param_2 + local_130 * 0x10 + 0x68);
          local_100 = (ulong)uVar13;
          do {
            uVar9 = 1;
            lVar16 = *local_f8;
            plVar11 = *(long **)(lVar16 + lVar15);
            uVar13 = uVar9;
            if ((short)plVar11[1] == 6 && plVar11 != (long *)0x0) {
              uVar13 = 2;
            }
            if ((uVar13 & uVar2) != 0) {
              if ((int)param_4[6] == 0) {
                uVar9 = 2;
              }
              cVar1 = *(char *)((long)param_6 + 0x12);
                    /* try { // try from 0020d3cc to 0020d493 has its CatchHandler @ 0020d74c */
              cVar7 = (**(code **)(*plVar11 + 0x88))(plVar11);
              if (cVar1 != cVar7) {
                (**(code **)(*local_118 + 0x118))
                          (&local_e8,local_118,*(undefined1 *)((long)param_6 + 0x12));
                bVar5 = (byte)local_e8;
                (**(code **)(*plVar11 + 0x98))(local_b0,plVar11);
                if (((bVar5 & local_b0[0]) >> 3 & 1) == 0) goto LAB_0020d554;
              }
              plVar11 = (long *)(lVar16 + lVar15);
              lVar14 = plVar11[1];
              if ((((param_6[1] == 0 && *param_6 == 0) && param_6[2] == 0) && param_6[3] == 0) ||
                 ((((*(uint *)(lVar14 + 0x54) & param_6[1]) != 0 ||
                   (*(uint *)(lVar14 + 0x50) & *param_6) != 0) ||
                  (*(uint *)(lVar14 + 0x58) & param_6[2]) != 0) ||
                  (*(uint *)(lVar14 + 0x5c) & param_6[3]) != 0)) {
                if (!bVar6 && (uVar2 & 4) != 0) {
                  local_e8 = (undefined *)CONCAT62(local_e8._2_6_,*local_110);
                  uVar9 = (**(code **)*local_108)
                                    (local_108,param_6,lVar14,*(undefined8 *)(lVar16 + lVar15),
                                     &local_e8);
                  *local_110 = (ushort)local_e8 & 0x1b0 | *local_110 & 0xfe4f;
                  if (uVar9 == 0) goto LAB_0020d554;
                }
                lVar14 = plVar11[1];
                    /* try { // try from 0020d4c4 to 0020d4cf has its CatchHandler @ 0020d738 */
                FUN_001e1900(local_b0,lVar14,*(undefined8 *)(lVar16 + lVar15));
                if ((*(byte *)(lVar14 + 0x38) & 1) == 0) {
                  lVar14 = lVar14 + 0x98;
                }
                else {
                  lVar14 = *(long *)(lVar14 + 0x40) + 0x38;
                }
                    /* try { // try from 0020d4f4 to 0020d4fb has its CatchHandler @ 0020d724 */
                uVar12 = FUN_0029a380(*(undefined8 *)(local_120 + 0x18),
                                      *(undefined8 *)(local_120 + 0x20),lVar14,local_b0);
                plVar3 = local_128;
                if ((uVar12 & 1) != 0) {
                  if (local_134 == 0) {
                    *local_128 = *plVar11;
                    plVar4 = local_108;
                    plVar3[1] = plVar11[1];
                    /* try { // try from 0020d164 to 0020d16b has its CatchHandler @ 0020d710 */
                    iVar8 = (**(code **)(*plVar4 + 8))(plVar4,param_6);
                    if (((uVar2 >> 4 & 1) != 0) && (iVar8 != 0)) goto LAB_0020d5e4;
                    if ((uVar2 & 0x20) != 0) {
                      iVar8 = 1;
                    }
                    if (iVar8 == 2) {
joined_r0x0020d358:
                      if (-1.0 <= fVar18) {
                        local_160[2][2] = local_128[2];
                        local_160[2][1] = local_128[1];
                        fVar18 = -1.0;
                        *local_160[2] = *local_128;
                        *(undefined1 *)(param_4 + 4) = 1;
                      }
                    }
                    else if (((iVar8 == 1) && (-1.0 <= fVar18)) && (*(uint *)(param_4 + 6) != 0)) {
                      uVar13 = *(uint *)((long)param_4 + 0x34);
                      if (uVar13 == *(uint *)(param_4 + 6)) {
                        local_e0 = 0;
                        local_d8 = 0;
                        local_d0 = 0xffffffff;
                        local_c8 = 0;
                        local_c0 = 0;
                        uStack_b8 = 0;
                        local_e8 = PTR_DAT_02711238 + 0x10;
                        local_f0[0] = *local_110;
                    /* try { // try from 0020d1dc to 0020d1fb has its CatchHandler @ 0020d6e8 */
                        uVar12 = FUN_0020ce70(param_1,param_2,local_120,&local_e8,local_f0,param_6,
                                              local_108);
                        if ((uVar12 & 1) != 0) {
                          local_160[2][2] = local_160[0][2];
                          local_160[2][1] = local_160[0][1];
                          *local_160[2] = *local_160[0];
                          *(undefined1 *)(param_4 + 4) = 1;
                        }
                        uVar13 = *(uint *)((long)param_4 + 0x34);
                        if (uVar13 == *(uint *)(param_4 + 6)) {
                    /* try { // try from 0020d244 to 0020d24b has its CatchHandler @ 0020d6c0 */
                          uVar12 = (**(code **)*param_4)(param_4,param_4[5]);
                          goto LAB_0020d30c;
                        }
                      }
                      goto LAB_0020d318;
                    }
                  }
                  else {
                    *local_128 = *plVar11;
                    plVar3[1] = plVar11[1];
                    if ((uVar2 >> 4 & 1) != 0) {
LAB_0020d5e4:
                      local_160[2][2] = local_128[2];
                      local_160[2][1] = local_128[1];
                      *local_160[2] = *local_128;
                    /* try { // try from 0020d614 to 0020d61b has its CatchHandler @ 0020d69c */
                      (**(code **)(*param_4 + 8))(param_4);
                      bVar6 = true;
                      *(undefined1 *)(param_4 + 4) = 1;
                      plVar11 = local_160[4];
                      goto joined_r0x0020d62c;
                    }
                    if ((uVar2 & 0x20) != 0) {
                      uVar9 = 1;
                    }
                    if (uVar9 == 1) {
                      if ((-1.0 <= fVar18) && (*(uint *)(param_4 + 6) != 0)) {
                        uVar13 = *(uint *)((long)param_4 + 0x34);
                        if (uVar13 == *(uint *)(param_4 + 6)) {
                          local_d0 = 0xffffffff;
                          local_e0 = 0;
                          local_d8 = 0;
                          local_c0 = 0;
                          uStack_b8 = 0;
                          local_e8 = (undefined *)local_160[1];
                          local_c8 = 0;
                          local_f0[0] = *local_110;
                    /* try { // try from 0020d29c to 0020d2bb has its CatchHandler @ 0020d6fc */
                          uVar12 = FUN_0020ce70(param_1,param_2,local_120,&local_e8,local_f0,param_6
                                                ,local_108);
                          if ((uVar12 & 1) != 0) {
                            local_160[2][2] = local_160[0][2];
                            local_160[2][1] = local_160[0][1];
                            *local_160[2] = *local_160[0];
                            *(undefined1 *)(param_4 + 4) = 1;
                          }
                          uVar13 = *(uint *)((long)param_4 + 0x34);
                          if (uVar13 == *(uint *)(param_4 + 6)) {
                    /* try { // try from 0020d304 to 0020d30b has its CatchHandler @ 0020d6d4 */
                            uVar12 = (**(code **)*param_4)(param_4,param_4[5]);
LAB_0020d30c:
                            if ((uVar12 & 1) == 0) {
                    /* try { // try from 0020d64c to 0020d653 has its CatchHandler @ 0020d670 */
                              (**(code **)(*param_4 + 8))(param_4);
                              cVar1 = (char)param_4[4];
                              plVar11 = local_160[4];
                              goto joined_r0x0020d668;
                            }
                            uVar13 = 0;
                            *(undefined4 *)((long)param_4 + 0x34) = 0;
                          }
                        }
LAB_0020d318:
                        *(uint *)((long)param_4 + 0x34) = uVar13 + 1;
                        plVar11 = (long *)(param_4[5] + (ulong)uVar13 * 0x18);
                        plVar11[2] = local_128[2];
                        plVar11[1] = local_128[1];
                        *plVar11 = *local_128;
                      }
                    }
                    else if (uVar9 == 2) goto joined_r0x0020d358;
                  }
                }
              }
            }
LAB_0020d554:
            uVar17 = uVar17 + 1;
            lVar15 = lVar15 + 0x10;
          } while (uVar17 < local_100);
        }
        plVar11 = local_160[4];
        uVar17 = local_130 + 1;
        if (1 < uVar17) {
                    /* try { // try from 0020d5b0 to 0020d5b7 has its CatchHandler @ 0020d684 */
          if ((*(int *)((long)param_4 + 0x34) != 0) &&
             (uVar17 = (**(code **)*param_4)(param_4,param_4[5]), (uVar17 & 1) != 0)) {
            *(undefined4 *)((long)param_4 + 0x34) = 0;
          }
                    /* try { // try from 0020d5c8 to 0020d5cf has its CatchHandler @ 0020d690 */
          (**(code **)(*param_4 + 8))(param_4);
          cVar1 = (char)param_4[4];
joined_r0x0020d668:
          bVar6 = cVar1 != '\0';
joined_r0x0020d62c:
          if (plVar11 == (long *)0x0) {
            return bVar6;
          }
                    /* try { // try from 0020d630 to 0020d63f has its CatchHandler @ 0020d6b0 */
          FUN_00401ce0(&local_e8,local_160[3]);
          return bVar6;
        }
        uVar13 = local_90[uVar17];
        local_130 = uVar17;
      } while( true );
    }
    bVar6 = false;
  }
  else {
    if ((uVar2 & 1) == 0) goto LAB_0020cf10;
LAB_0020cee8:
    iVar8 = FUN_0020adc0(param_2,0,0,0);
    if (iVar8 == 1) goto LAB_0020cf4c;
    if (*(int *)(param_2 + 8) != -1) goto LAB_0020cf10;
LAB_0020cfd8:
    uVar10 = FUN_00400880();
    FUN_00400890(uVar10,0x80,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
                 ,0x247,
                 "PxVolumeCache: unspecified volume geometry. Reverting to uncached scene query.");
LAB_0020cff8:
    plVar11 = (long *)(*(long *)(*(long *)(param_2 + 0x60) + 0x68) + -0x10);
    (**(code **)(*plVar11 + 0x308))
              (plVar11,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),param_4,
               param_6,local_108);
    bVar6 = (char)param_4[4] != '\0' || *(int *)((long)param_4 + 0x34) != 0;
  }
  return bVar6;
}


