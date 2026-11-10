/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6dd30; name: FUN_00a6dd30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6dd30(long *param_1)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar48;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar59;
  int iVar75;
  int iVar76;
  undefined1 auVar60 [16];
  int iVar77;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  long local_a8;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long *local_78;
  undefined1 auStack_48 [8];
  
  if (6 < (int)param_1[0x14] - 1U) {
    return;
  }
  switch((int)param_1[0x14]) {
  case 1:
    uVar8 = FUN_00b17e10(param_1[0x9d]);
    if ((uVar8 & 1) != 0) {
      FUN_00b17e30(param_1[0x9d]);
      FUN_00a72cf0(param_1);
      FUN_00b17ff0(param_1[0x9d]);
      *(undefined4 *)(param_1 + 0x14) = 2;
    }
    break;
  case 2:
    uVar8 = FUN_00b18000(param_1[0x9d]);
    if ((uVar8 & 1) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar12 == 0) {
      FUN_01009f40(&local_a8,0);
      uVar8 = FUN_00fb40c0(local_a8);
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_01009f40(&local_a8,lVar12);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      uVar8 = FUN_00fb40c0(local_a8);
    }
    if ((uVar8 & 1) == 0) {
      FUN_00b18010(param_1[0x9d]);
      *(undefined1 *)(param_1[0x9d] + 0x70) = 1;
      lVar12 = *(long *)(param_1[0x3c3] + 0x400);
      if (lVar12 == 0) {
        FUN_00dab450(0,0,0);
        lVar12 = *(long *)(param_1[0x3c3] + 0x400);
        if (lVar12 == 0) goto LAB_00a6e224;
LAB_00a6e060:
        plVar13 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_00dab450(lVar12,1,0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        lVar12 = *(long *)(param_1[0x3c3] + 0x400);
        if (lVar12 != 0) goto LAB_00a6e0a0;
LAB_00a6e240:
        FUN_00dab450(0,2,0);
        lVar12 = param_1[0x89];
        *(undefined1 *)(param_1 + 0xd8) = 0;
      }
      else {
        plVar13 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_00dab450(lVar12,0,0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        lVar12 = *(long *)(param_1[0x3c3] + 0x400);
        if (lVar12 != 0) goto LAB_00a6e060;
LAB_00a6e224:
        FUN_00dab450(0,1,0);
        lVar12 = *(long *)(param_1[0x3c3] + 0x400);
        if (lVar12 == 0) goto LAB_00a6e240;
LAB_00a6e0a0:
        plVar13 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_00dab450(lVar12,2,0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        lVar12 = param_1[0x89];
        *(undefined1 *)(param_1 + 0xd8) = 0;
      }
      if (((lVar12 != 0) && (lVar12 = FUN_00706c40(lVar12,auStack_48), lVar12 != 0)) &&
         (lVar12 = *(long *)(lVar12 + 0x78), lVar12 != 0)) {
        param_1[0x3ff] = *(long *)(lVar12 + 0x2a8);
        lVar14 = *(long *)(lVar12 + 0x2b8);
        uVar7 = *(undefined4 *)(lVar12 + 0x2d0);
        param_1[0x403] = *(long *)(lVar12 + 0x2c8);
        param_1[0x401] = lVar14;
        lVar14 = *(long *)(lVar12 + 0x2a0);
        param_1[0x400] = *(long *)(lVar12 + 0x2b0);
        param_1[0x3fe] = lVar14;
        lVar12 = *(long *)(lVar12 + 0x2c0);
        *(undefined4 *)(param_1 + 0x404) = uVar7;
        param_1[0x402] = lVar12;
      }
      *(undefined4 *)(param_1 + 0x14) = 3;
      *(undefined4 *)((long)param_1 + 0x18f4) = 0;
    }
    goto joined_r0x00a6ed38;
  case 3:
    uVar8 = FUN_00a654b0(param_1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar8 = FUN_00a7aad0(param_1);
    if ((uVar8 & 1) != 0) {
      uVar9 = param_1[0x3af];
      uVar8 = param_1[0x3b9];
      if ((uVar9 - 1 & uVar9) == 0) {
        plVar13 = *(long **)(param_1[0x3ae] + (uVar9 - 1 & uVar8) * 8);
        do {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13[1] != uVar8);
        } while (plVar13[2] != uVar8);
      }
      else {
        uVar11 = uVar8;
        if (uVar9 <= uVar8) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar8 / uVar9;
          }
          uVar11 = uVar8 - uVar11 * uVar9;
        }
        plVar13 = *(long **)(param_1[0x3ae] + uVar11 * 8);
        do {
          do {
            plVar13 = (long *)*plVar13;
          } while (plVar13[1] != uVar8);
        } while (plVar13[2] != uVar8);
      }
      *(char *)(param_1 + 0x3ba) = (char)*(undefined4 *)((long)plVar13 + 0x18);
      lVar12 = param_1[0xb9];
      (**(code **)(*param_1 + 0x7f8))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
      uVar7 = FUN_008e0a00();
      FUN_00b8bec0(lVar12,uVar7,*(undefined4 *)((long)param_1 + 0x1754),1);
      param_1[0x3b9] = -0x340d631b7bddd9bb;
      *(undefined4 *)(param_1 + 0x14) = 4;
      return;
    }
    goto LAB_00a6de8c;
  case 4:
    cVar1 = (char)param_1[0x3ba] + -1;
    *(char *)(param_1 + 0x3ba) = cVar1;
    if (-1 < cVar1) {
      return;
    }
LAB_00a6de8c:
    *(undefined1 *)(param_1[0x9d] + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x14) = 5;
    break;
  case 5:
    if (((param_1[0x2f3] & 1U) == 0 && param_1[0x2f2] == 0) &&
       ((((*(char *)((long)param_1 + 0x1774) == '\0' || (-3 < (int)param_1[0x2ef])) ||
         ((int)param_1[0x2ee] != 0)) && (uVar8 = FUN_00b18020(param_1[0x9d]), (uVar8 & 1) != 0)))) {
      lVar12 = param_1[0xa6];
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      if (*(int *)(lVar12 + 0x60) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a6df24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        return;
      }
      lVar14 = param_1[0xa7];
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      if (*(int *)(lVar14 + 0x60) == 0) {
        lVar10 = param_1[0xa8];
        if (lVar10 == 0) {
          bVar4 = _DAT_00000060 == 0;
        }
        else {
          plVar13 = (long *)(lVar10 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          bVar4 = *(int *)(lVar10 + 0x60) == 0;
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      else {
        bVar4 = false;
      }
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      puVar3 = PTR_DAT_02717598;
      if (bVar4) {
        if (((char)param_1[0xd8] == '\0') &&
           (plVar13 = *(long **)(param_1[0xd0] + 0x28), plVar13 != (long *)0x0)) {
          bVar5 = 0;
          do {
            bVar6 = FUN_00895a90(*(undefined8 *)puVar3,*(undefined4 *)((long)plVar13 + 0x14));
            plVar13 = (long *)*plVar13;
            bVar5 = bVar5 | bVar6;
          } while (plVar13 != (long *)0x0);
        }
        else {
          bVar5 = 0;
        }
        FUN_00a8d530(&local_a8,param_1[0xd4] + 8);
        plVar13 = local_80;
        while (lVar12 = local_a8, plVar2 = local_80, plVar13 != (long *)0x0) {
          lVar12 = plVar13[3];
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
          }
          if (*(long *)(lVar12 + 0xa8) != 0) {
            lVar14 = *(long *)(lVar12 + 0xa8) << 3;
            puVar15 = *(undefined8 **)(lVar12 + 0xa0);
            do {
              bVar6 = FUN_00aaf990(*puVar15);
              bVar5 = bVar5 | bVar6;
              lVar14 = lVar14 + -8;
              puVar15 = puVar15 + 1;
            } while (lVar14 != 0);
          }
          plVar13 = (long *)*plVar13;
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
          }
        }
        while (plVar2 != (long *)0x0) {
          lVar14 = *plVar2;
          local_a8 = lVar12;
          if (plVar2[3] != 0) {
            (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
            plVar2[3] = 0;
          }
          (**(code **)(*local_78 + 0x18))(local_78,plVar2,0x20,8);
          lVar12 = local_a8;
          plVar2 = (long *)lVar14;
        }
        local_a8 = 0;
        if (lVar12 != 0) {
          (**(code **)(*plStack_98 + 0x18))(plStack_98,lVar12,local_a0 << 3,8);
        }
        FUN_00a87ac0(&local_a8,param_1[0xd9] + 8);
        plVar13 = local_80;
        while (plVar2 = local_80, lVar12 = local_a8, plVar13 != (long *)0x0) {
          lVar12 = plVar13[3];
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
          }
          if (*(long *)(lVar12 + 0xa8) != 0) {
            lVar14 = *(long *)(lVar12 + 0xa8) << 3;
            puVar15 = *(undefined8 **)(lVar12 + 0xa0);
            do {
              bVar6 = FUN_00aad840(*puVar15);
              bVar5 = bVar5 | bVar6 ^ 1;
              lVar14 = lVar14 + -8;
              puVar15 = puVar15 + 1;
            } while (lVar14 != 0);
          }
          plVar13 = (long *)*plVar13;
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
          }
        }
        while (plVar2 != (long *)0x0) {
          plVar13 = (long *)*plVar2;
          local_a8 = lVar12;
          if (plVar2[3] != 0) {
            (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
            plVar2[3] = 0;
          }
          (**(code **)(*local_78 + 0x18))(local_78,plVar2,0x20,8);
          plVar2 = plVar13;
          lVar12 = local_a8;
        }
        local_a8 = 0;
        if (lVar12 != 0) {
          (**(code **)(*plStack_98 + 0x18))(plStack_98,lVar12,local_a0 << 3,8);
        }
        if ((bVar5 & *(int *)((long)param_1 + 0x18f4) < 0x709) == 0) {
          *(undefined1 *)(param_1[0x9d] + 0x70) = 1;
          *(undefined4 *)(param_1 + 0x14) = 6;
        }
        else {
          *(int *)((long)param_1 + 0x18f4) = *(int *)((long)param_1 + 0x18f4) + 1;
        }
      }
    }
    break;
  case 6:
    if (*(char *)((long)param_1 + 0x16f9) != '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(char *)((long)param_1 + 0x16f9) = '\0';
      return;
    }
    if (*(char *)((long)param_1 + 0x1f71) != '\0') {
      FUN_00a7ac40(param_1);
      uVar8 = FUN_00a08b30();
      if ((uVar8 & 1) == 0) {
        return;
      }
    }
    lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar12 == 0) {
      FUN_01009f40(&local_a8,0);
      uVar8 = FUN_00d6ed60(param_1[0xa1]);
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_01009f40(&local_a8,lVar12);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      uVar8 = FUN_00d6ed60(param_1[0xa1]);
    }
    if (((uVar8 & 1) == 0) || (uVar8 = FUN_00fb40c0(local_a8), (uVar8 & 1) != 0))
    goto joined_r0x00a6ed38;
    lVar12 = param_1[200];
    if (*(long *)(lVar12 + 0x50) != 0) {
      plVar13 = (long *)*(long *)(lVar12 + 0x30);
      while (plVar13 != (long *)0x0) {
        lVar14 = *plVar13;
        if (plVar13[3] != 0) {
          (**(code **)(*(long *)(plVar13[3] + 0x48) + 0x18))();
          plVar13[3] = 0;
        }
        (**(code **)(**(long **)(lVar12 + 0x38) + 0x18))(*(long **)(lVar12 + 0x38),plVar13,0x20,8);
        plVar13 = (long *)lVar14;
      }
      uVar8 = *(ulong *)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x30) = 0;
      if (uVar8 != 0) {
        uVar9 = uVar8 & 3;
        if (uVar8 - 1 < 3) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar10 = lVar14 * 8;
            lVar14 = lVar14 + 4;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x18) = 0;
          } while (uVar8 - uVar9 != lVar14);
        }
        if (uVar9 != 0) {
          lVar14 = lVar14 << 3;
          lVar10 = -uVar9;
          do {
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar14) = 0;
            lVar14 = lVar14 + 8;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
      *(undefined8 *)(lVar12 + 0x50) = 0;
    }
    lVar12 = param_1[0xcc];
    if (*(long *)(lVar12 + 0x50) != 0) {
      plVar13 = (long *)*(long *)(lVar12 + 0x30);
      while (plVar13 != (long *)0x0) {
        lVar14 = *plVar13;
        if (plVar13[3] != 0) {
          (**(code **)(*(long *)(plVar13[3] + 0x48) + 0x18))();
          plVar13[3] = 0;
        }
        (**(code **)(**(long **)(lVar12 + 0x38) + 0x18))(*(long **)(lVar12 + 0x38),plVar13,0x20,8);
        plVar13 = (long *)lVar14;
      }
      uVar8 = *(ulong *)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x30) = 0;
      if (uVar8 != 0) {
        uVar9 = uVar8 & 3;
        if (uVar8 - 1 < 3) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar10 = lVar14 * 8;
            lVar14 = lVar14 + 4;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x18) = 0;
          } while (uVar8 - uVar9 != lVar14);
        }
        if (uVar9 != 0) {
          lVar14 = lVar14 << 3;
          lVar10 = -uVar9;
          do {
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar14) = 0;
            lVar14 = lVar14 + 8;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
      *(undefined8 *)(lVar12 + 0x50) = 0;
    }
    lVar12 = param_1[0xd4];
    if (*(long *)(lVar12 + 0x50) != 0) {
      plVar13 = (long *)*(long *)(lVar12 + 0x30);
      while (plVar13 != (long *)0x0) {
        lVar14 = *plVar13;
        if (plVar13[3] != 0) {
          (**(code **)(*(long *)(plVar13[3] + 0x48) + 0x18))();
          plVar13[3] = 0;
        }
        (**(code **)(**(long **)(lVar12 + 0x38) + 0x18))(*(long **)(lVar12 + 0x38),plVar13,0x20,8);
        plVar13 = (long *)lVar14;
      }
      uVar8 = *(ulong *)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x30) = 0;
      if (uVar8 != 0) {
        uVar9 = uVar8 & 3;
        if (uVar8 - 1 < 3) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar10 = lVar14 * 8;
            lVar14 = lVar14 + 4;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x18) = 0;
          } while (uVar8 - uVar9 != lVar14);
        }
        if (uVar9 != 0) {
          lVar14 = lVar14 << 3;
          lVar10 = -uVar9;
          do {
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar14) = 0;
            lVar14 = lVar14 + 8;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
      *(undefined8 *)(lVar12 + 0x50) = 0;
    }
    lVar12 = param_1[0xd9];
    if (*(long *)(lVar12 + 0x50) != 0) {
      plVar13 = (long *)*(long *)(lVar12 + 0x30);
      while (plVar13 != (long *)0x0) {
        lVar14 = *plVar13;
        if (plVar13[3] != 0) {
          (**(code **)(*(long *)(plVar13[3] + 0x48) + 0x18))();
          plVar13[3] = 0;
        }
        (**(code **)(**(long **)(lVar12 + 0x38) + 0x18))(*(long **)(lVar12 + 0x38),plVar13,0x20,8);
        plVar13 = (long *)lVar14;
      }
      uVar8 = *(ulong *)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x30) = 0;
      if (uVar8 != 0) {
        uVar9 = uVar8 & 3;
        if (uVar8 - 1 < 3) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar10 = lVar14 * 8;
            lVar14 = lVar14 + 4;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar10 + 0x18) = 0;
          } while (uVar8 - uVar9 != lVar14);
        }
        if (uVar9 != 0) {
          lVar14 = lVar14 << 3;
          lVar10 = -uVar9;
          do {
            *(undefined8 *)(*(long *)(lVar12 + 8) + lVar14) = 0;
            lVar14 = lVar14 + 8;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
      *(undefined8 *)(lVar12 + 0x50) = 0;
    }
    puVar3 = PTR_DAT_02717598;
    if ((char)param_1[0xd8] == '\0') {
      for (plVar13 = *(long **)(param_1[0xd0] + 0x28); plVar13 != (long *)0x0;
          plVar13 = (long *)*plVar13) {
        uVar8 = FUN_00895a90(*(undefined8 *)puVar3,*(undefined4 *)((long)plVar13 + 0x14));
        if ((uVar8 & 1) != 0) {
          FUN_00895a40(*(undefined8 *)puVar3,*(undefined4 *)((long)plVar13 + 0x14));
        }
      }
    }
    plVar13 = (long *)param_1[0xd0];
    if (plVar13[9] != 0) {
      plVar2 = (long *)plVar13[5];
      while (plVar2 != (long *)0x0) {
        lVar12 = *plVar2;
        (**(code **)(*(long *)plVar13[6] + 0x18))((long *)plVar13[6],plVar2,0x18,4);
        plVar2 = (long *)lVar12;
      }
      uVar8 = plVar13[1];
      plVar13[5] = 0;
      if (uVar8 != 0) {
        uVar9 = uVar8 & 3;
        if (uVar8 - 1 < 3) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          do {
            lVar14 = lVar12 * 8;
            lVar12 = lVar12 + 4;
            *(undefined8 *)(*plVar13 + lVar14) = 0;
            *(undefined8 *)(*plVar13 + lVar14 + 8) = 0;
            *(undefined8 *)(*plVar13 + lVar14 + 0x10) = 0;
            *(undefined8 *)(*plVar13 + lVar14 + 0x18) = 0;
          } while (uVar8 - uVar9 != lVar12);
        }
        if (uVar9 != 0) {
          lVar12 = lVar12 << 3;
          lVar14 = -uVar9;
          do {
            *(undefined8 *)(*plVar13 + lVar12) = 0;
            lVar12 = lVar12 + 8;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0);
        }
      }
      plVar13[9] = 0;
    }
    if ((char)param_1[0x300] != '\0') {
      bVar5 = FUN_00893630(param_1 + 0x301);
      *(byte *)(param_1 + 0x304) = bVar5 & 1;
    }
    puVar3 = PTR_DAT_02710840;
    lVar12 = 0;
    do {
      plVar13 = (long *)((long)param_1 + lVar12 + 0x1848);
      if (*plVar13 != -0x340d631b7bddd9bb) {
        lVar14 = *(long *)puVar3;
        uVar7 = FUN_010247a0(lVar14 + 0x390,plVar13);
        FUN_010232e0(lVar14 + 0x390,uVar7);
        *plVar13 = -0x340d631b7bddd9bb;
      }
      lVar12 = lVar12 + 8;
    } while (lVar12 != 0xa0);
    fVar17 = (float)_DAT_02a55370;
    auVar50._0_4_ = fVar17 * fVar17;
    fVar27 = (float)((ulong)_DAT_02a55370 >> 0x20);
    auVar50._4_4_ = fVar27 * fVar27;
    fVar28 = (float)uRam0000000002a55378;
    auVar50._8_4_ = fVar28 * fVar28;
    fVar29 = (float)((ulong)uRam0000000002a55378 >> 0x20);
    auVar50._12_4_ = fVar29 * fVar29;
    auVar49 = NEON_ext(auVar50,auVar50,8,1);
    fVar30 = auVar49._0_4_ + auVar50._0_4_;
    fVar48 = auVar49._4_4_ + auVar50._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar31._8_8_ = CONCAT44(fVar30,fVar16);
      auVar31._0_8_ = CONCAT44(fVar30,fVar16);
      lVar12 = param_1[0x8c];
      auVar50 = NEON_frsqrte(auVar31,4);
      auVar60._0_4_ = auVar50._0_4_ * fVar16;
      auVar60._4_4_ = auVar50._4_4_ * fVar30;
      auVar60._8_4_ = auVar50._8_4_ * fVar16;
      auVar60._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar60,4);
      auVar51._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar51._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar51._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar51._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar32._0_4_ = fVar16 * auVar51._0_4_;
      auVar32._4_4_ = fVar30 * auVar51._4_4_;
      auVar32._8_4_ = fVar16 * auVar51._8_4_;
      auVar32._12_4_ = fVar30 * auVar51._12_4_;
      auVar50 = NEON_frsqrts(auVar51,auVar32,4);
      fVar17 = fVar17 * auVar51._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar51._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar51._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar51._12_4_ * auVar50._12_4_;
      auVar49._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar49[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar49[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar49[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar49[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar49[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar49[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar49[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar49[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      *(long *)(lVar12 + 0x88) = auVar49._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar49._0_8_;
    }
    FUN_00a72ba0(param_1);
    fVar17 = (float)_DAT_02a55370;
    auVar33._0_4_ = fVar17 * fVar17;
    fVar27 = (float)((ulong)_DAT_02a55370 >> 0x20);
    auVar33._4_4_ = fVar27 * fVar27;
    fVar28 = (float)uRam0000000002a55378;
    auVar33._8_4_ = fVar28 * fVar28;
    fVar29 = (float)((ulong)uRam0000000002a55378 >> 0x20);
    auVar33._12_4_ = fVar29 * fVar29;
    auVar50 = NEON_ext(auVar33,auVar33,8,1);
    fVar30 = auVar50._0_4_ + auVar33._0_4_;
    fVar48 = auVar50._4_4_ + auVar33._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar34._8_8_ = CONCAT44(fVar30,fVar16);
      auVar34._0_8_ = CONCAT44(fVar30,fVar16);
      auVar50 = NEON_frsqrte(auVar34,4);
      auVar61._0_4_ = auVar50._0_4_ * fVar16;
      auVar61._4_4_ = auVar50._4_4_ * fVar30;
      auVar61._8_4_ = auVar50._8_4_ * fVar16;
      auVar61._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar61,4);
      auVar52._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar52._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar52._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar52._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      auVar62._0_4_ = fVar16 * auVar52._0_4_;
      auVar62._4_4_ = fVar30 * auVar52._4_4_;
      auVar62._8_4_ = fVar16 * auVar52._8_4_;
      auVar62._12_4_ = fVar30 * auVar52._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar50 = NEON_frsqrts(auVar52,auVar62,4);
      fVar17 = fVar17 * auVar52._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar52._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar52._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar52._12_4_ * auVar50._12_4_;
      auVar18._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar18[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar18[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar18[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar18[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar18[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar18[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar18[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar18[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      uVar8 = (**(code **)(*param_1 + 0x748))(param_1,0);
      lVar12 = 0x468;
      if ((uVar8 & 1) == 0) {
        lVar12 = 0x470;
      }
      lVar12 = *(long *)((long)param_1 + lVar12);
      *(long *)(lVar12 + 0x88) = auVar18._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar18._0_8_;
    }
    fVar17 = (float)_DAT_02a55380;
    auVar35._0_4_ = fVar17 * fVar17;
    fVar27 = (float)((ulong)_DAT_02a55380 >> 0x20);
    auVar35._4_4_ = fVar27 * fVar27;
    fVar28 = (float)uRam0000000002a55388;
    auVar35._8_4_ = fVar28 * fVar28;
    fVar29 = (float)((ulong)uRam0000000002a55388 >> 0x20);
    auVar35._12_4_ = fVar29 * fVar29;
    auVar50 = NEON_ext(auVar35,auVar35,8,1);
    fVar30 = auVar50._0_4_ + auVar35._0_4_;
    fVar48 = auVar50._4_4_ + auVar35._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar36._8_8_ = CONCAT44(fVar30,fVar16);
      auVar36._0_8_ = CONCAT44(fVar30,fVar16);
      auVar50 = NEON_frsqrte(auVar36,4);
      auVar63._0_4_ = auVar50._0_4_ * fVar16;
      auVar63._4_4_ = auVar50._4_4_ * fVar30;
      auVar63._8_4_ = auVar50._8_4_ * fVar16;
      auVar63._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar63,4);
      auVar53._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar53._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar53._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar53._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      auVar64._0_4_ = fVar16 * auVar53._0_4_;
      auVar64._4_4_ = fVar30 * auVar53._4_4_;
      auVar64._8_4_ = fVar16 * auVar53._8_4_;
      auVar64._12_4_ = fVar30 * auVar53._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar50 = NEON_frsqrts(auVar53,auVar64,4);
      fVar17 = fVar17 * auVar53._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar53._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar53._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar53._12_4_ * auVar50._12_4_;
      auVar19._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar19[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar19[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar19[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar19[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar19[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar19[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar19[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar19[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      uVar8 = (**(code **)(*param_1 + 0x748))(param_1,1);
      lVar12 = 0x468;
      if ((uVar8 & 1) == 0) {
        lVar12 = 0x470;
      }
      lVar12 = *(long *)((long)param_1 + lVar12);
      *(long *)(lVar12 + 0x88) = auVar19._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar19._0_8_;
    }
    fVar17 = (float)_DAT_02a55390;
    auVar37._0_4_ = fVar17 * fVar17;
    fVar27 = (float)((ulong)_DAT_02a55390 >> 0x20);
    auVar37._4_4_ = fVar27 * fVar27;
    fVar28 = (float)uRam0000000002a55398;
    auVar37._8_4_ = fVar28 * fVar28;
    fVar29 = (float)((ulong)uRam0000000002a55398 >> 0x20);
    auVar37._12_4_ = fVar29 * fVar29;
    auVar50 = NEON_ext(auVar37,auVar37,8,1);
    fVar30 = auVar50._0_4_ + auVar37._0_4_;
    fVar48 = auVar50._4_4_ + auVar37._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar38._8_8_ = CONCAT44(fVar30,fVar16);
      auVar38._0_8_ = CONCAT44(fVar30,fVar16);
      auVar50 = NEON_frsqrte(auVar38,4);
      auVar65._0_4_ = auVar50._0_4_ * fVar16;
      auVar65._4_4_ = auVar50._4_4_ * fVar30;
      auVar65._8_4_ = auVar50._8_4_ * fVar16;
      auVar65._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar65,4);
      auVar54._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar54._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar54._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar54._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      auVar66._0_4_ = fVar16 * auVar54._0_4_;
      auVar66._4_4_ = fVar30 * auVar54._4_4_;
      auVar66._8_4_ = fVar16 * auVar54._8_4_;
      auVar66._12_4_ = fVar30 * auVar54._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar50 = NEON_frsqrts(auVar54,auVar66,4);
      fVar17 = fVar17 * auVar54._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar54._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar54._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar54._12_4_ * auVar50._12_4_;
      auVar20._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar20[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar20[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar20[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar20[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar20[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar20[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar20[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar20[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      uVar8 = (**(code **)(*param_1 + 0x748))(param_1,0);
      lVar12 = 0x478;
      if ((uVar8 & 1) == 0) {
        lVar12 = 0x480;
      }
      lVar12 = *(long *)((long)param_1 + lVar12);
      *(long *)(lVar12 + 0x88) = auVar20._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar20._0_8_;
    }
    fVar17 = (float)_DAT_02a553a0;
    auVar39._0_4_ = fVar17 * fVar17;
    fVar27 = (float)((ulong)_DAT_02a553a0 >> 0x20);
    auVar39._4_4_ = fVar27 * fVar27;
    fVar28 = (float)uRam0000000002a553a8;
    auVar39._8_4_ = fVar28 * fVar28;
    fVar29 = (float)((ulong)uRam0000000002a553a8 >> 0x20);
    auVar39._12_4_ = fVar29 * fVar29;
    auVar50 = NEON_ext(auVar39,auVar39,8,1);
    fVar30 = auVar50._0_4_ + auVar39._0_4_;
    fVar48 = auVar50._4_4_ + auVar39._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar40._8_8_ = CONCAT44(fVar30,fVar16);
      auVar40._0_8_ = CONCAT44(fVar30,fVar16);
      auVar50 = NEON_frsqrte(auVar40,4);
      auVar67._0_4_ = auVar50._0_4_ * fVar16;
      auVar67._4_4_ = auVar50._4_4_ * fVar30;
      auVar67._8_4_ = auVar50._8_4_ * fVar16;
      auVar67._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar67,4);
      auVar55._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar55._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar55._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar55._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      auVar68._0_4_ = fVar16 * auVar55._0_4_;
      auVar68._4_4_ = fVar30 * auVar55._4_4_;
      auVar68._8_4_ = fVar16 * auVar55._8_4_;
      auVar68._12_4_ = fVar30 * auVar55._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar50 = NEON_frsqrts(auVar55,auVar68,4);
      fVar17 = fVar17 * auVar55._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar55._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar55._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar55._12_4_ * auVar50._12_4_;
      auVar21._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar21[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar21[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar21[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar21[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar21[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar21[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar21[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar21[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      uVar8 = (**(code **)(*param_1 + 0x748))(param_1,1);
      lVar12 = 0x478;
      if ((uVar8 & 1) == 0) {
        lVar12 = 0x480;
      }
      lVar12 = *(long *)((long)param_1 + lVar12);
      *(long *)(lVar12 + 0x88) = auVar21._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar21._0_8_;
    }
    fVar17 = (float)_DAT_02a553b0;
    auVar41._0_4_ = fVar17 * fVar17;
    fVar27 = (float)((ulong)_DAT_02a553b0 >> 0x20);
    auVar41._4_4_ = fVar27 * fVar27;
    fVar28 = (float)uRam0000000002a553b8;
    auVar41._8_4_ = fVar28 * fVar28;
    fVar29 = (float)((ulong)uRam0000000002a553b8 >> 0x20);
    auVar41._12_4_ = fVar29 * fVar29;
    auVar50 = NEON_ext(auVar41,auVar41,8,1);
    fVar30 = auVar50._0_4_ + auVar41._0_4_;
    fVar48 = auVar50._4_4_ + auVar41._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar42._8_8_ = CONCAT44(fVar30,fVar16);
      auVar42._0_8_ = CONCAT44(fVar30,fVar16);
      auVar50 = NEON_frsqrte(auVar42,4);
      auVar69._0_4_ = auVar50._0_4_ * fVar16;
      auVar69._4_4_ = auVar50._4_4_ * fVar30;
      auVar69._8_4_ = auVar50._8_4_ * fVar16;
      auVar69._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar69,4);
      auVar56._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar56._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar56._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar56._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      auVar70._0_4_ = fVar16 * auVar56._0_4_;
      auVar70._4_4_ = fVar30 * auVar56._4_4_;
      auVar70._8_4_ = fVar16 * auVar56._8_4_;
      auVar70._12_4_ = fVar30 * auVar56._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar50 = NEON_frsqrts(auVar56,auVar70,4);
      fVar17 = fVar17 * auVar56._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar56._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar56._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar56._12_4_ * auVar50._12_4_;
      auVar22._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar22[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar22[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar22[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar22[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar22[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar22[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar22[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar22[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      uVar8 = (**(code **)(*param_1 + 0x748))(param_1,0);
      lVar12 = 0x488;
      if ((uVar8 & 1) == 0) {
        lVar12 = 0x490;
      }
      lVar12 = *(long *)((long)param_1 + lVar12);
      *(long *)(lVar12 + 0x88) = auVar22._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar22._0_8_;
    }
    fVar17 = (float)_DAT_02a553c0;
    auVar43._0_4_ = fVar17 * fVar17;
    fVar27 = (float)((ulong)_DAT_02a553c0 >> 0x20);
    auVar43._4_4_ = fVar27 * fVar27;
    fVar28 = (float)uRam0000000002a553c8;
    auVar43._8_4_ = fVar28 * fVar28;
    fVar29 = (float)((ulong)uRam0000000002a553c8 >> 0x20);
    auVar43._12_4_ = fVar29 * fVar29;
    auVar50 = NEON_ext(auVar43,auVar43,8,1);
    fVar30 = auVar50._0_4_ + auVar43._0_4_;
    fVar48 = auVar50._4_4_ + auVar43._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar44._8_8_ = CONCAT44(fVar30,fVar16);
      auVar44._0_8_ = CONCAT44(fVar30,fVar16);
      auVar50 = NEON_frsqrte(auVar44,4);
      auVar71._0_4_ = auVar50._0_4_ * fVar16;
      auVar71._4_4_ = auVar50._4_4_ * fVar30;
      auVar71._8_4_ = auVar50._8_4_ * fVar16;
      auVar71._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar71,4);
      auVar57._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar57._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar57._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar57._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      auVar72._0_4_ = fVar16 * auVar57._0_4_;
      auVar72._4_4_ = fVar30 * auVar57._4_4_;
      auVar72._8_4_ = fVar16 * auVar57._8_4_;
      auVar72._12_4_ = fVar30 * auVar57._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar50 = NEON_frsqrts(auVar57,auVar72,4);
      fVar17 = fVar17 * auVar57._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar57._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar57._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar57._12_4_ * auVar50._12_4_;
      auVar23._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar23[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar23[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar23[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar23[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar23[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar23[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar23[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar23[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      uVar8 = (**(code **)(*param_1 + 0x748))(param_1,1);
      lVar12 = 0x488;
      if ((uVar8 & 1) == 0) {
        lVar12 = 0x490;
      }
      lVar12 = *(long *)((long)param_1 + lVar12);
      *(long *)(lVar12 + 0x88) = auVar23._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar23._0_8_;
    }
    lVar12 = FUN_009c5ff0(param_1);
    if ((lVar12 == 0) ||
       ((uVar8 = FUN_008f35c0(lVar12,0x800), (uVar8 & 1) == 0 &&
        (uVar8 = FUN_008f35c0(lVar12,0x1000), (uVar8 & 1) == 0)))) {
      auVar25._8_8_ = uRam0000000002a553d8;
      auVar25._0_8_ = _DAT_02a553d0;
    }
    else {
      auVar25._8_8_ = uRam0000000002a553e8;
      auVar25._0_8_ = _DAT_02a553e0;
    }
    iVar59 = -(uint)(0.0 < auVar25._4_4_);
    auVar73._0_4_ = auVar25._0_4_;
    auVar73._4_4_ = 0;
    auVar73._8_8_ = auVar25._8_8_;
    auVar24._4_4_ = iVar59;
    auVar24._0_4_ = iVar59;
    auVar24._8_4_ = iVar59;
    auVar24._12_4_ = iVar59;
    auVar25 = auVar25 ^ (auVar25 ^ auVar73) & auVar24;
    fVar17 = auVar25._0_4_;
    auVar45._0_4_ = fVar17 * fVar17;
    fVar27 = auVar25._4_4_;
    auVar45._4_4_ = fVar27 * fVar27;
    fVar28 = auVar25._8_4_;
    auVar45._8_4_ = fVar28 * fVar28;
    fVar29 = auVar25._12_4_;
    auVar45._12_4_ = fVar29 * fVar29;
    auVar50 = NEON_ext(auVar45,auVar45,8,1);
    fVar30 = auVar50._0_4_ + auVar45._0_4_;
    fVar48 = auVar50._4_4_ + auVar45._4_4_;
    fVar16 = fVar30 + fVar48;
    fVar30 = fVar30 + fVar48;
    if (fVar16 != 0.0) {
      auVar46._8_8_ = CONCAT44(fVar30,fVar16);
      auVar46._0_8_ = CONCAT44(fVar30,fVar16);
      lVar12 = param_1[0x8a];
      auVar50 = NEON_frsqrte(auVar46,4);
      auVar74._0_4_ = auVar50._0_4_ * fVar16;
      auVar74._4_4_ = auVar50._4_4_ * fVar30;
      auVar74._8_4_ = auVar50._8_4_ * fVar16;
      auVar74._12_4_ = auVar50._12_4_ * fVar30;
      auVar49 = NEON_frsqrts(auVar50,auVar74,4);
      auVar58._0_4_ = auVar50._0_4_ * auVar49._0_4_;
      auVar58._4_4_ = auVar50._4_4_ * auVar49._4_4_;
      auVar58._8_4_ = auVar50._8_4_ * auVar49._8_4_;
      auVar58._12_4_ = auVar50._12_4_ * auVar49._12_4_;
      iVar59 = -(uint)(fVar16 == 0.0);
      iVar75 = -(uint)(fVar30 == 0.0);
      iVar76 = -(uint)(fVar16 == 0.0);
      iVar77 = -(uint)(fVar30 == 0.0);
      auVar47._0_4_ = fVar16 * auVar58._0_4_;
      auVar47._4_4_ = fVar30 * auVar58._4_4_;
      auVar47._8_4_ = fVar16 * auVar58._8_4_;
      auVar47._12_4_ = fVar30 * auVar58._12_4_;
      auVar50 = NEON_frsqrts(auVar58,auVar47,4);
      fVar17 = fVar17 * auVar58._0_4_ * auVar50._0_4_;
      fVar27 = fVar27 * auVar58._4_4_ * auVar50._4_4_;
      fVar28 = fVar28 * auVar58._8_4_ * auVar50._8_4_;
      fVar29 = fVar29 * auVar58._12_4_ * auVar50._12_4_;
      auVar26._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,
                                               CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                        ~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                 ~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar17 >> 8)
                                                                          & ~(byte)((uint)iVar59 >>
                                                                                   8),
                                                                          SUB41(fVar17,0) &
                                                                          ~(byte)iVar59)))))));
      auVar26[8] = SUB41(fVar28,0) & ~(byte)iVar76;
      auVar26[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar26[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar26[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar26[0xc] = SUB41(fVar29,0) & ~(byte)iVar77;
      auVar26[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar26[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar26[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      *(long *)(lVar12 + 0x88) = auVar26._8_8_;
      *(undefined8 *)(lVar12 + 0x80) = auVar26._0_8_;
    }
    FUN_009c5430(param_1 + 1000);
    FUN_009c5430(param_1 + 0x3ea);
    FUN_009c5430(param_1 + 0x3ec);
    FUN_01063680();
    FUN_010636f0();
    FUN_01063730();
    lVar12 = *(long *)(param_1[0x3c3] + 0x400);
    if (lVar12 == 0) {
      FUN_00dab450(0,0,1);
      lVar12 = *(long *)(param_1[0x3c3] + 0x400);
      if (lVar12 == 0) goto LAB_00a6ed5c;
LAB_00a6ec88:
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_00dab450(lVar12,1,1);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      lVar12 = *(long *)(param_1[0x3c3] + 0x400);
      if (lVar12 != 0) goto LAB_00a6ecc8;
LAB_00a6ed78:
      FUN_00dab450(0,2,1);
      plVar13 = (long *)param_1[0x17a];
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_00dab450(lVar12,0,1);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      lVar12 = *(long *)(param_1[0x3c3] + 0x400);
      if (lVar12 != 0) goto LAB_00a6ec88;
LAB_00a6ed5c:
      FUN_00dab450(0,1,1);
      lVar12 = *(long *)(param_1[0x3c3] + 0x400);
      if (lVar12 == 0) goto LAB_00a6ed78;
LAB_00a6ecc8:
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_00dab450(lVar12,2,1);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      plVar13 = (long *)param_1[0x17a];
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x198))(plVar13,1);
    }
    plVar13 = (long *)param_1[0x17b];
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x198))(plVar13,1);
    }
    *(undefined4 *)(param_1 + 0x14) = 7;
joined_r0x00a6ed38:
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    }
    break;
  case 7:
    if ((((char)param_1[0x300] == '\0') || ((char)param_1[0x304] == '\0')) ||
       (uVar8 = FUN_00893790(param_1 + 0x301), (uVar8 & 1) == 0)) {
      FUN_008933b0(param_1 + 0x301);
      *(undefined1 *)(param_1 + 0x300) = 0;
      *(undefined1 *)(param_1 + 0x304) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}


