/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecf520; name: FUN_00ecf520
 */


ulong FUN_00ecf520(void)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  ushort uVar14;
  long lVar15;
  long local_68;
  
  lVar15 = *(long *)PTR_DAT_02710798;
  lVar9 = *(long *)(lVar15 + 0x1e8);
  if (lVar9 != 0) {
    unaff_x20 = (long *)(lVar9 + 0x48);
    (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
    (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  plVar11 = *(long **)(lVar10 + 0x58);
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x10))();
  }
  uVar4 = FUN_00884820(plVar11);
  if (uVar4 != 0) {
    unaff_x20 = (long *)(ulong)uVar4;
    uVar12 = 0;
    do {
      while (lVar6 = (**(code **)(*plVar11 + 0x58))(plVar11,uVar12), lVar6 == 0) {
LAB_00ecf660:
        uVar12 = uVar12 + 1;
        if (uVar4 <= uVar12) goto LAB_00ecf68c;
      }
      plVar13 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      uVar7 = FUN_008787d0(lVar6);
      if (((((uVar7 & 1) == 0) && (uVar7 = FUN_0087d610(lVar6,2), (uVar7 & 1) == 0)) &&
          (iVar5 = FUN_008783b0(lVar6), iVar5 == 0x382)) &&
         (sVar2 = FUN_008783c0(lVar6), (ushort)(sVar2 - 1U) < 2)) {
        uVar7 = FUN_01524c50(lVar9,lVar6);
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar13);
        if ((uVar7 & 1) == 0) goto LAB_00ecf660;
        uVar7 = FUN_00878a80(lVar6);
        unaff_x20 = (long *)(uVar7 & 0xffffffff);
        bVar1 = true;
        goto joined_r0x00ecf9b4;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
LAB_00ecf68c:
  bVar1 = false;
joined_r0x00ecf9b4:
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
  }
  uVar4 = (uint)unaff_x20;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (!bVar1) {
    lVar10 = *(long *)(lVar15 + 0x228);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar15 = *(long *)(lVar15 + 0x220);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    plVar11 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0xb8,8);
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_00866110(lVar8,plVar11);
    *(long **)(lVar8 + 8) = plVar11;
    *(long *)(lVar8 + 0x10) = lVar8;
    *(undefined8 *)(lVar8 + 0x18) = 0xb8;
    *(undefined8 *)(lVar8 + 0x20) = 8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar3 = FUN_0150b1c0(lVar10);
    if (uVar3 != 0) {
      uVar14 = 0;
      plVar11 = (long *)(lVar8 + 0x48);
      do {
        uVar12 = 0;
        if (lVar8 == 0) {
          do {
            local_68 = 0;
            FUN_01505e60(lVar15,&local_68,uVar14,uVar12);
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != 0x1e);
        }
        else {
          do {
            while( true ) {
              local_68 = lVar8;
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar11);
              FUN_01505e60(lVar15,&local_68,uVar14,uVar12);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar11);
              uVar7 = FUN_008787d0(lVar8);
              if ((((uVar7 & 1) == 0) && (uVar7 = FUN_0087d610(lVar8,2), (uVar7 & 1) == 0)) &&
                 ((iVar5 = FUN_008783b0(lVar8), iVar5 == 0x382 &&
                  (sVar2 = FUN_008783c0(lVar8), (ushort)(sVar2 - 1U) < 2)))) break;
              (**(code **)(*plVar11 + 0x18))(plVar11);
              uVar12 = uVar12 + 1;
              if (0x1d < uVar12) goto LAB_00ecf8dc;
            }
            uVar7 = FUN_01524c50(lVar9,lVar8);
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))(plVar11);
            if ((uVar7 & 1) != 0) {
              uVar4 = FUN_00878a80(lVar8);
              bVar1 = false;
              goto LAB_00ecf90c;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < 0x1e);
        }
LAB_00ecf8dc:
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar3);
    }
    if (lVar8 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = true;
LAB_00ecf90c:
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    uVar12 = 4;
    if (!bVar1) {
      uVar12 = uVar4;
    }
    unaff_x20 = (long *)(ulong)uVar12;
  }
  if (lVar9 != 0) {
    plVar11 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  return (ulong)unaff_x20 & 0xffffffff;
}


