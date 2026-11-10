/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a48300; name: FUN_00a48300
 */


void FUN_00a48300(long param_1,long *param_2,long param_3,long *param_4,undefined4 param_5,
                 uint param_6)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined *puVar20;
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
  
  puVar9 = (undefined8 *)(**(code **)(*param_4 + 0x9e0))(param_4,param_5);
  (**(code **)(*param_4 + 0x7c8))(local_70,param_4,param_5);
  plVar10 = (long *)*puVar9;
  uVar5 = FUN_00884820();
  uVar11 = (**(code **)(*param_4 + 0x830))(param_4,param_5);
  bVar1 = FUN_009141c0();
  lVar15 = param_1 + 0x648;
  *(uint *)(param_2 + 0x12) = param_6 & 1;
  *(undefined1 *)((long)param_2 + 0x94) = 0;
  *(undefined2 *)((long)param_2 + 0x96) = 0;
  FUN_009140d0();
  if (uVar5 != 0) {
    if ((param_6 & 1) == 0) {
      uVar17 = 0;
      do {
        cVar2 = FUN_009c9090(local_70[0],uVar17 & 0xffffffff);
        if (5 < uVar17) goto LAB_00a4880c;
        uVar19 = *(undefined8 *)(param_1 + uVar17 * 8 + 0x618);
        if (cVar2 == '\x1f') {
          local_100 = 0;
          uStack_f8 = 0;
          local_128[3] = (undefined *)0x0;
          local_128[4] = (undefined *)0x0;
          local_128[1] = (undefined *)0x0;
          local_128[2] = (undefined *)0x0;
          local_130 = (undefined *)0x0;
          local_128[0] = (undefined *)0x0;
          local_130 = (undefined *)(**(code **)(*plVar10 + 0x50))(plVar10,uVar17 & 0xffffffff);
          local_100 = CONCAT71(local_100._1_7_,0x1f);
          FUN_008dff80(uVar19,&local_130);
        }
        else if (bVar1 != 0) {
          uVar7 = 0;
          do {
            uVar13 = FUN_00914330(uVar11,uVar7);
            cVar3 = FUN_008e0a00();
            if (cVar3 == cVar2) {
              FUN_008e0f20(uVar19,uVar13);
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < bVar1);
        }
        FUN_009c90d0(local_70[0],uVar17 & 0xffffffff);
        FUN_009140f0(lVar15,uVar19);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar5);
    }
    else {
      uVar17 = 0;
      do {
        cVar2 = FUN_009c9090(local_70[0],uVar17 & 0xffffffff);
        if (5 < uVar17) goto LAB_00a4880c;
        uVar19 = *(undefined8 *)(param_1 + uVar17 * 8 + 0x618);
        if (cVar2 == '\x1f') {
          local_100 = 0;
          uStack_f8 = 0;
          local_128[3] = (undefined *)0x0;
          local_128[4] = (undefined *)0x0;
          local_128[1] = (undefined *)0x0;
          local_128[2] = (undefined *)0x0;
          local_130 = (undefined *)0x0;
          local_128[0] = (undefined *)0x0;
          local_130 = (undefined *)(**(code **)(*plVar10 + 0x50))(plVar10,uVar17 & 0xffffffff);
          local_100 = CONCAT71(local_100._1_7_,0x1f);
          FUN_008dff80(uVar19,&local_130);
          uVar12 = FUN_009c90d0(local_70[0],uVar17 & 0xffffffff);
        }
        else {
          if (bVar1 != 0) {
            uVar7 = 0;
            do {
              uVar13 = FUN_00914330(uVar11,uVar7);
              cVar3 = FUN_008e0a00();
              if (cVar3 == cVar2) {
                FUN_008e0f20(uVar19,uVar13);
                uVar12 = FUN_009c90d0(local_70[0],uVar17 & 0xffffffff);
                goto joined_r0x00a48400;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < bVar1);
          }
          uVar12 = FUN_009c90d0(local_70[0],uVar17 & 0xffffffff);
        }
joined_r0x00a48400:
        if (((uVar12 & 1) == 0) &&
           (((sVar4 = FUN_008e1290(uVar19), sVar4 == 0x379 || (sVar4 == 0x378)) || (sVar4 == 0x2cc))
           )) {
          FUN_008e4ab0(uVar19,0,0);
        }
        FUN_009140f0(lVar15,uVar19);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar5);
    }
  }
  local_128[1] = (undefined *)0x0;
  local_128[2] = (undefined *)0x0;
  local_100 = 0;
  uStack_f8 = 0;
  local_130 = PTR_DAT_02718ea0 + 0x10;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_128[0] = (undefined *)0x0;
  local_128[4] = (undefined *)0x0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_128[3] = local_130;
  local_f0 = local_130;
  local_d0 = local_130;
  local_b0 = local_130;
  local_90 = local_130;
  FUN_00a0a8c0(&local_130,param_4,lVar15);
  if (uVar5 != 0) {
    uVar17 = 0;
    ppuVar18 = &local_130;
    puVar9 = (undefined8 *)(param_3 + 0x18);
    do {
      if (5 < uVar17) {
LAB_00a4880c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar20 = ppuVar18[1];
      if (puVar20 == (undefined *)0x0) {
        cVar2 = '\x1f';
      }
      else {
        cVar2 = FUN_008e0a00(puVar20);
      }
      cVar3 = FUN_00a0a880(ppuVar18);
      if (cVar2 == cVar3) {
        if (ppuVar18[1] == (undefined *)0x0) {
          cVar2 = '\x1f';
        }
        else {
          cVar2 = FUN_008e0a00();
        }
        cVar3 = FUN_00a0a8a0(ppuVar18);
        if (cVar2 == cVar3) {
          puVar14 = ppuVar18[1];
          if (puVar14 == (undefined *)0x0) goto LAB_00a486d8;
        }
        else {
          puVar14 = ppuVar18[3];
        }
        bVar1 = FUN_008e0a10(puVar14);
      }
      else {
LAB_00a486d8:
        bVar1 = 0;
      }
      uVar12 = FUN_008e5ad0(ppuVar18[3]);
      lVar15 = FUN_008e1670(puVar20);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      lVar16 = *param_2;
      *param_2 = lVar15;
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
      }
      uVar6 = 1;
      if ((uVar12 & 1) != 0) {
        uVar6 = 2;
      }
      if ((bVar1 & 1) == 0) {
        uVar6 = 0;
      }
      *(undefined4 *)(param_2 + 1) = uVar6;
      *(undefined4 *)((long)param_2 + 0xc) = 0;
      lVar15 = *param_2;
      *(undefined1 *)((long)param_2 + 0x14) = 0;
      *(uint *)(param_2 + 2) = param_6 & 1;
      if (lVar15 != 0) {
        if ((param_6 & 1) == 0) {
          uVar6 = FUN_008e2d10(puVar20);
        }
        else {
          uVar6 = 0;
        }
        FUN_00878810(lVar15,uVar6);
      }
      uVar7 = FUN_009c90d0(local_70[0],uVar17 & 0xffffffff);
      uVar8 = FUN_008e1600(puVar20);
      uVar17 = uVar17 + 1;
      puVar9[-2] = puVar20;
      puVar9[-1] = puVar20;
      *puVar9 = puVar20;
      *(undefined1 *)(puVar9 + 1) = 0;
      ppuVar18 = ppuVar18 + 4;
      param_2 = param_2 + 3;
      *(byte *)((long)puVar9 + 9) = bVar1 & 1;
      *(uint *)((long)puVar9 + 0xc) = (uVar8 | uVar7 ^ 0xffffffff) & 1;
      *(undefined1 *)((long)puVar9 + 10) = 1;
      puVar9 = puVar9 + 5;
    } while (uVar17 < uVar5);
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


