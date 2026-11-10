/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a18b50; name: FUN_00a18b50
 */


void FUN_00a18b50(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  undefined **ppuVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 local_160 [8];
  long local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined *local_128 [5];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  lVar1 = *param_1;
  (**(code **)(*(long *)param_1[1] + 0x7c8))(local_70,(long *)param_1[1],param_3);
  puVar10 = (undefined8 *)(**(code **)(*(long *)param_1[1] + 0x9e0))((long *)param_1[1],param_3);
  plVar14 = (long *)*puVar10;
  uVar8 = FUN_00884820(plVar14);
  uVar11 = (**(code **)(*(long *)param_1[1] + 0x830))((long *)param_1[1],param_3);
  bVar4 = FUN_009141c0();
  lVar16 = lVar1 + 0x6b0;
  FUN_009140d0();
  if (uVar8 != 0) {
    if (bVar4 == 0) {
      uVar17 = 0;
      do {
        cVar5 = FUN_009c9090(local_70[0],uVar17 & 0xffffffff);
        if (5 < uVar17) goto LAB_00a190c4;
        uVar11 = *(undefined8 *)(lVar1 + 0x680 + uVar17 * 8);
        if (cVar5 == '\x1f') {
          local_100 = 0;
          uStack_f8 = 0;
          local_128[3] = (undefined *)0x0;
          local_128[4] = (undefined *)0x0;
          local_128[1] = (undefined *)0x0;
          local_128[2] = (undefined *)0x0;
          local_130 = (undefined *)0x0;
          local_128[0] = (undefined *)0x0;
          local_130 = (undefined *)(**(code **)(*plVar14 + 0x50))(plVar14,uVar17 & 0xffffffff);
          local_100 = CONCAT71(local_100._1_7_,0x1f);
          FUN_008dff80(uVar11,&local_130);
        }
        FUN_009140f0(lVar16,uVar11);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar8);
    }
    else {
      uVar17 = 0;
      do {
        cVar5 = FUN_009c9090(local_70[0],uVar17 & 0xffffffff);
        if (5 < uVar17) {
LAB_00a190c4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar18 = *(undefined8 *)(lVar1 + uVar17 * 8 + 0x680);
        if (cVar5 == '\x1f') {
          local_100 = 0;
          uStack_f8 = 0;
          local_128[3] = (undefined *)0x0;
          local_128[4] = (undefined *)0x0;
          local_128[1] = (undefined *)0x0;
          local_128[2] = (undefined *)0x0;
          local_130 = (undefined *)0x0;
          local_128[0] = (undefined *)0x0;
          local_130 = (undefined *)(**(code **)(*plVar14 + 0x50))(plVar14,uVar17 & 0xffffffff);
          local_100 = CONCAT71(local_100._1_7_,0x1f);
          FUN_008dff80(uVar18,&local_130);
        }
        else {
          uVar19 = 0;
          do {
            uVar12 = FUN_00914330(uVar11,uVar19);
            cVar6 = FUN_008e0a00();
            if (cVar6 == cVar5) {
              FUN_008e0f20(uVar18,uVar12);
              break;
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < bVar4);
        }
        FUN_009140f0(lVar16,uVar18);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar8);
    }
  }
  ppuVar15 = &local_130;
  local_128[1] = (undefined *)0x0;
  local_128[2] = (undefined *)0x0;
  local_130 = PTR_DAT_02718ea0 + 0x10;
  local_100 = 0;
  uStack_f8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_128[0] = (undefined *)0x0;
  local_128[4] = (undefined *)0x0;
  uStack_e8 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_128[3] = local_130;
  local_f0 = local_130;
  local_d0 = local_130;
  local_b0 = local_130;
  local_90 = local_130;
  FUN_00a0a8c0(&local_130,param_1[1],lVar16);
  plVar14 = (long *)param_1[1];
  uVar17 = 0;
  do {
    iVar2 = *(int *)(param_2 + uVar17 * 4);
    lVar16 = *(long *)(lVar1 + 0x660);
    local_160[0] = 0;
    local_138 = 0;
    local_148 = 0;
    local_140 = 0;
    local_158 = 0;
    local_150 = (undefined *)0x0;
    if (ppuVar15[1] == (undefined *)0x0) {
      cVar5 = '\x1f';
    }
    else {
      cVar5 = FUN_008e0a00();
    }
    cVar6 = FUN_00a0a8a0(ppuVar15);
    if (cVar5 != cVar6) {
      if (ppuVar15[1] == (undefined *)0x0) {
        cVar5 = '\x1f';
      }
      else {
        cVar5 = FUN_008e0a00();
      }
      cVar6 = FUN_008e0a00(*(undefined8 *)(lVar1 + 0x680));
      puVar10 = (undefined8 *)(lVar1 + 0x680);
      if ((cVar5 != cVar6) &&
         (cVar6 = FUN_008e0a00(*(undefined8 *)(lVar1 + 0x688)),
         puVar10 = (undefined8 *)(lVar1 + 0x688), cVar5 != cVar6)) {
        cVar6 = FUN_008e0a00(*(undefined8 *)(lVar1 + 0x690));
        puVar10 = (undefined8 *)(lVar1 + 0x690);
        if ((cVar5 != cVar6) &&
           (cVar6 = FUN_008e0a00(*(undefined8 *)(lVar1 + 0x698)),
           puVar10 = (undefined8 *)(lVar1 + 0x698), cVar5 != cVar6)) {
          cVar6 = FUN_008e0a00(*(undefined8 *)(lVar1 + 0x6a0));
          puVar10 = (undefined8 *)(lVar1 + 0x6a0);
          if ((cVar5 != cVar6) &&
             (cVar6 = FUN_008e0a00(*(undefined8 *)(lVar1 + 0x6a8)),
             puVar10 = (undefined8 *)(lVar1 + 0x6a8), cVar5 != cVar6)) goto LAB_00a18f00;
        }
      }
      FUN_008e1670(*puVar10);
      FUN_00879880();
    }
LAB_00a18f00:
    local_160[0] = (undefined1)param_3;
    local_158 = param_1[1];
    local_150 = ppuVar15[1];
    local_148 = *(undefined8 *)(lVar1 + 0x5d8);
    local_140 = *(undefined8 *)(*(long *)PTR_DAT_02718e40 + 0x28);
    if (local_150 == (undefined *)0x0) {
      cVar5 = '\x1f';
    }
    else {
      cVar5 = FUN_008e0a00();
    }
    cVar6 = FUN_00a0a880(ppuVar15);
    if (cVar5 == cVar6) {
      if (ppuVar15[1] == (undefined *)0x0) {
        cVar5 = '\x1f';
      }
      else {
        cVar5 = FUN_008e0a00();
      }
      cVar6 = FUN_00a0a8a0(ppuVar15);
      if (cVar5 == cVar6) {
        if (ppuVar15[1] != (undefined *)0x0) {
          cVar5 = FUN_008e0a00();
          if (cVar5 != '\x1f') goto LAB_00a18fb8;
        }
        goto LAB_00a18fa4;
      }
      cVar5 = FUN_008e0a00(ppuVar15[3]);
LAB_00a18fb8:
      iVar9 = (**(code **)(*plVar14 + 0x740))(plVar14,cVar5);
      bVar3 = iVar9 != 0xff;
    }
    else {
LAB_00a18fa4:
      bVar3 = false;
    }
    local_138 = CONCAT31(local_138._1_3_,bVar3);
    uVar7 = FUN_009c90d0(local_70[0],uVar17 & 0xffffffff);
    local_138 = CONCAT22(local_138._2_2_,CONCAT11(uVar7,(undefined1)local_138)) & 0xffff01ff;
    local_138._0_3_ = CONCAT12(1,(undefined2)local_138);
    if (ppuVar15[1] == (undefined *)0x0) {
      cVar5 = '\x1f';
    }
    else {
      cVar5 = FUN_008e0a00();
    }
    cVar6 = FUN_00a0a880(ppuVar15);
    if (cVar5 == cVar6) {
      if (ppuVar15[1] == (undefined *)0x0) {
        cVar5 = '\x1f';
      }
      else {
        cVar5 = FUN_008e0a00();
      }
      cVar6 = FUN_00a0a8a0(ppuVar15);
      if (cVar5 == cVar6) {
        puVar13 = ppuVar15[1];
        if (puVar13 == (undefined *)0x0) {
          uVar7 = 0;
          goto LAB_00a19068;
        }
      }
      else {
        puVar13 = ppuVar15[3];
      }
      uVar7 = FUN_008e0a10(puVar13);
    }
    else {
      uVar7 = 0;
    }
LAB_00a19068:
    local_138 = CONCAT13(uVar7,(undefined3)local_138) & 0x1ffffff;
    FUN_00a1c110(lVar16 + (long)iVar2 * 0x1e0,local_160);
    uVar17 = uVar17 + 1;
    ppuVar15 = ppuVar15 + 4;
    if (uVar17 == 6) {
      if (local_70[0] != 0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      }
      return;
    }
  } while( true );
}


