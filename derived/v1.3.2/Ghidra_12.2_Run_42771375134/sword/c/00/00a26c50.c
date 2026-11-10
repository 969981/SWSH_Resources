/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a26c50; name: FUN_00a26c50
 */


void FUN_00a26c50(long param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_64;
  
  plVar19 = *(long **)(param_1 + 0x380);
  iVar8 = (**(code **)(*plVar19 + 0x870))(plVar19);
  bVar3 = FUN_00a0a320(plVar19,0);
  plVar21 = *(long **)(param_1 + 8);
  lVar15 = 0xa50;
  if ((param_2 & 1) == 0) {
    lVar15 = 0xa98;
  }
  uVar17 = *(undefined8 *)(param_1 + lVar15);
  FUN_00a26660(param_1);
  FUN_00a26750(param_1);
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  if (iVar8 == 2) {
    uVar11 = 3;
    if ((bVar3 & 1) == 0) {
      uVar11 = 1;
    }
  }
  else if (iVar8 == 1) {
    uVar11 = 1;
    if ((bVar3 & 1) != 0) {
      uVar11 = 2;
    }
  }
  else {
    uVar11 = 1;
  }
  bVar1 = iVar8 == 1 & bVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar11;
  *(undefined2 *)(param_1 + 0x18c) = 0x1f1f;
  *(undefined4 *)(param_1 + 0x188) = 0x1f1f1f1f;
  local_80 = plVar21;
  uVar12 = (**(code **)(*plVar19 + 0x818))();
  bVar4 = FUN_009141c0();
  if (bVar4 != 0) {
    iVar23 = 0;
    uVar10 = 0;
    do {
      uVar13 = FUN_00914330(uVar12,uVar10);
      plVar20 = *(long **)(param_1 + 0x70);
      FUN_00a276d0(&local_78,&local_80,uVar13);
      plVar22 = local_78;
      (**(code **)(*plVar20 + 0x28))(plVar20,local_78);
      if (plVar22 != (long *)0x0) {
        plVar22 = plVar22 + 9;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        local_78 = (long *)0x0;
      }
      iVar9 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
      uVar5 = FUN_008e0a00(uVar13);
      *(undefined1 *)(param_1 + (ulong)(iVar9 - 1) + 0x188) = uVar5;
      uVar14 = FUN_008e0a10(uVar13);
      if ((uVar14 & 1) != 0) {
        *(uint *)(param_1 + 0xcc) = uVar10;
      }
      uVar5 = FUN_008e0a00(uVar13);
      iVar9 = (**(code **)(*plVar19 + 0x740))(plVar19,uVar5);
      if (iVar9 != 0xff) {
        lVar15 = (long)iVar23;
        iVar23 = iVar23 + 1;
        *(uint *)(param_1 + lVar15 * 4 + 0x80) = uVar10;
      }
      bVar6 = FUN_008e1980(uVar13);
      iVar9 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
      uVar10 = uVar10 + 1;
      *(byte *)(param_1 + (ulong)(iVar9 - 1) + 0x174) = bVar6 & 1;
    } while (bVar4 != uVar10);
  }
  bVar6 = iVar8 == 2 & bVar3;
  *(uint *)(param_1 + 0x170) = (uint)bVar4;
  if (bVar1 == 0) {
    if (bVar6 != 0) {
      FUN_00884820(*(undefined8 *)(param_1 + 0x70));
      lVar15 = (**(code **)(*plVar19 + 0x7f8))(plVar19,2);
      if (lVar15 != 0) {
        plVar22 = *(long **)(param_1 + 0x70);
        FUN_00a276d0(&local_78,&local_80,lVar15);
        plVar21 = local_78;
        (**(code **)(*plVar22 + 0x28))(plVar22,local_78);
        if (plVar21 != (long *)0x0) {
          plVar21 = plVar21 + 9;
          (**(code **)(*plVar21 + 0x18))(plVar21);
          local_78 = (long *)0x0;
        }
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        uVar5 = FUN_008e0a00(lVar15);
        *(undefined1 *)(param_1 + (ulong)(iVar8 - 1) + 0x188) = uVar5;
        uVar14 = FUN_008e0a10(lVar15);
        if ((uVar14 & 1) != 0) {
          iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
          *(int *)(param_1 + 0xcc) = iVar8 + -1;
        }
        bVar4 = FUN_008e1980(lVar15);
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        *(byte *)(param_1 + (ulong)(iVar8 - 1) + 0x174) = bVar4 & 1;
      }
      lVar15 = (**(code **)(*plVar19 + 0x7f8))(plVar19,4);
      if (lVar15 != 0) {
        plVar22 = *(long **)(param_1 + 0x70);
        FUN_00a276d0(&local_78,&local_80,lVar15);
        plVar21 = local_78;
        (**(code **)(*plVar22 + 0x28))(plVar22,local_78);
        if (plVar21 != (long *)0x0) {
          plVar21 = plVar21 + 9;
          (**(code **)(*plVar21 + 0x18))(plVar21);
          local_78 = (long *)0x0;
        }
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        uVar5 = FUN_008e0a00(lVar15);
        *(undefined1 *)(param_1 + (ulong)(iVar8 - 1) + 0x188) = uVar5;
        uVar14 = FUN_008e0a10(lVar15);
        if ((uVar14 & 1) != 0) {
          iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
          *(int *)(param_1 + 0xcc) = iVar8 + -1;
        }
        bVar4 = FUN_008e1980(lVar15);
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        *(byte *)(param_1 + (ulong)(iVar8 - 1) + 0x174) = bVar4 & 1;
      }
      lVar15 = (**(code **)(*plVar19 + 0x7f8))(plVar19,6);
      if (lVar15 != 0) {
        plVar22 = *(long **)(param_1 + 0x70);
        FUN_00a276d0(&local_78,&local_80,lVar15);
        plVar21 = local_78;
        (**(code **)(*plVar22 + 0x28))(plVar22,local_78);
        if (plVar21 != (long *)0x0) {
          plVar21 = plVar21 + 9;
          (**(code **)(*plVar21 + 0x18))(plVar21);
          local_78 = (long *)0x0;
        }
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        uVar5 = FUN_008e0a00(lVar15);
        *(undefined1 *)(param_1 + (ulong)(iVar8 - 1) + 0x188) = uVar5;
        uVar14 = FUN_008e0a10(lVar15);
        if ((uVar14 & 1) != 0) {
          iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
          *(int *)(param_1 + 0xcc) = iVar8 + -1;
        }
        bVar4 = FUN_008e1980(lVar15);
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        *(byte *)(param_1 + (ulong)(iVar8 - 1) + 0x174) = bVar4 & 1;
      }
    }
  }
  else {
    uVar10 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
    puVar2 = PTR_DAT_02710860;
    plVar22 = *(long **)(param_1 + 0x70);
    if (uVar10 < 3) {
      do {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar21;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        lVar16 = (**(code **)(*plVar21 + 0x10))(plVar21,0xb8,8);
        if (lVar16 == 0) {
          (**(code **)(*plVar21 + 0xb8))(plVar21);
        }
        plVar20 = local_80;
        FUN_00866110(lVar16,local_80);
        *(long **)(lVar16 + 8) = plVar21;
        *(long *)(lVar16 + 0x10) = lVar16;
        *(undefined8 *)(lVar16 + 0x18) = 0xb8;
        *(undefined8 *)(lVar16 + 0x20) = 8;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        if (lVar16 == 0) {
          (**(code **)(*plVar22 + 0x28))(plVar22,0);
        }
        else {
          plVar21 = (long *)(lVar16 + 0x48);
          (**(code **)(*plVar21 + 0x10))(plVar21);
          (**(code **)(*plVar22 + 0x28))(plVar22,lVar16);
          (**(code **)(*plVar21 + 0x18))(plVar21);
        }
        plVar22 = *(long **)(param_1 + 0x70);
        uVar10 = uVar10 + 1;
        plVar21 = plVar20;
      } while (uVar10 < 3);
    }
    FUN_00884820(plVar22);
    uVar12 = (**(code **)(*plVar19 + 0x820))();
    bVar4 = FUN_009141c0();
    FUN_00884820(*(undefined8 *)(param_1 + 0x70));
    if (bVar4 != 0) {
      uVar10 = 0;
      do {
        uVar13 = FUN_00914330(uVar12,uVar10);
        plVar22 = *(long **)(param_1 + 0x70);
        FUN_00a276d0(&local_78,&local_80,uVar13);
        plVar21 = local_78;
        (**(code **)(*plVar22 + 0x28))(plVar22,local_78);
        if (plVar21 != (long *)0x0) {
          plVar21 = plVar21 + 9;
          (**(code **)(*plVar21 + 0x18))(plVar21);
          local_78 = (long *)0x0;
        }
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        uVar5 = FUN_008e0a00(uVar13);
        *(undefined1 *)(param_1 + (ulong)(iVar8 - 1) + 0x188) = uVar5;
        uVar14 = FUN_008e0a10(uVar13);
        if ((uVar14 & 1) != 0) {
          iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
          *(int *)(param_1 + 0xcc) = iVar8 + -1;
        }
        bVar7 = FUN_008e1980(uVar13);
        iVar8 = FUN_00884820(*(undefined8 *)(param_1 + 0x70));
        uVar10 = uVar10 + 1;
        *(byte *)(param_1 + (ulong)(iVar8 - 1) + 0x174) = bVar7 & 1;
      } while (bVar4 != uVar10);
    }
  }
  plVar21 = *(long **)(param_1 + 0x70);
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x10))();
  }
  uVar10 = FUN_00884820(plVar21);
  local_68 = (ushort)local_68._1_1_ << 8;
  local_64 = 1;
  local_70 = 0;
  local_78 = plVar19;
  if (uVar10 != 0) {
    uVar14 = 0;
    lVar15 = param_1;
    do {
      uVar12 = (**(code **)(*plVar21 + 0x50))(plVar21,uVar14 & 0xffffffff);
      bVar4 = FUN_0087b890();
      lVar16 = param_1 + uVar14 * 0x14;
      *(undefined4 *)(lVar16 + 0xe0) = 0;
      *(undefined8 *)(lVar16 + 0xd0) = 0;
      *(undefined8 *)(lVar16 + 0xd8) = 0;
      local_70 = CONCAT44(local_70._4_4_,(uint)*(byte *)(param_1 + uVar14 + 0x188));
      local_68 = CONCAT11(local_68._1_1_,1);
      if (bVar4 != 0) {
        uVar18 = 0;
        do {
          uVar11 = FUN_0087b880(uVar12,uVar18 & 0xffffffff);
          local_70 = CONCAT44(uVar11,(undefined4)local_70);
          bVar7 = FUN_00a39640(&local_78);
          *(byte *)(lVar15 + uVar18 + 0xe0) = bVar7 & 1;
          if ((bVar7 & 1) != 0) {
            *(undefined4 *)(lVar15 + uVar18 * 4 + 0xd0) = local_64;
          }
          uVar18 = uVar18 + 1;
        } while (bVar4 != uVar18);
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x14;
    } while (uVar14 != uVar10);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
  }
  uVar11 = (**(code **)(*plVar19 + 0x8b8))();
  local_78 = (long *)0x0;
  local_70 = 0;
  local_68 = 0x100;
  lVar15 = *(long *)(param_1 + 0x88);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  local_70 = lVar15;
  (**(code **)(*plVar19 + 0x7e0))(plVar19,&local_78,uVar11);
  *(undefined1 *)(param_1 + 0x91) = (undefined1)local_68;
  *(byte *)(param_1 + 0x90) = local_68._1_1_;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (bVar1 == 0) {
    if (bVar6 == 0) goto LAB_00a2761c;
    uVar11 = (**(code **)(*plVar19 + 0x8e8))(plVar19,2);
    local_78 = (long *)0x0;
    local_70 = 0;
    local_68 = 0x100;
    lVar15 = *(long *)(param_1 + 0x98);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    local_70 = lVar15;
    (**(code **)(*plVar19 + 0x7e0))(plVar19,&local_78,uVar11);
    *(undefined1 *)(param_1 + 0xa1) = (undefined1)local_68;
    *(byte *)(param_1 + 0xa0) = local_68._1_1_;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    uVar11 = (**(code **)(*plVar19 + 0x8e8))(plVar19,4);
    local_78 = (long *)0x0;
    local_70 = 0;
    local_68 = 0x100;
    lVar15 = *(long *)(param_1 + 0xa8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    local_70 = lVar15;
    (**(code **)(*plVar19 + 0x7e0))(plVar19,&local_78,uVar11);
    *(undefined1 *)(param_1 + 0xb1) = (undefined1)local_68;
    *(byte *)(param_1 + 0xb0) = local_68._1_1_;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    uVar11 = (**(code **)(*plVar19 + 0x8e8))(plVar19,6);
    local_78 = (long *)0x0;
    local_70 = 0;
    local_68 = 0x100;
    lVar15 = *(long *)(param_1 + 0xb8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    local_70 = lVar15;
    (**(code **)(*plVar19 + 0x7e0))(plVar19,&local_78,uVar11);
    *(undefined1 *)(param_1 + 0xc1) = (undefined1)local_68;
    *(byte *)(param_1 + 0xc0) = local_68._1_1_;
  }
  else {
    uVar11 = (**(code **)(*plVar19 + 0x8c0))();
    local_78 = (long *)0x0;
    local_70 = 0;
    local_68 = 0x100;
    lVar15 = *(long *)(param_1 + 0x98);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    local_70 = lVar15;
    (**(code **)(*plVar19 + 0x7e0))(plVar19,&local_78,uVar11);
    *(undefined1 *)(param_1 + 0xa1) = (undefined1)local_68;
    *(byte *)(param_1 + 0xa0) = local_68._1_1_;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
LAB_00a2761c:
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0xaa4) == '\0') {
      bVar3 = FUN_009c5570(uVar17);
      uVar11 = 1;
      if (1 < bVar3) {
        uVar11 = 2;
      }
    }
    else {
      uVar11 = 0;
    }
    *(undefined4 *)(param_1 + 200) = uVar11;
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  else {
    uVar11 = 0;
    if (*(char *)(param_1 + 0xa64) != '\0') {
      uVar11 = 3;
    }
    *(undefined4 *)(param_1 + 200) = uVar11;
    *(bool *)(param_1 + 0x168) = *(int *)(param_1 + 0x68c) == 0;
    if ((bVar3 & 1) == 0) {
      uVar10 = FUN_009c56a0(*(undefined8 *)(param_1 + 0xa68),0);
      uVar10 = uVar10 & 0xff;
      if (5 < uVar10) {
        uVar10 = 0xffffffff;
      }
      *(uint *)(param_1 + 0x16c) = uVar10;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0xffffffffffffffff;
  return;
}


