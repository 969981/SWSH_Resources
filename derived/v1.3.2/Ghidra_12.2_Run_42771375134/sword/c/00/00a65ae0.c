/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a65ae0; name: FUN_00a65ae0
 */


/* WARNING: Removing unreachable block (ram,0x00a65cec) */

void FUN_00a65ae0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  code *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  undefined2 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long *plVar22;
  code *local_110;
  code *local_108;
  code *local_100;
  undefined1 *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  char local_72 [2];
  long local_70 [2];
  
  local_72[0] = '\0';
  local_74 = 0;
  local_78 = 0;
  iVar6 = (**(code **)(*param_1 + 0x870))();
  if (iVar6 == 1) {
    lVar8 = FUN_009c5ff0(param_1);
    if ((lVar8 == 0) || (uVar21 = FUN_008f35c0(lVar8,0x8000), (uVar21 & 1) == 0)) {
      local_78 = CONCAT22(local_78._2_2_,0x101);
      uVar21 = (**(code **)(*param_1 + 0x890))(param_1);
      if ((uVar21 & 1) == 0) {
        bVar3 = false;
        bVar2 = true;
      }
      else if (lVar8 == 0) {
        bVar3 = false;
        local_78 = CONCAT22(0x101,(undefined2)local_78);
        bVar2 = true;
      }
      else {
        uVar21 = FUN_008f37f0(lVar8,2);
        if ((uVar21 & 1) != 0) {
          local_78._0_3_ = CONCAT12(1,(undefined2)local_78);
        }
        uVar21 = FUN_008f37f0(lVar8,3);
        bVar2 = true;
        bVar3 = false;
        if ((uVar21 & 1) != 0) {
          local_78 = CONCAT13(1,(undefined3)local_78);
        }
      }
      goto LAB_00a65d74;
    }
LAB_00a65ca8:
    bVar3 = false;
LAB_00a65d70:
    bVar2 = false;
  }
  else {
    if (iVar6 == 2) {
      lVar8 = FUN_009c5ff0(param_1);
      if (lVar8 == 0) {
        uVar21 = 4;
        lVar8 = FUN_009c5ff0(param_1);
        if (lVar8 != 0) goto LAB_00a65cc0;
LAB_00a65cf0:
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        if ((int)uVar21 < 1) goto LAB_00a65d74;
        uVar13 = uVar21 & 3;
        if (uVar21 - 1 < 3) goto LAB_00a65d10;
        bVar3 = false;
        lVar8 = 0;
        puVar19 = &local_74;
        do {
          lVar8 = lVar8 + 4;
          *(undefined1 *)(puVar19 + -2) = 1;
          *(undefined1 *)(puVar19 + -1) = 1;
          *(undefined1 *)puVar19 = 1;
          *(undefined1 *)(puVar19 + 1) = 1;
          puVar19 = puVar19 + 4;
        } while (uVar21 - uVar13 != lVar8);
      }
      else {
        FUN_009c5ff0(param_1);
        uVar7 = FUN_008f8120();
        uVar21 = (ulong)((uVar7 & 0xff) - 1);
        lVar8 = FUN_009c5ff0(param_1);
        if (lVar8 == 0) goto LAB_00a65cf0;
LAB_00a65cc0:
        uVar12 = FUN_009c5ff0(param_1);
        uVar13 = FUN_008f35c0(uVar12,0x1000);
        if ((uVar13 & 1) == 0) goto LAB_00a65cf0;
        bVar4 = true;
        uVar13 = 2;
LAB_00a65d10:
        lVar8 = 0;
        bVar3 = bVar4;
      }
      if (uVar13 != 0) {
        lVar14 = -uVar13;
        pcVar17 = local_72 + lVar8 * 2 + -6;
        do {
          lVar14 = lVar14 + 1;
          *pcVar17 = '\x01';
          pcVar17 = pcVar17 + 2;
        } while (lVar14 != 0);
      }
      goto LAB_00a65d70;
    }
    lVar8 = (**(code **)(*param_1 + 0xa70))(param_1);
    if (lVar8 != 0) {
      pbVar18 = *(byte **)(lVar8 + 8);
      bVar1 = *pbVar18;
      if (bVar1 != 0) {
        uVar13 = (ulong)(uint)bVar1;
        uVar21 = 0xcbf29ce484222645;
        pbVar20 = pbVar18;
        do {
          pbVar20 = pbVar20 + 1;
          uVar21 = (uVar21 ^ uVar13) * 0x100000001b3;
          uVar13 = (ulong)*pbVar20;
        } while (*pbVar20 != 0);
        if (uVar21 != 0x19d8958501523432) {
          uVar21 = 0xcbf29ce484222645;
          do {
            pbVar18 = pbVar18 + 1;
            uVar21 = (uVar21 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar18;
          } while (bVar1 != 0);
          if (uVar21 != 0x19dc1885015548a2) goto LAB_00a65c80;
        }
        local_78 = CONCAT31(local_78._1_3_,1);
      }
    }
LAB_00a65c80:
    iVar6 = (**(code **)(*param_1 + 0x868))(param_1);
    if (iVar6 == 0) goto LAB_00a65ca8;
    bVar3 = false;
    bVar2 = false;
    local_78 = CONCAT22(local_78._2_2_,0x101);
  }
LAB_00a65d74:
  local_80 = 0;
  local_88 = 0;
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar8 == 0) {
    FUN_0101cb00(0,&local_88);
  }
  else {
    plVar22 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0101cb00(lVar8,&local_88);
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  puVar5 = PTR_DAT_02710860;
  puVar15 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
  plVar22 = (long *)param_1[0x17];
  lVar14 = (long)puVar15 + (ulong)*puVar15;
  lVar8 = 0x548;
  do {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00a66748;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar22 + 0x10))(plVar22,0x5b0,0x10);
    if (lVar10 == 0) {
      (**(code **)(*plVar22 + 0xb8))(plVar22);
    }
    FUN_00acd3a0(lVar10,param_1,plVar22,&local_88,lVar14);
    *(long **)(lVar10 + 8) = plVar22;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x5b0;
    *(undefined8 *)(lVar10 + 0x20) = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (*(long *)((long)param_1 + lVar8) != 0) {
      (**(code **)(*(long *)(*(long *)((long)param_1 + lVar8) + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar8) = 0;
    }
    *(long *)((long)param_1 + lVar8) = lVar10;
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x580);
  if (bVar3) {
    FUN_00acf280(param_1[0xa9],0,0,0);
    FUN_00acf280(param_1[0xaa],1,0,0);
    FUN_00acf280(param_1[0xab],2,0,0);
  }
  else {
    FUN_00acf280(param_1[0xaa],1,0,0);
  }
  if (bVar2) {
    FUN_00acf280(param_1[0xac],3,0,0);
  }
  if (bVar3) {
    FUN_00acf280(param_1[0xad],4,0,0);
    FUN_00acf280(param_1[0xaf],6,0,0);
  }
  lVar8 = 0x580;
  do {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00a66748;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar22 + 0x10))(plVar22,0x5b0,0x10);
    if (lVar10 == 0) {
      (**(code **)(*plVar22 + 0xb8))(plVar22);
    }
    FUN_00acd3a0(lVar10,param_1,plVar22,&local_88,lVar14);
    *(long **)(lVar10 + 8) = plVar22;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x5b0;
    *(undefined8 *)(lVar10 + 0x20) = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (*(long *)((long)param_1 + lVar8) != 0) {
      (**(code **)(*(long *)(*(long *)((long)param_1 + lVar8) + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar8) = 0;
    }
    *(long *)((long)param_1 + lVar8) = lVar10;
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x5b8);
  if ((char)local_78 != '\0') {
    FUN_00ace320(param_1[0xb0],0);
  }
  if (local_78._1_1_ != '\0') {
    FUN_00ace320(param_1[0xb1],1);
  }
  if (local_78._2_1_ != '\0') {
    FUN_00ace320(param_1[0xb2],2);
  }
  if (local_78._3_1_ != '\0') {
    FUN_00ace320(param_1[0xb3],3);
  }
  if ((char)local_74 != '\0') {
    FUN_00ace320(param_1[0xb4],4);
  }
  if (local_74._1_1_ != '\0') {
    FUN_00ace320(param_1[0xb5],5);
  }
  if (local_72[0] != '\0') {
    FUN_00ace320(param_1[0xb6],6);
  }
  param_1[0x17c] = -0x340d631b7bddd9bb;
  param_1[0x17d] = -0x340d631b7bddd9bb;
  lVar8 = FUN_009c5ff0(param_1);
  if (lVar8 != 0) {
    uVar21 = FUN_008f35c0(lVar8,0x10000);
    if ((uVar21 & 1) == 0) {
      uVar21 = FUN_008f35c0(lVar8,0x800000);
      if ((uVar21 & 1) == 0) {
        uVar21 = FUN_008f35c0(lVar8,0x1000000);
        if ((uVar21 & 1) == 0) goto LAB_00a66138;
        uVar12 = 0x1000000;
      }
      else {
        uVar12 = 0x800000;
      }
    }
    else {
      uVar12 = 0x10000;
    }
    FUN_00a667e0(param_1,plVar22,uVar12);
  }
LAB_00a66138:
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00a66748;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar22;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x710,0x10);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar22 + 0xb8))(plVar22);
  }
  FUN_00adae20(plVar11,param_1,plVar22,&local_88,lVar14);
  plVar11[1] = (long)plVar22;
  plVar11[2] = (long)plVar11;
  plVar11[3] = 0x710;
  plVar11[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x10))();
  }
  if (param_1[0x100] != 0) {
    (**(code **)(*(long *)(param_1[0x100] + 0x48) + 0x18))();
    param_1[0x100] = 0;
  }
  param_1[0x100] = (long)plVar11;
  (**(code **)(*plVar11 + 0x198))(plVar11,0);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00a66748;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar22;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x710,0x10);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar22 + 0xb8))(plVar22);
  }
  FUN_00adae20(plVar11,param_1,plVar22,&local_88,lVar14);
  plVar11[1] = (long)plVar22;
  plVar11[2] = (long)plVar11;
  plVar11[3] = 0x710;
  plVar11[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x10))();
  }
  if (param_1[0x101] != 0) {
    (**(code **)(*(long *)(param_1[0x101] + 0x48) + 0x18))();
    param_1[0x101] = 0;
  }
  param_1[0x101] = (long)plVar11;
  (**(code **)(*plVar11 + 0x198))(plVar11,0);
  local_108 = FUN_00a8a280;
  local_100 = FUN_00a8ae10;
  local_110 = FUN_00a89e80;
  local_f8 = &LAB_00a8ae20;
  pcVar16 = (code *)param_1[0x29d];
  local_f0 = param_1;
  plStack_e8 = plVar22;
  if (pcVar16 == (code *)0x0) {
LAB_00a666f0:
    (*local_100)(&local_f0,param_1 + 0x2a0);
    param_1[0x29f] = (long)local_f8;
    param_1[0x29d] = (long)local_108;
    param_1[0x29e] = (long)local_100;
    param_1[0x29c] = (long)local_110;
    lVar8 = param_1[0x29b];
  }
  else {
    param_1[0x29e] = 0;
    param_1[0x29f] = 0;
    param_1[0x29c] = 0;
    param_1[0x29d] = 0;
    (*pcVar16)(param_1 + 0x2a0);
    if (local_100 != (code *)0x0) goto LAB_00a666f0;
    lVar8 = param_1[0x29b];
  }
  if (lVar8 != 0) {
    plVar11 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_006e1e70(lVar8,param_1 + 0x29a,1);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  pcVar16 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar16)(&local_f0);
  }
  FUN_00a66de0(&local_110,"bin/archive/battle/battle_common.gfpak");
  FUN_006dccd0(local_70,*(undefined8 *)PTR_DAT_02710788,1,&local_110,0,param_1[0x1b],0);
  if (param_1[0x29b] != 0) {
    (**(code **)(*(long *)(param_1[0x29b] + 0x48) + 0x18))();
    param_1[0x29b] = 0;
  }
  param_1[0x29b] = local_70[0];
  if (local_70[0] != 0) {
    plVar11 = (long *)(local_70[0] + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    if ((param_1[0x29c] != 0) || (param_1[0x2ac] != 0)) {
      FUN_006e1e70(local_70[0],param_1 + 0x29a,1);
    }
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if ((local_f8 != (undefined1 *)0x0) && (local_110 != (code *)0x0)) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
  }
  local_110 = (code *)0x0;
  local_108 = (code *)0xcbf29ce484222645;
  local_100 = (code *)&DAT_01d38550;
  local_f8 = (undefined1 *)0x0;
  if (local_f0 != (long *)0x0) {
    (**(code **)(local_f0[9] + 0x18))();
    local_f0 = (long *)0x0;
  }
  uVar21 = 0;
  plVar11 = param_1 + 0x183;
  while( true ) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar8 + 0x80)) break;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar22;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar22 + 0x10))(plVar22,0x4d0,0x10);
    if (lVar9 == 0) {
      (**(code **)(*plVar22 + 0xb8))(plVar22);
    }
    FUN_00adc840(lVar9,param_1,plVar22,&local_88,lVar14);
    *(long **)(lVar9 + 8) = plVar22;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x4d0;
    *(undefined8 *)(lVar9 + 0x20) = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (plVar11[-2] != 0) {
      (**(code **)(*(long *)(plVar11[-2] + 0x48) + 0x18))();
      plVar11[-2] = 0;
    }
    plVar11[-2] = lVar9;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar8 + 0x80)) break;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar22;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar22 + 0x10))(plVar22,0x4d0,0x10);
    if (lVar9 == 0) {
      (**(code **)(*plVar22 + 0xb8))(plVar22);
    }
    FUN_00adc840(lVar9,param_1,plVar22,&local_88,lVar14);
    *(long **)(lVar9 + 8) = plVar22;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x4d0;
    *(undefined8 *)(lVar9 + 0x20) = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (plVar11[-1] != 0) {
      (**(code **)(*(long *)(plVar11[-1] + 0x48) + 0x18))();
      plVar11[-1] = 0;
    }
    plVar11[-1] = lVar9;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar8 + 0x80)) break;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar22;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar22 + 0x10))(plVar22,0x4d0,0x10);
    if (lVar9 == 0) {
      (**(code **)(*plVar22 + 0xb8))(plVar22);
    }
    FUN_00adc840(lVar9,param_1,plVar22,&local_88,lVar14);
    *(long **)(lVar9 + 8) = plVar22;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x4d0;
    *(undefined8 *)(lVar9 + 0x20) = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (*plVar11 != 0) {
      (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
      *plVar11 = 0;
    }
    uVar21 = uVar21 + 1;
    *plVar11 = lVar9;
    plVar11 = plVar11 + 0x8c;
    if (1 < uVar21) {
      return;
    }
  }
LAB_00a66748:
                    /* WARNING: Subroutine does not return */
  abort();
}


