/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00436990; name: FUN_00436990
 */


/* WARNING: Type propagation algorithm not settling */

ulong * FUN_00436990(ulong *param_1,ulong param_2,undefined1 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined3 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  MutexType *pMVar12;
  undefined **ppuVar13;
  long *plVar14;
  ulong *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  code *pcVar23;
  int *piVar24;
  ulong uVar25;
  int *piVar26;
  long lVar27;
  uint uVar28;
  ushort *puVar29;
  int *piVar30;
  ushort *puVar31;
  int *piVar32;
  undefined *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  uint local_b4;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined2 uStack_ae;
  uint local_ac;
  ulong uStack_a8;
  undefined4 local_98;
  byte local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  *param_3 = 0;
  DataMemoryBarrier(2,3);
  if (param_1[1] < *param_1) {
    uVar21 = ((int)param_1[4] - (int)*param_1) + (int)param_1[1];
  }
  else {
    uVar21 = (int)param_1[1] - (int)*param_1;
  }
  if (uVar21 != 0) {
    if ((param_2 & 1) == 0) {
      if (*(int *)((long)param_1 + 0x7c) != 0) goto LAB_00436a28;
    }
    else if ((uint)param_1[4] >> 1 < uVar21) {
LAB_00436a28:
      piVar32 = (int *)((long)param_1 + 0x7c);
      uVar28 = 0;
      puVar15 = param_1;
      piVar30 = (int *)PTR_DAT_02712ee8;
LAB_00436a70:
      while (puVar31 = (ushort *)*param_1, param_1[3] < *param_1 + 4) {
        uVar25 = *param_1 + (ulong)((int)param_1[4] + 3U & 0xfffffffc);
        if (uVar25 < param_1[3]) {
LAB_00436a6c:
          *param_1 = uVar25;
        }
        else {
          *param_1 = param_1[2];
        }
      }
      bVar9 = false;
      uVar8 = local_bc._5_3_;
      switch(puVar31[1]) {
      case 0:
        if (*piVar32 == 0) {
          return (ulong *)0x1;
        }
        do {
          bVar9 = *piVar32 + -1 == 0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar32,0x10);
          if (bVar6) {
            *piVar32 = *piVar32 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto switchD_00436acc_caseD_4;
      case 1:
        puVar19 = (undefined8 *)
                  FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2));
        FUN_00438190(*(undefined8 *)(puVar31 + 0x14),puVar19,*(undefined4 *)(puVar31 + 6),
                     *(undefined4 *)(puVar31 + 8),puVar31 + 10);
        if ((puVar19 != (undefined8 *)0x0) &&
           (iVar11 = *(int *)(puVar19 + 10), *(int *)(puVar19 + 10) = iVar11 + -1, iVar11 + -1 == 0)
           ) {
          uVar22 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar19)(puVar19);
          FUN_00404870(uVar22,puVar19);
        }
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,*(undefined4 *)(puVar31 + 6));
        (**(code **)(**(long **)(puVar31 + 0x14) + 0x18))();
        puVar15 = (ulong *)0x0;
        if (*(long *)(puVar31 + 10) != 0) {
          puVar15 = (ulong *)FUN_00431200();
        }
        break;
      case 2:
        local_88 = 0x400000000;
        local_80 = 0;
        if (*(long *)(puVar31 + 2) == -1) {
          local_d0 = (undefined *)0x0;
          local_c8 = (undefined **)((ulong)local_c8._4_4_ << 0x20);
          local_c0 = 0;
          local_bc = CONCAT35(uVar8,CONCAT14(0xff,(undefined4)local_bc));
          uStack_b0 = 0xff;
          uStack_a8 = 0;
          puVar15 = (ulong *)FUN_0049b9c0(*(undefined4 *)(puVar31 + 8),
                                          *(undefined8 *)PTR_DAT_02712b50,
                                          *(undefined4 *)(puVar31 + 6),&local_d0,&local_88,1,0);
        }
        else {
          puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
          puVar15 = (ulong *)0x0;
          if (puVar19 != (undefined8 *)0x0) {
            puVar15 = (ulong *)FUN_0049b970(*(undefined4 *)(puVar31 + 8),
                                            *(undefined8 *)PTR_DAT_02712b50,
                                            *(undefined4 *)(puVar31 + 6),puVar19,
                                            *(undefined4 *)(puVar31 + 10),&local_88,1);
            iVar11 = *(int *)(puVar19 + 10) + -1;
            *(int *)(puVar19 + 10) = iVar11;
joined_r0x00436cb0:
            if (iVar11 == 0) {
              uVar22 = *(undefined4 *)PTR_DAT_02712a90;
              (**(code **)*puVar19)(puVar19);
              puVar15 = (ulong *)FUN_00404870(uVar22,puVar19);
            }
          }
        }
        break;
      case 3:
        if (*(long *)(puVar31 + 2) == -1) {
          local_c0 = 0;
          uStack_a8 = 0;
          local_d0 = (undefined *)0x0;
          local_c8 = (undefined **)((ulong)local_c8._4_4_ << 0x20);
          local_bc = CONCAT35(uVar8,CONCAT14(0xff,(undefined4)local_bc));
          uStack_b0 = 0xff;
          puVar15 = (ulong *)FUN_0049b9c0(*(undefined4 *)(puVar31 + 8),
                                          *(undefined8 *)PTR_DAT_02712b50,
                                          *(undefined4 *)(puVar31 + 6),&local_d0,puVar31 + 0xc,1,0);
        }
        else {
          puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
          puVar15 = (ulong *)0x0;
          if (puVar19 != (undefined8 *)0x0) {
            puVar15 = (ulong *)FUN_0049b970(*(undefined4 *)(puVar31 + 8),
                                            *(undefined8 *)PTR_DAT_02712b50,
                                            *(undefined4 *)(puVar31 + 6),puVar19,
                                            *(undefined4 *)(puVar31 + 10),puVar31 + 0xc,1);
            iVar11 = *(int *)(puVar19 + 10) + -1;
            *(int *)(puVar19 + 10) = iVar11;
            goto joined_r0x0043702c;
          }
        }
        break;
      default:
        goto switchD_00436acc_caseD_4;
      case 5:
        if (*(long *)(puVar31 + 2) == -1) {
          local_d0 = (undefined *)0x400000000;
          local_c8 = (undefined **)((ulong)local_c8 & 0xffffffffffffff00);
          uVar22 = *(undefined4 *)(puVar31 + 6);
          uVar17 = *(undefined8 *)PTR_DAT_02712b50;
          ppuVar13 = &local_d0;
LAB_004379d0:
          puVar15 = (ulong *)FUN_0049eb00(uVar17,uVar22,0,0,ppuVar13);
        }
        else {
          puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
          puVar15 = (ulong *)0x0;
          if (puVar19 != (undefined8 *)0x0) {
            local_d0 = (undefined *)0x400000000;
            local_c8 = (undefined **)((ulong)local_c8 & 0xffffffffffffff00);
            puVar15 = (ulong *)FUN_0049eb00(*(undefined8 *)PTR_DAT_02712b50,
                                            *(undefined4 *)(puVar31 + 6),puVar19,
                                            *(undefined4 *)(puVar31 + 8),&local_d0);
            iVar11 = *(int *)(puVar19 + 10) + -1;
            *(int *)(puVar19 + 10) = iVar11;
            goto joined_r0x00436cb0;
          }
        }
        break;
      case 6:
        if (*(long *)(puVar31 + 2) == -1) {
          uVar17 = *(undefined8 *)PTR_DAT_02712b50;
          uVar22 = *(undefined4 *)(puVar31 + 6);
          ppuVar13 = (undefined **)(puVar31 + 10);
          goto LAB_004379d0;
        }
        puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
        puVar15 = (ulong *)0x0;
        if (puVar19 != (undefined8 *)0x0) {
          puVar15 = (ulong *)FUN_0049eb00(*(undefined8 *)PTR_DAT_02712b50,
                                          *(undefined4 *)(puVar31 + 6),puVar19,
                                          *(undefined4 *)(puVar31 + 8),puVar31 + 10);
          iVar11 = *(int *)(puVar19 + 10) + -1;
          *(int *)(puVar19 + 10) = iVar11;
          goto joined_r0x0043702c;
        }
        break;
      case 7:
        puVar15 = (ulong *)FUN_004b4cf0(*(undefined8 *)PTR_DAT_02712b68,*(undefined4 *)(puVar31 + 2)
                                        ,*(undefined4 *)(puVar31 + 4),puVar31[6] != 0,
                                        puVar31[7] != 0);
        break;
      case 8:
        puVar19 = (undefined8 *)
                  FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2));
        puVar15 = (ulong *)0x0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar22 = *(undefined4 *)(puVar31 + 6);
          uVar20 = *(undefined4 *)(puVar31 + 8);
          uVar17 = *(undefined8 *)PTR_DAT_02712b98;
          FUN_004bc400(&local_d0);
          lVar27 = FUN_004bb880(uVar17,uVar22);
          if (lVar27 != 0) {
            FUN_004bc240(lVar27,uVar20,puVar19);
          }
          puVar15 = (ulong *)FUN_004bc420(&local_d0);
          iVar11 = *(int *)(puVar19 + 10);
          *(int *)(puVar19 + 10) = iVar11 + -1;
          piVar30 = (int *)PTR_DAT_02712ee8;
          if (iVar11 + -1 == 0) {
            uVar22 = *(undefined4 *)PTR_DAT_02712a90;
            (**(code **)*puVar19)(puVar19);
            puVar15 = (ulong *)FUN_00404870(uVar22,puVar19);
          }
        }
        break;
      case 10:
        if (*(long *)(puVar31 + 2) == -1) {
          puVar15 = (ulong *)FUN_004b5b30(*(undefined8 *)PTR_DAT_02712b68,
                                          *(undefined4 *)(puVar31 + 6),0);
        }
        else {
          puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
          puVar15 = (ulong *)0x0;
          if (puVar19 != (undefined8 *)0x0) {
            puVar15 = (ulong *)FUN_004b5b30(*(undefined8 *)PTR_DAT_02712b68,
                                            *(undefined4 *)(puVar31 + 6),puVar19);
            iVar11 = *(int *)(puVar19 + 10) + -1;
            *(int *)(puVar19 + 10) = iVar11;
            goto joined_r0x0043702c;
          }
        }
        break;
      case 0xb:
        puVar15 = (ulong *)FUN_00497cd0(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2)
                                        ,*(undefined8 *)(puVar31 + 6));
        break;
      case 0xc:
        if (*(long *)(puVar31 + 2) == -1) {
          puVar15 = (ulong *)FUN_00497850(*(undefined8 *)PTR_DAT_02712d20,0);
        }
        else {
          puVar15 = (ulong *)FUN_00497b80();
        }
        break;
      case 0xd:
        memcpy(&local_d0,puVar31 + 6,0x24);
        local_ac = 0x3ff3f;
        uVar18 = *(undefined8 *)(puVar31 + 2);
        ppuVar13 = &local_d0;
        uVar22 = 1;
        uVar20 = 0;
        uVar17 = *(undefined8 *)PTR_DAT_02712d20;
        goto LAB_00437494;
      case 0xe:
        local_c8 = (undefined **)0x0;
        local_c0 = 0;
        local_bc = (ulong)local_bc._4_4_ << 0x20;
        uVar10 = *(uint *)(puVar31 + 8);
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            local_c8 = &local_d0;
LAB_00437b00:
            local_bc = CONCAT44(local_bc._4_4_,uVar10);
          }
          else {
            local_c8 = (undefined **)
                       FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3,8);
            if (local_c8 != (undefined **)0x0) goto LAB_00437b00;
          }
          if (*(int *)(puVar31 + 8) != 0) {
            uVar10 = 0;
            do {
              FUN_004e7fa0(&local_d0,*(undefined8 *)(puVar31 + (ulong)(uVar10 & 0xffff) * 4 + 10));
              uVar10 = uVar10 + 1;
            } while ((uVar10 & 0xffff) < *(uint *)(puVar31 + 8));
          }
        }
        puVar15 = (ulong *)FUN_00498110(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2)
                                        ,&local_d0,*(undefined4 *)(puVar31 + 6));
        goto joined_r0x00437bfc;
      case 0x10:
        local_c8 = (undefined **)0x0;
        local_c0 = 0;
        local_bc = (ulong)local_bc._4_4_ << 0x20;
        uVar10 = *(uint *)(puVar31 + 4);
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            local_c8 = &local_d0;
LAB_00437ba8:
            local_bc = CONCAT44(local_bc._4_4_,uVar10);
          }
          else {
            local_c8 = (undefined **)
                       FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3,8);
            if (local_c8 != (undefined **)0x0) goto LAB_00437ba8;
          }
          if (*(int *)(puVar31 + 4) != 0) {
            uVar10 = 0;
            do {
              FUN_004e7fa0(&local_d0,*(undefined8 *)(puVar31 + 2 + (ulong)(uVar10 & 0xffff) * 4 + 4)
                          );
              uVar10 = uVar10 + 1;
            } while ((uVar10 & 0xffff) < *(uint *)(puVar31 + 4));
          }
        }
        puVar15 = (ulong *)FUN_00498620(*(undefined8 *)PTR_DAT_02712d20,&local_d0,
                                        *(undefined4 *)(puVar31 + 2));
joined_r0x00437bfc:
        if (local_c8 != (undefined **)0x0) {
          local_c0 = 0;
          if (&local_d0 != local_c8) {
LAB_00437b6c:
            local_c0 = 0;
            puVar15 = (ulong *)FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
          }
LAB_00437b7c:
          local_c8 = (undefined **)0x0;
          local_bc = local_bc & 0xffffffff00000000;
        }
        break;
      case 0x11:
        puVar15 = (ulong *)FUN_00498840(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2)
                                       );
        break;
      case 0x12:
        if (puVar31[0xd] == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(puVar31 + 6);
        }
        puVar15 = (ulong *)FUN_0042c300(*(undefined8 *)(puVar31 + 2),puVar31[0xc] != 0,
                                        *(undefined4 *)(puVar31 + 10),uVar17);
        if (*(long *)(puVar31 + 6) == 0) break;
        puVar15 = (ulong *)FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
        bVar9 = false;
        puVar31[6] = 0;
        puVar31[7] = 0;
        puVar31[8] = 0;
        puVar31[9] = 0;
        goto switchD_00436acc_caseD_4;
      case 0x13:
        puVar15 = (ulong *)FUN_004988f0(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2)
                                        ,puVar31 + 8,*(undefined4 *)(puVar31 + 6));
        break;
      case 0x14:
        puVar15 = (ulong *)FUN_00498a30(*(undefined4 *)(puVar31 + 10),
                                        *(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2)
                                        ,*(undefined8 *)(puVar31 + 6));
        break;
      case 0x15:
        puVar15 = (ulong *)FUN_00498bf0(*(undefined4 *)(puVar31 + 10),*(undefined4 *)(puVar31 + 0xc)
                                        ,*(undefined8 *)PTR_DAT_02712d20,
                                        *(undefined8 *)(puVar31 + 2),*(undefined8 *)(puVar31 + 6));
        break;
      case 0x16:
        puVar15 = (ulong *)FUN_00498d60(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2)
                                        ,*(undefined8 *)(puVar31 + 6),puVar31 + 0xc,
                                        *(undefined4 *)(puVar31 + 10));
        break;
      case 0x17:
        puVar15 = (ulong *)FUN_0047d6f0(*(undefined8 *)(puVar31 + 2));
        bVar9 = false;
        if (puVar15 != (ulong *)0x0) {
          *(undefined4 *)((long)puVar15 + 0x104) = *(undefined4 *)(puVar31 + 6);
        }
        goto switchD_00436acc_caseD_4;
      case 0x18:
        puVar19 = (undefined8 *)
                  FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2));
        puVar15 = (ulong *)0x0;
        if (puVar19 == (undefined8 *)0x0) break;
        puVar15 = (ulong *)FUN_0045c880(*(undefined8 *)(puVar31 + 0x14),puVar19);
        iVar11 = *(int *)(puVar19 + 10) + -1;
        *(int *)(puVar19 + 10) = iVar11;
joined_r0x0043702c:
        if (iVar11 != 0) break;
LAB_00437a78:
        uVar22 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)*puVar19)(puVar19);
        goto LAB_00437a9c;
      case 0x19:
        puVar29 = puVar31 + 2;
        switch(*(undefined4 *)(puVar31 + 6)) {
        case 0:
          FUN_0045caa0(*(undefined8 *)(puVar31 + 2),*(undefined4 *)(puVar31 + 8),
                       *(undefined4 *)(puVar31 + 10));
          break;
        case 1:
          FUN_0045d100(*(undefined8 *)(puVar31 + 2),*(undefined4 *)(puVar31 + 8),
                       *(undefined4 *)(puVar31 + 10));
          break;
        case 2:
          FUN_0045d200(*(undefined8 *)(puVar31 + 2),*(undefined4 *)(puVar31 + 8),
                       *(undefined4 *)(puVar31 + 10));
          break;
        case 3:
          *(undefined1 *)(*(long *)puVar29 + 0x70) = 1;
          FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,*(undefined4 *)(*(long *)puVar29 + 0x6c));
          (**(code **)(**(long **)puVar29 + 0x18))();
          break;
        case 4:
          FUN_0045cef0(*(undefined8 *)(puVar31 + 2),*(undefined4 *)(puVar31 + 8),
                       *(undefined4 *)(puVar31 + 10));
          break;
        case 5:
          FUN_0045d060(*(undefined8 *)puVar29);
          break;
        case 6:
          FUN_0045d340(*(undefined8 *)puVar29);
        }
        plVar14 = *(long **)puVar29;
        goto LAB_00437e90;
      case 0x1a:
        uVar17 = *(undefined8 *)(puVar31 + 2);
        if (*(code **)PTR_DAT_02712e20 != (code *)0x0) {
          (**(code **)PTR_DAT_02712e20)(uVar17);
        }
        FUN_004c0020(uVar17);
        puVar15 = (ulong *)FUN_00442280(uVar17,0);
        break;
      case 0x1b:
        lVar27 = *(long *)(puVar31 + 2);
        uVar22 = 0x104;
        if (lVar27 != -1) {
          uVar22 = 0x105;
        }
        plVar14 = (long *)FUN_0043ceb0(uVar22,0);
        puVar15 = (ulong *)0x0;
        if (plVar14 == (long *)0x0) break;
        if (lVar27 == -1) {
          puVar1 = PTR_DAT_02712ef0 + 0x10;
          local_b4 = 0;
          uStack_b0 = 0;
          uStack_af = 0;
          uStack_ae = 0;
          local_ac = 0;
          uStack_a8 = uStack_a8 & 0xffffffff00000000;
          local_98 = 0;
          local_90 = (undefined8 *)0x0;
          local_d0 = puVar1;
          (**(code **)(*plVar14 + 0x40))(plVar14,&local_d0);
          puVar19 = local_90;
          local_d0 = puVar1;
          if (local_90 != (undefined8 *)0x0) {
            iVar11 = *(int *)(local_90 + 10);
            *(int *)(local_90 + 10) = iVar11 + -1;
            if (iVar11 + -1 == 0) {
              uVar22 = *(undefined4 *)PTR_DAT_02712a90;
              (**(code **)*local_90)(local_90);
              piVar30 = (int *)PTR_DAT_02712ee8;
              FUN_00404870(uVar22,puVar19);
            }
          }
          lVar27 = CONCAT26(uStack_ae,CONCAT15(uStack_af,CONCAT14(uStack_b0,local_b4)));
        }
        else {
          puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar27);
          if (puVar19 == (undefined8 *)0x0) goto LAB_00437d9c;
          puVar1 = PTR_DAT_02712ef0 + 0x10;
          local_ac = 0;
          uStack_a8 = uStack_a8 & 0xffffffff00000000;
          local_b4 = 0;
          uStack_b0 = 0;
          uStack_af = 0;
          uStack_ae = 0;
          local_98 = 0;
          *(int *)(puVar19 + 10) = *(int *)(puVar19 + 10) + 1;
          local_d0 = puVar1;
          local_90 = puVar19;
          (**(code **)(*plVar14 + 0x40))(plVar14,&local_d0);
          iVar11 = *(int *)(puVar19 + 10);
          *(int *)(puVar19 + 10) = iVar11 + -1;
          if (iVar11 + -1 == 0) {
            uVar22 = *(undefined4 *)PTR_DAT_02712a90;
            (**(code **)*puVar19)(puVar19);
            piVar30 = (int *)PTR_DAT_02712ee8;
            FUN_00404870(uVar22,puVar19);
          }
          puVar19 = local_90;
          local_d0 = puVar1;
          if (local_90 != (undefined8 *)0x0) {
            iVar11 = *(int *)(local_90 + 10);
            *(int *)(local_90 + 10) = iVar11 + -1;
            if (iVar11 + -1 == 0) {
              uVar22 = *(undefined4 *)PTR_DAT_02712a90;
              (**(code **)*local_90)(local_90);
              piVar30 = (int *)PTR_DAT_02712ee8;
              FUN_00404870(uVar22,puVar19);
            }
          }
          lVar27 = CONCAT26(uStack_ae,CONCAT15(uStack_af,CONCAT14(uStack_b0,local_b4)));
        }
        if (lVar27 != 0) {
          FUN_00431200();
        }
LAB_00437d9c:
        pcVar23 = *(code **)(*plVar14 + 0x18);
        goto LAB_00437e98;
      case 0x1c:
        local_c8 = (undefined **)0x0;
        local_c0 = 0;
        local_bc = (ulong)local_bc._4_4_ << 0x20;
        uVar10 = *(uint *)(puVar31 + 4);
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            local_c8 = &local_d0;
LAB_00437c24:
            local_bc = CONCAT44(local_bc._4_4_,uVar10);
          }
          else {
            local_c8 = (undefined **)
                       FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3,8);
            if (local_c8 != (undefined **)0x0) goto LAB_00437c24;
          }
          if (*(int *)(puVar31 + 4) != 0) {
            uVar10 = 0;
            do {
              FUN_004e7fa0(&local_d0,*(undefined8 *)(puVar31 + (ulong)(uVar10 & 0xffff) * 4 + 6));
              uVar10 = uVar10 + 1;
            } while ((uVar10 & 0xffff) < *(uint *)(puVar31 + 4));
          }
        }
        puVar15 = (ulong *)FUN_0047d640(puVar31 + 10,&local_d0);
        piVar30 = (int *)PTR_DAT_02712ee8;
        if (local_c8 == (undefined **)0x0) break;
        local_c0 = 0;
        if (&local_d0 != local_c8) goto LAB_00437b6c;
        goto LAB_00437b7c;
      case 0x1d:
        puVar15 = (ulong *)FUN_0047d490(*(undefined8 *)(puVar31 + 2),1);
        break;
      case 0x1e:
        pMVar12 = (MutexType *)FUN_00435370(*(undefined8 *)PTR_DAT_02712ae8,1);
        uVar10 = *(uint *)(puVar31 + 2);
        nn::os::LockMutex(pMVar12);
        uVar4 = *(uint *)(pMVar12 + 0x28);
        if (uVar4 != 0) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar10 / uVar4;
          }
          for (plVar14 = *(long **)(*(long *)(pMVar12 + 0x20) + (ulong)(uVar10 - uVar2 * uVar4) * 8)
              ; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
            if (*(uint *)(plVar14 + 2) == uVar10) {
              *(int *)((long)plVar14 + 0x14) = *(int *)((long)plVar14 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar12);
              FUN_00457700(plVar14,*(undefined4 *)(puVar31 + 4));
              pcVar23 = *(code **)(*plVar14 + 0x18);
              goto LAB_004375e4;
            }
          }
        }
        puVar15 = (ulong *)nn::os::UnlockMutex(pMVar12);
        goto LAB_004375e8;
      case 0x1f:
        FUN_004397a0(param_1,*(undefined4 *)(puVar31 + 2));
        local_b4 = local_b4 & 0xffffff00;
        uStack_a8 = 0;
        local_ac = local_ac & 0xffffff00;
        uStack_b0 = 0;
        local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
        local_c8 = (undefined **)0x0;
        local_c0 = *(undefined4 *)(puVar31 + 2);
        local_bc = *(ulong *)(puVar31 + 4);
        uStack_af = 0;
        puVar15 = (ulong *)FUN_00452280(&local_d0);
        break;
      case 0x20:
        puVar29 = puVar31 + 2;
        puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)puVar29)
        ;
        if ((((puVar19 != (undefined8 *)0x0) && (*(int *)(puVar19 + 8) != 0)) &&
            (*(long *)puVar19[7] != 0)) || (*(long *)puVar29 == -1)) {
          FUN_00438610(param_1,*(undefined8 *)(puVar31 + 6),puVar29,puVar19);
        }
        goto joined_r0x0043739c;
      case 0x21:
        puVar29 = puVar31 + 2;
        puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)puVar29)
        ;
        if ((((puVar19 != (undefined8 *)0x0) && (*(int *)(puVar19 + 8) != 0)) &&
            (*(long *)puVar19[7] != 0)) || (*(long *)puVar29 == -1)) {
          FUN_00439080(param_1,*(undefined8 *)(puVar31 + 6),puVar29,puVar19);
        }
joined_r0x0043739c:
        if ((puVar19 != (undefined8 *)0x0) &&
           (iVar11 = *(int *)(puVar19 + 10), *(int *)(puVar19 + 10) = iVar11 + -1, iVar11 + -1 == 0)
           ) {
          uVar22 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar19)(puVar19);
          FUN_00404870(uVar22,puVar19);
        }
        plVar14 = *(long **)(puVar31 + 6);
LAB_00437e90:
        pcVar23 = *(code **)(*plVar14 + 0x18);
LAB_00437e98:
        puVar15 = (ulong *)(*pcVar23)(plVar14);
        break;
      case 0x22:
        puVar29 = puVar31 + 2;
        puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)puVar29)
        ;
        if ((((puVar19 != (undefined8 *)0x0) && (*(int *)(puVar19 + 8) != 0)) &&
            (*(long *)puVar19[7] != 0)) || (*(long *)puVar29 == -1)) {
          FUN_004392f0(param_1,*(undefined8 *)(puVar31 + 6),puVar29,puVar19);
        }
        if ((puVar19 == (undefined8 *)0x0) ||
           (iVar11 = *(int *)(puVar19 + 10), *(int *)(puVar19 + 10) = iVar11 + -1, iVar11 + -1 != 0)
           ) {
          plVar14 = *(long **)(puVar31 + 6);
          if (plVar14 != (long *)0x0) goto LAB_00437e90;
          puVar15 = (ulong *)0x0;
        }
        else {
          uVar22 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar19)(puVar19);
          FUN_00404870(uVar22,puVar19);
          plVar14 = *(long **)(puVar31 + 6);
          if (plVar14 != (long *)0x0) goto LAB_00437e90;
          puVar15 = (ulong *)0x0;
        }
        break;
      case 0x23:
        if (*(long *)(puVar31 + 2) == -1) {
          puVar19 = (undefined8 *)0x0;
          uVar17 = *(undefined8 *)(puVar31 + 6);
          if (puVar31[0xd] != 0) goto LAB_0043744c;
LAB_00437a4c:
          FUN_004b6630(uVar17,puVar19);
        }
        else {
          puVar19 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20);
          puVar15 = (ulong *)0x0;
          if (puVar19 == (undefined8 *)0x0) break;
          uVar17 = *(undefined8 *)(puVar31 + 6);
          if (puVar31[0xd] == 0) goto LAB_00437a4c;
LAB_0043744c:
          FUN_004b5be0(uVar17,puVar19,(char)puVar31[0xc],*(undefined1 *)((long)puVar31 + 0x19));
        }
        puVar15 = (ulong *)(**(code **)(**(long **)(puVar31 + 6) + 0x18))();
        if (puVar19 != (undefined8 *)0x0) {
          iVar11 = *(int *)(puVar19 + 10);
          *(int *)(puVar19 + 10) = iVar11 + -1;
          if (iVar11 + -1 == 0) goto LAB_00437a78;
        }
        break;
      case 0x24:
        puVar15 = (ulong *)FUN_00498b60(*(undefined4 *)(puVar31 + 6),*(undefined8 *)PTR_DAT_02712d20
                                        ,*(undefined8 *)(puVar31 + 2));
        break;
      case 0x25:
        uVar17 = *(undefined8 *)PTR_DAT_02712d20;
        uVar18 = *(undefined8 *)(puVar31 + 2);
        uVar22 = *(undefined4 *)(puVar31 + 6);
        uVar20 = *(undefined4 *)(puVar31 + 8);
        ppuVar13 = (undefined **)(puVar31 + 10);
LAB_00437494:
        puVar15 = (ulong *)FUN_00498000(uVar17,uVar18,ppuVar13,uVar22,uVar20);
        break;
      case 0x26:
        ppuVar13 = (undefined **)
                   FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2));
        if ((((ppuVar13 != (undefined **)0x0) && (*(int *)(ppuVar13 + 8) != 0)) &&
            (*(long *)ppuVar13[7] != 0)) || (*(long *)(puVar31 + 2) == -1)) {
          for (lVar27 = *(long *)(*(long *)(puVar31 + 6) + 0x18); lVar27 != 0;
              lVar27 = *(long *)(lVar27 + 0x18)) {
            if ((*(short *)(lVar27 + 0x34) == 0x403) &&
               (plVar14 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,
                                               *(undefined4 *)(lVar27 + 0x30),0),
               plVar14 != (long *)0x0)) {
              local_b4 = local_b4 & 0xffffff00;
              uStack_a8 = 0;
              local_ac = local_ac & 0xffffff00;
              uStack_b0 = 0;
              local_c0 = *(undefined4 *)(puVar31 + 0xe);
              local_bc = 0x400000000;
              uStack_af = 0;
              local_94 = ((byte)puVar31[0x11] & 1) << 1 | local_94 & 0xfc | (byte)puVar31[0x10] & 1;
              local_98 = *(undefined4 *)(puVar31 + 0xc);
              local_d0 = (undefined *)CONCAT44(local_d0._4_4_,4);
              local_c8 = ppuVar13;
              (**(code **)(*plVar14 + 0x98))(plVar14,&local_d0);
              (**(code **)(*plVar14 + 0x18))(plVar14);
            }
          }
        }
        if ((ppuVar13 != (undefined **)0x0) &&
           (iVar11 = *(int *)(ppuVar13 + 10), *(int *)(ppuVar13 + 10) = iVar11 + -1,
           iVar11 + -1 == 0)) {
          uVar22 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*ppuVar13)(ppuVar13);
          FUN_00404870(uVar22,ppuVar13);
        }
        plVar14 = *(long **)(puVar31 + 6);
        pcVar23 = *(code **)(*plVar14 + 0x18);
LAB_004375e4:
        puVar15 = (ulong *)(*pcVar23)(plVar14);
LAB_004375e8:
        piVar30 = (int *)PTR_DAT_02712ee8;
        break;
      case 0x27:
        uVar10 = (*(int *)(puVar31 + 0x16) << 4 | 2U) + *(int *)(puVar31 + 0x14) * 0x10000;
        uVar4 = uVar10 | 0x80000000;
        if (*(int *)(puVar31 + 0x18) == 1) {
          plVar14 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,uVar4,0);
          puVar15 = (ulong *)0x0;
          if (plVar14 != (long *)0x0) {
            local_b4 = local_b4 & 0xffffff00;
            uStack_a8 = 0;
            local_ac = local_ac & 0xffffff00;
            uStack_b0 = 0;
            local_c8 = (undefined **)0x0;
            local_c0 = *(undefined4 *)(puVar31 + 6);
            local_bc = 0x400000000;
            uStack_af = 0;
            local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
            (**(code **)(*plVar14 + 0x98))(plVar14,&local_d0);
            puVar15 = (ulong *)(**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        else if (*(int *)(puVar31 + 0x18) == 0) {
          uVar22 = *(undefined4 *)(puVar31 + 6);
          puVar19 = (undefined8 *)
                    FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,*(undefined8 *)(puVar31 + 2));
          puVar15 = (ulong *)0x0;
          if (puVar19 != (undefined8 *)0x0) {
            lVar27 = *(long *)PTR_DAT_02712ae8;
            pMVar12 = (MutexType *)(lVar27 + 0x268);
            nn::os::LockMutex(pMVar12);
            uVar2 = *(uint *)(lVar27 + 0x290);
            if (uVar2 != 0) {
              uVar7 = 0;
              if (uVar2 != 0) {
                uVar7 = uVar4 / uVar2;
              }
              for (plVar14 = *(long **)(*(long *)(lVar27 + 0x288) +
                                       (ulong)(uVar4 - uVar7 * uVar2) * 8); plVar14 != (long *)0x0;
                  plVar14 = (long *)plVar14[1]) {
                if (*(uint *)(plVar14 + 2) == uVar4) {
                  *(int *)((long)plVar14 + 0x14) = *(int *)((long)plVar14 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar12);
                  (**(code **)(*plVar14 + 0x18))(plVar14);
                  goto LAB_00437f30;
                }
              }
            }
            nn::os::UnlockMutex(pMVar12);
            plVar14 = (long *)FUN_00461210(uVar4);
            if (plVar14 != (long *)0x0) {
              FUN_00460600(plVar14,uVar10,0,0);
            }
LAB_00437f30:
            plVar16 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,uVar4,0);
            if ((plVar14 == (long *)0x0) || (plVar16 != (long *)0x0)) {
              uVar17 = (**(code **)(*plVar16 + 0x18))();
            }
            else {
              lVar27 = FUN_004a6a70(uVar4);
              uVar17 = 0;
              if (lVar27 != 0) {
                uVar17 = FUN_004a7ef0(lVar27 + 0xb8,(int)plVar14[2]);
              }
            }
            local_78 = 0;
            uStack_70 = 0;
            local_68 = 0;
            uStack_64 = uVar22;
            puVar15 = (ulong *)FUN_00439580(uVar17,uVar4,puVar19,&local_78);
            iVar11 = *(int *)(puVar19 + 10);
            *(int *)(puVar19 + 10) = iVar11 + -1;
            piVar30 = (int *)PTR_DAT_02712ee8;
            bVar9 = false;
            if (iVar11 + -1 != 0) goto switchD_00436acc_caseD_4;
            uVar22 = *(undefined4 *)PTR_DAT_02712a90;
            (**(code **)*puVar19)(puVar19);
            goto LAB_00437a9c;
          }
        }
        bVar9 = false;
        goto switchD_00436acc_caseD_4;
      case 0x28:
        if (*(long *)(puVar31 + 2) != 0) {
          FUN_0047dbc0();
          goto LAB_00437800;
        }
        puVar15 = (ulong *)FUN_0047dd40();
        break;
      case 0x29:
        FUN_0047ddf0(*(undefined8 *)(puVar31 + 2));
        goto LAB_00437800;
      case 0x2a:
        plVar14 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(undefined4 *)(puVar31 + 2),
                                       *(undefined4 *)(puVar31 + 8));
        puVar15 = (ulong *)0x0;
        if (plVar14 != (long *)0x0) {
          uVar10 = (**(code **)(*plVar14 + 0x88))(plVar14);
          if (uVar10 < 0xb) {
            FUN_004835d0(plVar14,*(undefined4 *)(puVar31 + 4),*(undefined4 *)(puVar31 + 6),1,2);
          }
          goto LAB_00437d9c;
        }
        break;
      case 0x2b:
        plVar14 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(undefined4 *)(puVar31 + 2),
                                       *(undefined4 *)(puVar31 + 8));
        puVar15 = (ulong *)0x0;
        if (plVar14 != (long *)0x0) {
          iVar11 = (**(code **)(*plVar14 + 0x88))(plVar14);
          if (iVar11 == 10 || iVar11 == 0) {
            (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined4 *)(puVar31 + 6),1,2);
          }
          goto LAB_00437d9c;
        }
        break;
      case 0x2c:
        plVar14 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(undefined4 *)(puVar31 + 2),
                                       1);
        puVar15 = (ulong *)0x0;
        if (plVar14 != (long *)0x0) {
          uVar22 = *(undefined4 *)(puVar31 + 4);
          uVar25 = FUN_004528d0(plVar14);
          if ((uVar25 & 1) == 0) {
            FUN_00455cc0(plVar14,uVar22);
          }
          goto LAB_00437d9c;
        }
        break;
      case 0x2d:
        puVar15 = (ulong *)FUN_00468b70(*(undefined8 *)(puVar31 + 2),*(undefined4 *)(puVar31 + 6));
        break;
      case 0x2e:
        lVar27 = FUN_0047d6f0(*(undefined8 *)(puVar31 + 10));
        if ((lVar27 != 0) && ((*(uint *)(lVar27 + 0x3c) & 0xf00) == 0x100)) {
          FUN_0047b210(*(undefined4 *)(puVar31 + 8),lVar27,*(undefined8 *)(puVar31 + 2),
                       *(undefined4 *)(puVar31 + 6));
        }
LAB_00437800:
        uVar22 = *(undefined4 *)PTR_DAT_02712a90;
        puVar19 = *(undefined8 **)(puVar31 + 2);
LAB_00437a9c:
        puVar15 = (ulong *)FUN_00404870(uVar22,puVar19);
        break;
      case 0x31:
        puVar15 = (ulong *)FUN_0042ef30(*(undefined4 *)(puVar31 + 2));
        break;
      case 0x32:
        if (puVar31[2] == 0) {
          puVar15 = (ulong *)FUN_004575d0(puVar15);
        }
        else {
          puVar15 = (ulong *)FUN_00457500();
        }
        break;
      case 0x33:
        puVar15 = (ulong *)FUN_00468bd0(*(undefined4 *)(puVar31 + 2),*(undefined8 *)(puVar31 + 4),
                                        *(undefined4 *)(puVar31 + 8),*(undefined4 *)(puVar31 + 10),
                                        *(undefined4 *)(puVar31 + 0xc),
                                        *(undefined8 *)(puVar31 + 0xe),
                                        *(undefined4 *)(puVar31 + 0x12),1);
        break;
      case 0x34:
        puVar15 = (ulong *)FUN_0047de60(puVar31[4] != 0,puVar31[5] != 0,*(undefined4 *)(puVar31 + 2)
                                       );
        if ((int)puVar15 == 1) goto LAB_00437888;
        break;
      case 0x35:
        puVar15 = (ulong *)FUN_0047d310(puVar31 + 2);
LAB_00437888:
        bVar9 = false;
        *param_3 = 1;
        goto switchD_00436acc_caseD_4;
      case 0x36:
        piVar24 = (int *)param_1[0x14];
        uVar10 = (uint)param_1[0x15];
        piVar26 = piVar24;
        if (uVar10 == 0) {
LAB_00437ab8:
          if (piVar26 != piVar24 + (ulong)uVar10 * 6) {
            puVar15 = (ulong *)(**(code **)(piVar26 + 2))(puVar31 + 4,*puVar31 - 4);
          }
          break;
        }
        lVar27 = (ulong)uVar10 * 0x18;
        do {
          if (*piVar26 == *(int *)(puVar31 + 2)) goto LAB_00437ab8;
          bVar9 = false;
          lVar27 = lVar27 + -0x18;
          piVar26 = piVar26 + 6;
        } while (lVar27 != 0);
        goto switchD_00436acc_caseD_4;
      case 0x37:
        uVar25 = *param_1 + (ulong)((int)param_1[4] + 3U & 0xfffffffc);
        if (uVar25 < param_1[3]) goto LAB_00436a6c;
        *param_1 = param_1[2];
        goto LAB_00436a70;
      }
      bVar9 = false;
switchD_00436acc_caseD_4:
      uVar3 = *puVar31;
      uVar25 = *param_1 + ((ulong)(uVar3 + 3) & 0x1fffc);
      if (param_1[3] <= uVar25) {
        uVar25 = param_1[2];
      }
      *param_1 = uVar25;
      if ((param_2 & 1) == 0) {
        *piVar30 = *piVar30 + 1;
        if (bVar9) {
          return (ulong *)0x1;
        }
      }
      else {
        uVar28 = uVar28 + uVar3;
        puVar15 = (ulong *)0x1;
        *piVar30 = *piVar30 + 1;
        if (bVar9 || uVar21 >> 1 <= uVar28) {
          return (ulong *)0x1;
        }
      }
      goto LAB_00436a70;
    }
  }
  return (ulong *)0x0;
}


