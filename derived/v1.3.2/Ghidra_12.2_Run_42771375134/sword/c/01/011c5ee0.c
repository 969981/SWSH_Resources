/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c5ee0; name: FUN_011c5ee0
 */


void FUN_011c5ee0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar15;
  undefined8 *puVar14;
  long *plVar16;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_011d56e0();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_011dae40();
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    pcVar12 = *(code **)(param_1 + 0x1d8);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      (*pcVar12)(param_1 + 0x1f0);
    }
    *(long *)(param_1 + 0x1f0) = param_1;
    *(undefined1 **)(param_1 + 0x1d0) = &LAB_011c8cb0;
    *(undefined1 **)(param_1 + 0x1d8) = &LAB_011c8de0;
    *(undefined1 **)(param_1 + 0x1e0) = &LAB_011c8df0;
    *(undefined1 **)(param_1 + 0x1e8) = &LAB_011c8e00;
    pcVar12 = *(code **)(param_1 + 0x278);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      (*pcVar12)(param_1 + 0x290);
    }
    *(long *)(param_1 + 0x290) = param_1;
    uVar13 = *(undefined8 *)(param_1 + 0x1a0);
    local_50 = *(long *)(param_1 + 0x10);
    *(undefined1 **)(param_1 + 0x270) = &LAB_011c8e10;
    *(undefined1 **)(param_1 + 0x278) = &LAB_011c8e30;
    *(undefined1 **)(param_1 + 0x280) = &LAB_011c8e40;
    *(undefined1 **)(param_1 + 0x288) = &LAB_011c8e50;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    uVar7 = FUN_011d5410(uVar13,&local_50,param_1 + 0x1c0,param_1 + 0x260);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0xc;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 2;
    }
    break;
  case 2:
    if (*(char *)(*(long *)(param_1 + 0x318) + 0x68) != '\0') {
      FUN_011d56c0(*(undefined8 *)(param_1 + 0x1a0));
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    break;
  case 4:
    FUN_011d5480(*(undefined8 *)(param_1 + 0x1a0),param_1 + 0x1c0,param_1 + 0x260);
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 5;
      return;
    }
    goto LAB_011c6190;
  case 5:
    iVar3 = FUN_019407b0(*(undefined8 *)PTR_DAT_02716a30);
    FUN_011ffb90(&local_48,*(undefined8 *)PTR_DAT_02718f20,1 - iVar3);
    plVar16 = *(long **)(param_1 + 8);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_011c6790:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar8 = (**(code **)(*plVar16 + 0x10))(plVar16,0x60,8);
    if (lVar8 == 0) {
      (**(code **)(*plVar16 + 0xb8))(plVar16);
    }
    FUN_011f5930(lVar8,*(undefined8 *)(param_1 + 8));
    *(long **)(lVar8 + 8) = plVar16;
    *(long *)(lVar8 + 0x10) = lVar8;
    *(undefined8 *)(lVar8 + 0x18) = 0x60;
    *(undefined8 *)(lVar8 + 0x20) = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN_011f5e20(lVar8,*(undefined8 *)(local_48 + 8));
    *(undefined4 *)(param_1 + 0x30) = 6;
    if (*(char *)(*(long *)(param_1 + 0x318) + 0x68) != '\0') {
      *(undefined8 *)(param_1 + 0x30) = 0x30000000c;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    break;
  case 6:
    if (*(char *)(*(long *)(param_1 + 0x318) + 0x68) == '\0') {
      uVar4 = FUN_008783b0(*(undefined8 *)(param_1 + 0x18));
      uVar5 = FUN_008783c0(*(undefined8 *)(param_1 + 0x18));
      uVar7 = FUN_009fc280(uVar4,uVar5);
      if (((uVar7 & 1) == 0) &&
         ((uVar6 = FUN_008787f0(*(undefined8 *)(param_1 + 0x18)), (uVar6 & 0xffff) == 0 ||
          ((uVar7 = FUN_008891f0(), (uVar7 & 1) != 0 &&
           (uVar7 = FUN_00889190(uVar6), (uVar7 & 1) != 0)))))) {
        uVar7 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
        if ((uVar7 & 1) == 0) goto LAB_011c6748;
        lVar11 = FUN_012a0bc0(&local_48,*(undefined8 *)(param_1 + 8));
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x308) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x308) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x308) = 0;
        }
        *(long *)(param_1 + 0x308) = lVar11;
        *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(param_1 + 8);
        puVar2 = PTR_DAT_02710860;
        plVar16 = *(long **)(param_1 + 8);
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (*(ulong *)(lVar8 + 0x80) < 0x10) {
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x90,8);
          if (plVar9 == (long *)0x0) {
            (**(code **)(*plVar16 + 0xb8))(plVar16);
          }
          FUN_00883c20(plVar9,*(undefined8 *)(param_1 + 8));
          plVar9[1] = (long)plVar16;
          plVar9[2] = (long)plVar9;
          plVar9[3] = 0x90;
          plVar9[4] = 8;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          if (plVar9 != (long *)0x0) {
            (**(code **)(plVar9[9] + 0x10))();
          }
          if (*(long *)(lVar11 + 0x68) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar11 + 0x68) + 0x48) + 0x18))();
            *(undefined8 *)(lVar11 + 0x68) = 0;
          }
          *(long **)(lVar11 + 0x68) = plVar9;
          (**(code **)(*plVar9 + 0x28))(plVar9,*(undefined8 *)(param_1 + 0x10));
          (**(code **)(**(long **)(lVar11 + 0x68) + 0x28))
                    (*(long **)(lVar11 + 0x68),*(undefined8 *)(param_1 + 0x18));
          plVar16 = *(long **)(param_1 + 8);
          lVar11 = *(long *)(*(long *)(param_1 + 0x308) + 0x58);
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
          }
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (*(ulong *)(lVar8 + 0x80) < 0x10) {
            *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0xa8,8);
            if (lVar10 == 0) {
              (**(code **)(*plVar16 + 0xb8))(plVar16);
            }
            local_48 = lVar11;
            FUN_012a2230(lVar10,&local_48);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
              local_48 = 0;
            }
            *(long **)(lVar10 + 8) = plVar16;
            *(long *)(lVar10 + 0x10) = lVar10;
            *(undefined8 *)(lVar10 + 0x18) = 0xa8;
            *(undefined8 *)(lVar10 + 0x20) = 8;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            if (lVar10 != 0) {
              (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0x300) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x300) = 0;
            }
            *(long *)(param_1 + 0x300) = lVar10;
            *(undefined4 *)(param_1 + 0x30) = 7;
            return;
          }
        }
        goto LAB_011c6790;
      }
      FUN_011f8e00(*(undefined8 *)PTR_DAT_02710490);
      uVar13 = 0x10000000c;
    }
    else {
      uVar13 = 0x30000000c;
    }
    goto LAB_011c6774;
  case 7:
    uVar7 = FUN_012a2430(*(undefined8 *)(param_1 + 0x300));
    if ((uVar7 & 0xff) == 0) {
      return;
    }
    if ((uVar7 & 0xff00) != 0) {
      lVar11 = *(long *)(param_1 + 0x308);
      if (*(char *)(lVar11 + 0x70) == '\0') {
LAB_011c6748:
        *(undefined4 *)(param_1 + 0x30) = 8;
        return;
      }
      if (*(int *)(lVar11 + 0x74) == 0) {
        if (*(int *)(lVar11 + 0x78) == 0) goto LAB_011c676c;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      *(undefined4 *)(param_1 + 0x314) = uVar4;
      *(undefined1 *)(param_1 + 0x310) = 1;
    }
LAB_011c676c:
    uVar13 = 0x40000000c;
LAB_011c6774:
    *(undefined8 *)(param_1 + 0x30) = uVar13;
    break;
  case 8:
    pcVar12 = *(code **)(param_1 + 0x78);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      (*pcVar12)(param_1 + 0x90);
    }
    *(long *)(param_1 + 0x90) = param_1;
    *(undefined1 **)(param_1 + 0x70) = &LAB_011c8e60;
    *(undefined1 **)(param_1 + 0x78) = &LAB_011c8e70;
    pcVar12 = *(code **)(param_1 + 0x118);
    *(undefined1 **)(param_1 + 0x80) = &LAB_011c8e80;
    *(undefined1 **)(param_1 + 0x88) = &LAB_011c8e90;
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      (*pcVar12)(param_1 + 0x130);
    }
    *(long *)(param_1 + 0x130) = param_1;
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    local_58 = *(long *)(param_1 + 0x10);
    *(undefined1 **)(param_1 + 0x110) = &LAB_011c8ea0;
    *(undefined1 **)(param_1 + 0x118) = &LAB_011c8ec0;
    *(undefined1 **)(param_1 + 0x120) = &LAB_011c8ed0;
    *(undefined1 **)(param_1 + 0x128) = &LAB_011c8ee0;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_60 = *(long *)(param_1 + 0x18);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    uVar7 = FUN_011dab90(uVar13,&local_58,&local_60,param_1 + 0x60,param_1 + 0x100);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 2;
      *(undefined4 *)(param_1 + 0x30) = 0xc;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 9;
    }
    break;
  case 9:
    if (*(char *)(*(long *)(param_1 + 0x318) + 0x68) != '\0') {
      FUN_011dae20(*(undefined8 *)(param_1 + 0x38));
      *(undefined4 *)(param_1 + 0x30) = 10;
    }
    break;
  case 0xb:
    FUN_011dac60(*(undefined8 *)(param_1 + 0x38),param_1 + 0x60,param_1 + 0x100);
LAB_011c6190:
    *(undefined4 *)(param_1 + 0x30) = 0xc;
    break;
  case 0xc:
    if (*(int *)(param_1 + 0x34) == 0) {
      lVar11 = *(long *)(param_1 + 0x18);
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      puVar14 = *(undefined8 **)(lVar8 + 0x60);
      puVar1 = *(undefined8 **)(lVar8 + 0x68);
      if (puVar14 != puVar1) {
        if (lVar11 == 0) {
          do {
            local_48 = 0;
            (**(code **)(*(long *)*puVar14 + 8))((long *)*puVar14,&local_48);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
              local_48 = 0;
            }
            puVar14 = puVar14 + 1;
          } while (puVar1 != puVar14);
        }
        else {
          do {
            plVar16 = (long *)*puVar14;
            local_48 = lVar11;
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(lVar11 + 0x48);
            (**(code **)(*plVar16 + 8))(plVar16,&local_48);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
              local_48 = 0;
            }
            puVar14 = puVar14 + 1;
          } while (puVar1 != puVar14);
        }
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
    }
    else {
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x60);
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x68);
      if (puVar14 != puVar1) {
        uVar13 = *(undefined8 *)(param_1 + 0x310);
        do {
          puVar15 = puVar14 + 1;
          (**(code **)(*(long *)*puVar14 + 8))((long *)*puVar14,uVar13);
          puVar14 = puVar15;
        } while (puVar1 != puVar15);
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


