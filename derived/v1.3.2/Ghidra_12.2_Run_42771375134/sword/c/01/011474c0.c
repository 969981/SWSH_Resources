/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011474c0; name: FUN_011474c0
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_011474c0(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined1 uVar28;
  long local_478;
  long local_470;
  long local_468;
  ulong local_460;
  byte *pbStack_458;
  undefined8 local_450;
  long local_448;
  ulong local_80;
  byte *pbStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_027108d0;
  puVar5 = PTR_DAT_02710798;
  if (0x17 < *(uint *)(param_1 + 0x240)) {
    return 0;
  }
  puVar1 = (uint *)(param_1 + 0x240);
  switch(*(uint *)(param_1 + 0x240)) {
  case 0:
    uVar18 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940);
    if ((uVar18 & 1) == 0) {
      FUN_009eca50(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x240) = 1;
      return 0;
    }
    goto LAB_011482c8;
  case 1:
    uVar18 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940);
    if ((uVar18 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x124);
      if (uVar12 < 2) {
        return 0;
      }
      if (uVar12 == 3) {
        FUN_01146e70(param_1);
        *(undefined4 *)(param_1 + 0x240) = 4;
        return 0;
      }
      if (uVar12 == 2) break;
    }
    goto LAB_011482c8;
  case 2:
    uVar23 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288);
    pbStack_458 = (byte *)((ulong)pbStack_458 & 0xffffffffffffff00);
    local_460 = 0;
    *(undefined2 *)(param_1 + 0x1dc) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0xffffffff00000008;
    *(undefined8 *)(param_1 + 0x1d0) = 0x6ffffffff;
    *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
    local_58 = uVar23;
    if (*(long *)(param_1 + 0x1e8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1e8) = 0;
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    if (*(long *)(param_1 + 0x1f0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    *(undefined4 *)(param_1 + 0x200) = pbStack_458._0_4_;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(ulong *)(param_1 + 0x1f8) = local_460;
    *(undefined8 *)(param_1 + 0x204) = 0x100000003;
    if (*(long *)(param_1 + 0x210) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x210) = 0;
    }
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 3;
    uVar17 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x50))
                       (*(long **)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x1e0) = uVar17;
    *(undefined1 *)(param_1 + 0x1dc) = 1;
    *(undefined1 *)(param_1 + 0x1f8) = 1;
    lVar25 = *(long *)(param_2 + 0x60);
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
    }
    FUN_00b96170(&local_460,lVar25,uVar23,&local_58);
    if (*(long *)(param_1 + 0x1c0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1c0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
    uVar18 = local_460;
    local_460 = 0;
    *(ulong *)(param_1 + 0x1c0) = uVar18;
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
      uVar18 = *(ulong *)(param_1 + 0x1c0);
    }
    puVar8 = PTR_DAT_02718cd8;
    puVar7 = PTR_DAT_02718cd0;
    puVar6 = PTR_DAT_02717530;
    puVar5 = PTR_DAT_02717528;
    if ((uVar18 != 0) && (*(int *)(uVar18 + 0x54) != 0)) {
      piVar2 = (int *)(uVar18 + 0x54);
      iVar16 = *(int *)(uVar18 + 0x54);
      do {
        plVar22 = *(long **)(uVar18 + 0x58);
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            uVar23 = FUN_00b8c810();
            *(undefined8 *)puVar6 = uVar23;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar22 == (long *)0x0) goto LAB_01148a20;
          if (plVar22 == (long *)puVar8) break;
          plVar22 = (long *)*plVar22;
        }
        iVar11 = *piVar2;
        if (iVar11 == iVar16) {
          cVar9 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar16 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') {
            lVar25 = *(long *)(uVar18 + 0x60);
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x6f0) = param_1 + 0x1c8;
              (**(code **)(*(long *)(lVar25 + -8) + 0x18))();
              goto LAB_01148a28;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01148a20:
    _DAT_00000740 = param_1 + 0x1c8;
LAB_01148a28:
    uVar12 = 3;
    break;
  case 3:
    if ((*(long *)(param_1 + 0x1c0) == 0) || (*(int *)(*(long *)(param_1 + 0x1c0) + 0x54) == 0)) {
      *(undefined4 *)(param_1 + 0x240) = 0;
      *(char *)(param_1 + 0x128) = (char)*(undefined4 *)(param_1 + 0x1cc);
      return 0;
    }
    return 0;
  case 4:
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      lVar25 = *(long *)PTR_DAT_02710798;
      lVar21 = *(long *)(lVar25 + 0x1e8);
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
        lVar25 = *(long *)puVar5;
      }
      lVar25 = *(long *)(lVar25 + 0x288);
      if (lVar25 != 0) {
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
      }
      cVar9 = FUN_01524bc0(lVar21);
      lVar19 = FUN_014fba00(lVar25);
      uVar28 = *(undefined1 *)(lVar19 + 0x174);
      if (lVar25 != 0) {
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
      }
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
      }
    }
    else {
      if ((*(long *)PTR_DAT_02718f20 == 0 || *(long *)PTR_DAT_02716a30 == 0) ||
         (*(long *)(*(long *)PTR_DAT_02716a30 + 0xf8) == 0)) {
        FUN_011f8e00(*(undefined8 *)PTR_DAT_02710490);
        local_460 = 0;
      }
      else {
        FUN_011ffbe0(&local_460);
        if (local_460 != 0) {
          cVar9 = FUN_01524bc0(*(undefined8 *)(local_460 + 8));
          uVar28 = *(undefined1 *)(*(long *)(local_460 + 0x10) + 0x1d4);
          goto LAB_01147f78;
        }
      }
      uVar28 = 0;
      cVar9 = ',';
    }
LAB_01147f78:
    lVar21 = *(long *)(param_1 + 0x88);
    uVar12 = FUN_01148c90();
    cVar10 = *(char *)(param_1 + 0x1b9);
    lVar25 = *(long *)(param_1 + 0x138);
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
    }
    if (cVar10 != '\0') {
      local_460 = 0xa906818ff6c68813;
      pbStack_458 = (byte *)0x1d30dcd;
      goto LAB_01147fc0;
    }
    if (*(int *)(lVar21 + 4) == 2) {
      local_460 = 0xf9d9dfdeabbf80d8;
      pbStack_458 = (byte *)0x1cde99b;
      local_450 = 0xc;
      local_448 = 0;
      if (lVar25 == 0) goto LAB_01148370;
      goto LAB_01148360;
    }
    if (lVar25 == 0) {
      local_460 = 0x7340add758451ea;
      pbStack_458 = (byte *)0x1d30381;
      local_450 = 0xc;
      local_448 = 0;
      goto LAB_01148370;
    }
    cVar10 = FUN_009ff160(lVar25);
    if (cVar10 == '\x01') {
      uVar18 = 0x9899a43ace435588;
      local_450 = 0xc;
      pbStack_458 = (byte *)0x1d3a199;
      goto switchD_01148934_caseD_1f;
    }
    uVar18 = 0x7340add758451ea;
    cVar10 = FUN_009ff160(lVar25);
    pbStack_458 = (byte *)0x1d30381;
    local_450 = 0xc;
    if ((cVar10 == '\x02') || (((uVar12 ^ 1) & 1) != 0)) goto switchD_01148934_caseD_1f;
    local_450 = 0xc;
    pbStack_458 = (byte *)0x1d30381;
    switch(uVar28) {
    case 7:
    case 8:
    case 9:
    case 10:
      uVar18 = 0xf0779696c5cb503;
      local_450 = 0xd;
      pbStack_458 = (byte *)0x1d30ddb;
      break;
    case 0xb:
    case 0xc:
    case 0xd:
      uVar18 = 0x37217c46ea49a129;
      local_450 = 0xd;
      pbStack_458 = (byte *)0x1d221d3;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x2c:
      uVar18 = 0xdd49d08d891bf3e8;
      local_450 = 0xd;
      pbStack_458 = (byte *)0x1cec5ed;
      break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      uVar18 = 0xe703aaf289c32942;
      local_450 = 0xd;
      pbStack_458 = (byte *)0x1d2d60a;
      break;
    case 0x17:
    case 0x18:
    case 0x19:
      pbStack_458 = &DAT_01d3acf7;
      if (cVar9 != ',') {
        pbStack_458 = &DAT_01d01322;
      }
      local_460 = 0xcbf29ce484222645;
      bVar3 = *pbStack_458;
      pbVar20 = pbStack_458;
      while (bVar3 != 0) {
        pbVar20 = pbVar20 + 1;
        local_460 = (local_460 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar20;
      }
      goto LAB_01147fc0;
    case 0x1a:
    case 0x1b:
      uVar18 = 0x1631f98536507fae;
      local_450 = 0xd;
      pbStack_458 = (byte *)0x1d45294;
      break;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x2b:
      pbStack_458 = &DAT_01d3ad05;
      if (cVar9 != ',') {
        pbStack_458 = &DAT_01d1f25a;
      }
      local_460 = 0xcbf29ce484222645;
      bVar3 = *pbStack_458;
      pbVar20 = pbStack_458;
      while (bVar3 != 0) {
        pbVar20 = pbVar20 + 1;
        local_460 = (local_460 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar20;
      }
LAB_01147fc0:
      local_450 = 0xd;
      local_448 = 0;
      if (lVar25 != 0) goto LAB_01148360;
      goto LAB_01148370;
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x28:
    case 0x2d:
    case 0x34:
    case 0x35:
    case 0x36:
      uVar18 = 0xd2186ea8fafd9763;
      local_450 = 8;
      pbStack_458 = (byte *)0x1d1f268;
      break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
      uVar18 = 0x8acfadb3ed8fcfad;
      local_450 = 8;
      pbStack_458 = (byte *)0x1d2d618;
      break;
    case 0x3b:
    case 0x3c:
      uVar18 = 0x236f06673ce58a1c;
      local_450 = 0xe;
      pbStack_458 = (byte *)0x1d116c9;
    }
switchD_01148934_caseD_1f:
    local_460 = uVar18;
LAB_01148360:
    local_448 = 0;
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
LAB_01148370:
    uVar14 = 5;
    if (*(char *)(param_1 + 0x1b8) != '\0') {
      uVar14 = 2;
    }
    FUN_00ef2e90(&local_60,uVar14,&local_460);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    local_80 = local_460;
    pbStack_78 = pbStack_458;
    local_70 = local_450;
    local_68 = local_448;
    if (local_448 != 0) {
      (**(code **)(*(long *)(local_448 + 0x48) + 0x10))();
    }
    FUN_010011e0(&local_80,*(long *)(param_1 + 0x88) + 0x1c0);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar25 = local_448;
    uVar18 = local_460;
    if (local_448 != 0) {
      (**(code **)(*(long *)(local_448 + 0x48) + 0x10))();
    }
    if ((long)uVar18 < -0x626202154407f28) {
      if ((uVar18 != 0x8acfadb3ed8fcfad) && (uVar18 != 0xa906818ff6c68813)) goto LAB_011484c8;
    }
    else if ((uVar18 != 0xf9d9dfdeabbf80d8) && (uVar18 != 0x236f06673ce58a1c)) {
LAB_011484c8:
      lVar21 = FUN_00e7e2e0();
      if (lVar21 < 0x2b7f8bc0d3731219) {
        if (lVar21 < -0x50034941baa8cf66) {
          if ((lVar21 != -0x6c53c40cc5fed46b) && (lVar21 != -0x5337bf0cb8059f5c)) goto LAB_011489e8;
        }
        else if ((lVar21 != -0x50034941baa8cf66) &&
                ((lVar21 != -0x4899a241b6d0dce9 && (lVar21 != -0x285b8406c95fe0c1))))
        goto LAB_011489e8;
      }
      else if (lVar21 < 0x494f1572e22cad98) {
        if ((lVar21 != 0x2b7f8bc0d3731219) && (lVar21 != 0x44f5dd92ef9b252e)) goto LAB_011489e8;
      }
      else if ((lVar21 != 0x494f1572e22cad98) &&
              ((lVar21 != 0x5daca06aa5ffc963 && (lVar21 != 0x7e84b86c1779039c)))) {
LAB_011489e8:
        *(undefined1 *)(param_1 + 0x298) = 1;
        *(undefined4 *)(param_1 + 0x240) = 5;
        goto joined_r0x01148494;
      }
    }
    *(undefined1 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x240) = 5;
joined_r0x01148494:
    if (lVar25 != 0) {
      plVar22 = (long *)(lVar25 + 0x48);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    if (local_448 == 0) {
      return 0;
    }
    (**(code **)(*(long *)(local_448 + 0x48) + 0x18))();
    return 0;
  case 5:
    plVar24 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
    lVar25 = _DAT_00000060;
    for (plVar22 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); _DAT_00000060 = lVar25,
        plVar22 != plVar24; plVar22 = plVar22 + 1) {
      uVar18 = (**(code **)(*(long *)*plVar22 + 0x88))();
      if ((uVar18 & 1) == 0) {
        lVar25 = *plVar22;
        uVar18 = FUN_015b5320(lVar25 + 0x50);
        if ((uVar18 & 1) != 0) {
          *(undefined1 *)(lVar25 + 0x218) = 0;
          *(undefined8 *)(lVar25 + 0xb8) = DAT_02a63bf8;
          *(undefined8 *)(lVar25 + 0xb0) = DAT_02a63bf0;
          *(undefined1 *)(lVar25 + 0xc0) = 1;
        }
      }
      lVar25 = _DAT_00000060;
    }
    if (*(char *)(param_1 + 0x1a1) != '\0') {
      lVar21 = *(long *)(param_2 + 0x90);
      if (lVar21 == 0) {
        uVar18 = FUN_016b1890(*(undefined8 *)(lVar25 + 0x630),0);
      }
      else {
        plVar22 = (long *)(lVar21 + 0x48);
        (**(code **)(*plVar22 + 0x10))(plVar22);
        lVar25 = *(long *)(lVar21 + 0x60);
        (**(code **)(*plVar22 + 0x18))(plVar22);
        uVar18 = FUN_016b1890(*(undefined8 *)(lVar25 + 0x630),0);
      }
      if ((uVar18 & 1) != 0) {
        FUN_016b1790(*(undefined8 *)(lVar25 + 0x630),0,1);
      }
    }
    FUN_01148e10(param_1);
    puVar5 = PTR_DAT_027107a8;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,param_1 + 0x220);
    local_460 = 0x75c8c2706916771a;
    pbStack_458 = (byte *)0x1d30da1;
    local_450 = 0x11;
    local_448 = 0;
    FUN_008962c0(*(long *)puVar5 + 0x108,&local_460);
    if (local_448 != 0) {
      (**(code **)(*(long *)(local_448 + 0x48) + 0x18))();
    }
    local_460 = 0x3761c04633aaf992;
    pbStack_458 = (byte *)0x1d25de4;
    local_450 = 0x1a;
    local_448 = 0;
    FUN_008962c0(*(long *)puVar5 + 0x108,&local_460);
    if (local_448 != 0) {
      (**(code **)(*(long *)(local_448 + 0x48) + 0x18))();
    }
    uVar14 = 8;
    if (*(char *)(param_1 + 0x140) != '\0') {
      uVar14 = 6;
    }
    *(undefined4 *)(param_1 + 0x240) = uVar14;
    return 0;
  case 6:
    FUN_01149060(&local_460,param_1);
    if ((char)local_460 == '\0') {
      *puVar1 = 8;
      return 0;
    }
    lVar25 = *(long *)(param_2 + 0x68);
    if (lVar25 == 0) {
      FUN_0114d1c0(&local_58,0,&pbStack_458);
      lVar25 = *(long *)(param_1 + 0x218);
    }
    else {
      plVar22 = (long *)(lVar25 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0114d1c0(&local_58,lVar25,&pbStack_458);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      lVar25 = *(long *)(param_1 + 0x218);
    }
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x218) = 0;
    }
    *(undefined8 *)(param_1 + 0x218) = local_58;
    *(undefined4 *)(param_1 + 0x240) = 7;
    goto joined_r0x01147d28;
  case 7:
    if ((*(long *)(param_1 + 0x218) == 0) || (*(int *)(*(long *)(param_1 + 0x218) + 0x54) == 0)) {
      *puVar1 = 8;
      return 3;
    }
    return 0;
  case 8:
    uVar23 = FUN_00e36ab0();
    uVar17 = FUN_00e36a90();
    puVar5 = PTR_DAT_027108d0;
    FUN_0114a790(*(long *)PTR_DAT_027108d0 + 0x50,*(undefined8 *)(param_1 + 0x88));
    FUN_01002420(*(undefined8 *)puVar5,uVar17,uVar23);
    *(undefined4 *)(param_1 + 0x240) = 9;
    if (*(char *)(param_1 + 0x298) != '\0') {
      local_460 = 0xfc64c50c5cd8340;
      pbStack_458 = (byte *)0x1cf3c14;
      local_450 = 0x18;
      local_448 = 0;
      FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_460);
      if (local_448 != 0) {
        (**(code **)(*(long *)(local_448 + 0x48) + 0x18))();
      }
    }
    return 3;
  case 9:
    uVar18 = FUN_01002a30(*(undefined8 *)PTR_DAT_027108d0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    FUN_0114a790(*(undefined8 *)(param_1 + 0x88),*(long *)puVar6 + 0x50);
    if (*(char *)(param_1 + 0x1b8) != '\0') {
      *(undefined4 *)(param_1 + 0x240) = 0x14;
      if (*(int *)(*(long *)(param_1 + 0x88) + 0xae8) == 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x88) + 0xbb0) = 4;
        return 0;
      }
      return 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x88) + 4) == 2) {
      if (*(uint *)(*(long *)(param_1 + 0x88) + 0xae8) < 6) {
        FUN_0114adb0(param_1);
        lVar25 = *(long *)(param_1 + 0x88);
        if (*(int *)(lVar25 + 0xae8) == 5) {
          lVar25 = (**(code **)(**(long **)(lVar25 + 0x438) + 0x58))
                             (*(long **)(lVar25 + 0x438),*(undefined1 *)(lVar25 + 0xaee));
          if (lVar25 == 0) {
            bVar4 = false;
          }
          else {
            plVar22 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar21 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar22;
            *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
            lVar19 = (**(code **)(*plVar22 + 0x10))(plVar22,0xb8,8);
            if (lVar19 == 0) {
              (**(code **)(*plVar22 + 0xb8))(plVar22);
            }
            FUN_00866320(lVar19,plVar22,lVar25);
            *(long **)(lVar19 + 8) = plVar22;
            *(long *)(lVar19 + 0x10) = lVar19;
            *(undefined8 *)(lVar19 + 0x18) = 0xb8;
            *(undefined8 *)(lVar19 + 0x20) = 8;
            *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
            if (lVar19 != 0) {
              (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
            }
            uVar12 = FUN_014ae360();
            uVar13 = FUN_0087a5f0(lVar19);
            if ((uVar12 & 0xff) < (uVar13 & 0xff)) {
              uVar14 = FUN_008783b0(lVar19);
              uVar15 = FUN_008783c0(lVar19);
              FUN_00864b10(uVar14,uVar15);
              uVar14 = FUN_00864ba0(uVar12);
              FUN_0087b2e0(lVar19,uVar14);
            }
            uVar14 = 0xb;
            if (*(char *)(param_1 + 0x1a3) != '\0') {
              uVar14 = 0;
            }
            local_468 = lVar19;
            if (lVar19 != 0) {
              (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
            }
            iVar16 = FUN_014b48d0(plVar22,&local_468,uVar14,0);
            if (local_468 != 0) {
              (**(code **)(*(long *)(local_468 + 0x48) + 0x18))();
              local_468 = 0;
            }
            local_460 = 0xb09ab66ab938fc2f;
            pbStack_458 = (byte *)0x1cfa036;
            local_450 = 0xc;
            local_448 = 0;
            local_470 = lVar19;
            if (lVar19 != 0) {
              (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
            }
            FUN_014af470(&local_460,&local_470);
            if (local_470 != 0) {
              (**(code **)(*(long *)(local_470 + 0x48) + 0x18))();
              local_470 = 0;
            }
            if (local_448 != 0) {
              (**(code **)(*(long *)(local_448 + 0x48) + 0x18))();
              local_448 = 0;
            }
            if (iVar16 == 0) {
              FUN_0087b060(lVar19,1);
              iVar16 = FUN_00878a80(lVar19);
              if (iVar16 == 0xe) {
                FUN_00878370(lVar19);
              }
              *(undefined4 *)(param_1 + 0x278) = 0;
              if (lVar19 != 0) {
                (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
              }
              lVar25 = *(long *)(param_1 + 0x280);
              *(long *)(param_1 + 0x280) = lVar19;
              if (lVar25 != 0) {
                (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))();
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (lVar19 != 0) {
              (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
            }
          }
          FUN_01528a20(3);
          FUN_01528a20(6);
          FUN_01528a20(0x2b);
          uVar12 = 10;
          if (!bVar4) {
            uVar12 = 0x14;
          }
          goto LAB_01148ae4;
        }
      }
      FUN_01528a20(0x2b);
      uVar12 = 0x14;
    }
    else {
      uVar12 = 0x14;
      if ((*(uint *)(*(long *)puVar6 + 0xb38) < 5) &&
         (uVar12 = 0x14, *(char *)(param_1 + 0x140) != '\0')) {
        uVar12 = 0x12;
      }
      FUN_01528a20(0x21);
    }
LAB_01148ae4:
    *puVar1 = uVar12;
    return 0;
  case 10:
    lVar25 = *(long *)(param_2 + 0x90);
    if (lVar25 == 0) {
      uVar23 = *(undefined8 *)(_DAT_00000060 + 0x630);
    }
    else {
      plVar22 = (long *)(lVar25 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      uVar23 = *(undefined8 *)(*(long *)(lVar25 + 0x60) + 0x630);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    FUN_016b1690(uVar23,0,0);
    uVar12 = 0xb;
    break;
  case 0xb:
    lVar25 = *(long *)(param_2 + 0x90);
    if (lVar25 == 0) {
      uVar23 = *(undefined8 *)(_DAT_00000060 + 0x630);
    }
    else {
      plVar22 = (long *)(lVar25 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      uVar23 = *(undefined8 *)(*(long *)(lVar25 + 0x60) + 0x630);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    uVar18 = FUN_016b1990(uVar23,0);
    if ((uVar18 & 1) != 0) {
      return 0;
    }
    uVar12 = 0xc;
    break;
  case 0xc:
    FUN_00d939e0(*(undefined8 *)PTR_DAT_02710868,0,0,2);
    uVar12 = 0xd;
    break;
  case 0xd:
    uVar18 = FUN_00d93fb0(*(undefined8 *)PTR_DAT_02710868,0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    FUN_0174c5a0(param_2,param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x240) = 0xe;
    return 0;
  case 0xe:
    pbStack_458 = _UNK_01d4b6c8;
    local_460 = _DAT_01d4b6c0;
    FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,0,PTR_DAT_02717570,&local_460,2,0,1);
    uVar12 = 0xf;
    break;
  case 0xf:
    uVar18 = FUN_00d93fb0(*(undefined8 *)PTR_DAT_02710868,0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    uVar12 = 0x10;
    break;
  case 0x10:
    lVar25 = *(long *)(param_2 + 0x90);
    if (lVar25 == 0) {
      uVar23 = *(undefined8 *)(_DAT_00000060 + 0x630);
    }
    else {
      plVar22 = (long *)(lVar25 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      uVar23 = *(undefined8 *)(*(long *)(lVar25 + 0x60) + 0x630);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    FUN_016b1790(uVar23,0,0);
    uVar12 = 0x11;
    break;
  case 0x11:
    lVar25 = *(long *)(param_2 + 0x90);
    if (lVar25 == 0) {
      uVar23 = *(undefined8 *)(_DAT_00000060 + 0x630);
    }
    else {
      plVar22 = (long *)(lVar25 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      uVar23 = *(undefined8 *)(*(long *)(lVar25 + 0x60) + 0x630);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    uVar18 = FUN_016b1990(uVar23,0);
    if ((uVar18 & 1) != 0) {
      return 0;
    }
    goto LAB_01148034;
  case 0x12:
    FUN_0114b050(param_1);
    FUN_0114b170(&local_460,param_1);
    if ((char)local_460 == '\0') {
      *puVar1 = 0x14;
      return 0;
    }
    lVar25 = *(long *)(param_2 + 0x68);
    if (lVar25 == 0) {
      FUN_0114d1c0(&local_58,0,&pbStack_458);
      lVar25 = *(long *)(param_1 + 0x218);
    }
    else {
      plVar22 = (long *)(lVar25 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0114d1c0(&local_58,lVar25,&pbStack_458);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      lVar25 = *(long *)(param_1 + 0x218);
    }
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x218) = 0;
    }
    *(undefined8 *)(param_1 + 0x218) = local_58;
    *(undefined4 *)(param_1 + 0x240) = 0x13;
joined_r0x01147d28:
    if ((char)local_460 != '\0') {
      FUN_0114ccd0(&local_450);
    }
    return 0;
  case 0x13:
    if ((*(long *)(param_1 + 0x218) != 0) && (*(int *)(*(long *)(param_1 + 0x218) + 0x54) != 0)) {
      return 0;
    }
LAB_01148034:
    uVar12 = 0x14;
    break;
  case 0x14:
    if (*(long *)PTR_DAT_02710848 != 0) {
      lVar21 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      lVar25 = _DAT_00000060;
      if (lVar21 != 0) {
        plVar22 = (long *)(lVar21 + 0x48);
        (**(code **)(*plVar22 + 0x10))(plVar22);
        lVar25 = *(long *)(lVar21 + 0x60);
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
      if (lVar25 != 0) {
        puVar27 = *(undefined4 **)(param_1 + 0x250);
        for (puVar26 = *(undefined4 **)(param_1 + 0x248); puVar26 != puVar27; puVar26 = puVar26 + 1)
        {
          FUN_016b1690(*(undefined8 *)(lVar25 + 0x630),*puVar26,0);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
    FUN_0114b050(param_1);
    if (((*(int *)(*(long *)(param_1 + 0x88) + 4) == 2) && (*(char *)(param_1 + 0x1b8) == '\0')) &&
       ((*(uint *)(*(long *)(param_1 + 0x88) + 0xae8) | 4) == 5)) {
      lVar25 = *(long *)(param_2 + 0xb8);
      if (lVar25 == 0) {
        FUN_015c8a70(0,0x890702571690bc8a,0,0,0,0);
      }
      else {
        plVar22 = (long *)(lVar25 + 0x48);
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_015c8a70(lVar25,0x890702571690bc8a,0,0,0,0);
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
    FUN_00ef2bd0(&local_478,2,1,0);
    if (local_478 != 0) {
      (**(code **)(*(long *)(local_478 + 0x48) + 0x18))();
    }
    if (*(char *)(param_1 + 0x1b8) != '\0') goto LAB_011482c0;
LAB_011482c8:
    uVar12 = 0x15;
    break;
  case 0x15:
    FUN_00d939e0(*(undefined8 *)PTR_DAT_02710868,0,0,2);
    uVar12 = 0x16;
    break;
  case 0x16:
    uVar18 = FUN_00d93fb0(*(undefined8 *)PTR_DAT_02710868,0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
LAB_011482c0:
    uVar12 = 0x17;
    break;
  case 0x17:
    lVar21 = *(long *)(param_2 + 0x90);
    lVar25 = _DAT_00000060;
    if (lVar21 != 0) {
      plVar22 = (long *)(lVar21 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      lVar25 = *(long *)(lVar21 + 0x60);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    if (lVar25 != 0) {
      uVar18 = FUN_016b1890(*(undefined8 *)(lVar25 + 0x630),0);
      if ((uVar18 & 1) != 0) {
        plVar22 = *(long **)(lVar25 + 0x100);
        if (plVar22 == (long *)0x0) {
          halt_baddata();
        }
        plVar24 = plVar22 + 9;
        (**(code **)(*plVar24 + 0x10))(plVar24);
        (**(code **)(*plVar22 + 0x70))(plVar22,0,0);
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
      uVar18 = FUN_016b1890(*(undefined8 *)(lVar25 + 0x630),1);
      if ((uVar18 & 1) != 0) {
        plVar22 = *(long **)(lVar25 + 0x100);
        if (plVar22 == (long *)0x0) {
          halt_baddata();
        }
        plVar24 = plVar22 + 9;
        (**(code **)(*plVar24 + 0x10))(plVar24);
        (**(code **)(*plVar22 + 0x70))(plVar22,0,0);
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
      uVar18 = FUN_016b1890(*(undefined8 *)(lVar25 + 0x630),2);
      if ((uVar18 & 1) != 0) {
        plVar22 = *(long **)(lVar25 + 0x100);
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar24 = plVar22 + 9;
        (**(code **)(*plVar24 + 0x10))(plVar24);
        (**(code **)(*plVar22 + 0x70))(plVar22,0,0);
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
    }
    puVar5 = PTR_DAT_027107a8;
    local_460 = 0xd03d8d08b608a713;
    pbStack_458 = (byte *)0x1d30db3;
    local_450 = 0x19;
    local_448 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_460);
    if (local_448 != 0) {
      (**(code **)(*(long *)(local_448 + 0x48) + 0x18))();
    }
    local_460 = 0x83c92fc49ccb7c8;
    pbStack_458 = (byte *)0x1ce918a;
    local_450 = 0x18;
    local_448 = 0;
    FUN_008962c0(*(long *)puVar5 + 0x108,&local_460);
    if (local_448 != 0) {
      (**(code **)(*(long *)(local_448 + 0x48) + 0x18))();
    }
    return 1;
  }
  *puVar1 = uVar12;
  return 0;
}


