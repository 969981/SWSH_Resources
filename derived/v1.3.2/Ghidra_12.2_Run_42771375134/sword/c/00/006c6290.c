/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c6290; name: FUN_006c6290
 */


void FUN_006c6290(long param_1,long *param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long local_70;
  undefined1 auStack_68 [8];
  
  uVar8 = (ulong)param_4;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006c6ed0;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar2 = param_2;
  puVar2[1] = 0x1fffffffffffffff;
  puVar2[6] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c6364:
      (*pcVar7)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6364;
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),lVar3,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0x40;
  *(undefined8 *)(param_1 + 0x20) = 0x10;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006c6ed0;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar5 = *puVar2;
  puVar5[1] = puVar2[1];
  plVar4 = (long *)puVar2[6];
  uVar9 = (ulong)param_3;
  if (plVar4 == (long *)0x0) {
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else if (puVar2 + 2 == plVar4) {
    puVar5[6] = puVar5 + 2;
    (**(code **)(*(long *)puVar2[6] + 0x18))();
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x10))();
    puVar5[6] = uVar6;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  if (param_3 != 0) {
    if ((ulong)puVar5[1] < uVar9) goto LAB_006c6ed0;
    uVar6 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,uVar9 << 3,8);
    FUN_006c99e0(puVar5,uVar6,uVar9,puVar5[8] + puVar5[9] * 8,0,0);
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[9];
    if (lVar3 != 0) {
      plVar4 = (long *)puVar2[8];
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    if (puVar2[10] != 0) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
    }
    plVar4 = (long *)puVar2[6];
    if (puVar2 + 2 == plVar4) {
      pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c6558:
      (*pcVar7)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6558;
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
              (*(long **)(param_1 + 0x30),puVar2,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40));
  }
  *(long **)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0x60;
  *(undefined8 *)(param_1 + 0x40) = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006c6ed0;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar2 = param_2;
  puVar2[1] = 0x1fffffffffffffff;
  puVar2[6] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *(long *)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = puVar2;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c6634:
      (*pcVar7)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6634;
    }
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
              (*(long **)(param_1 + 0x50),lVar3,*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60));
    puVar2 = *(undefined8 **)(param_1 + 0x48);
  }
  *(long **)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0x40;
  *(undefined8 *)(param_1 + 0x60) = 0x10;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006c6ed0;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar5 = *puVar2;
  puVar5[1] = puVar2[1];
  plVar4 = (long *)puVar2[6];
  if (plVar4 == (long *)0x0) {
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else if (puVar2 + 2 == plVar4) {
    puVar5[6] = puVar5 + 2;
    (**(code **)(*(long *)puVar2[6] + 0x18))();
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x10))();
    puVar5[6] = uVar6;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  if (param_4 != 0) {
    if ((ulong)puVar5[1] < uVar8) goto LAB_006c6ed0;
    uVar6 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,uVar8 << 3,8);
    FUN_006c9be0(puVar5,uVar6,uVar8,puVar5[8] + puVar5[9] * 8,0,0);
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 **)(param_1 + 0x68) = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[9];
    if (lVar3 != 0) {
      plVar4 = (long *)puVar2[8];
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    if (puVar2[10] != 0) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
    }
    plVar4 = (long *)puVar2[6];
    if (puVar2 + 2 == plVar4) {
      pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c682c:
      (*pcVar7)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c682c;
    }
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),puVar2,*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(param_1 + 0x80));
  }
  *(long **)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = 0x60;
  *(undefined8 *)(param_1 + 0x80) = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006c6ed0;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar2 = param_2;
  puVar2[1] = 0x1fffffffffffffff;
  puVar2[6] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *(long *)(param_1 + 0x88);
  *(undefined8 **)(param_1 + 0x88) = puVar2;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c6908:
      (*pcVar7)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6908;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),lVar3,*(undefined8 *)(param_1 + 0x98),
               *(undefined8 *)(param_1 + 0xa0));
    puVar2 = *(undefined8 **)(param_1 + 0x88);
  }
  *(long **)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = 0x40;
  *(undefined8 *)(param_1 + 0xa0) = 0x10;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006c6ed0;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar5 = *puVar2;
  puVar5[1] = puVar2[1];
  plVar4 = (long *)puVar2[6];
  if (plVar4 == (long *)0x0) {
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else if (puVar2 + 2 == plVar4) {
    puVar5[6] = puVar5 + 2;
    (**(code **)(*(long *)puVar2[6] + 0x18))();
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x10))();
    puVar5[6] = uVar6;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  if (param_3 != 0) {
    if ((ulong)puVar5[1] < uVar9) goto LAB_006c6ed0;
    uVar6 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,uVar9 << 3,8);
    FUN_006c9de0(puVar5,uVar6,uVar9,puVar5[8] + puVar5[9] * 8,0,0);
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined8 **)(param_1 + 0xa8) = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[9];
    if (lVar3 != 0) {
      plVar4 = (long *)puVar2[8];
      do {
        lVar3 = lVar3 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    if (puVar2[10] != 0) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
    }
    plVar4 = (long *)puVar2[6];
    if (puVar2 + 2 == plVar4) {
      pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c6b00:
      (*pcVar7)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6b00;
    }
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),puVar2,*(undefined8 *)(param_1 + 0xb8),
               *(undefined8 *)(param_1 + 0xc0));
  }
  *(long **)(param_1 + 0xb0) = param_2;
  *(undefined8 *)(param_1 + 0xb8) = 0x60;
  *(undefined8 *)(param_1 + 0xc0) = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006c6ed0;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar2 = param_2;
  puVar2[1] = 0x1fffffffffffffff;
  puVar2[6] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *(long *)(param_1 + 200);
  *(undefined8 **)(param_1 + 200) = puVar2;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c6bdc:
      (*pcVar7)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x28);
      goto LAB_006c6bdc;
    }
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
              (*(long **)(param_1 + 0xd0),lVar3,*(undefined8 *)(param_1 + 0xd8),
               *(undefined8 *)(param_1 + 0xe0));
    puVar2 = *(undefined8 **)(param_1 + 200);
  }
  *(long **)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xd8) = 0x40;
  *(undefined8 *)(param_1 + 0xe0) = 0x10;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_006c6ed0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar5 = *puVar2;
  puVar5[1] = puVar2[1];
  plVar4 = (long *)puVar2[6];
  if (plVar4 == (long *)0x0) {
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else if (puVar2 + 2 == plVar4) {
    puVar5[6] = puVar5 + 2;
    (**(code **)(*(long *)puVar2[6] + 0x18))();
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x10))();
    puVar5[6] = uVar6;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[8] = 0;
  }
  if (param_4 != 0) {
    if ((ulong)puVar5[1] < uVar8) goto LAB_006c6ed0;
    uVar6 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,uVar8 << 3,8);
    FUN_006c9fe0(puVar5,uVar6,uVar8,puVar5[8] + puVar5[9] * 8,0,0);
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  *(undefined8 **)(param_1 + 0xe8) = puVar5;
  if (puVar2 == (undefined8 *)0x0) goto LAB_006c6dfc;
  lVar3 = puVar2[9];
  if (lVar3 != 0) {
    plVar4 = (long *)puVar2[8];
    do {
      lVar3 = lVar3 + -1;
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
  }
  if (puVar2[10] != 0) {
    (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,puVar2[8],puVar2[10] << 3,8);
  }
  plVar4 = (long *)puVar2[6];
  if (puVar2 + 2 == plVar4) {
    pcVar7 = *(code **)(*plVar4 + 0x20);
LAB_006c6dd0:
    (*pcVar7)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar4 + 0x28);
    goto LAB_006c6dd0;
  }
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
            (*(long **)(param_1 + 0xf0),puVar2,*(undefined8 *)(param_1 + 0xf8),
             *(undefined8 *)(param_1 + 0x100));
LAB_006c6dfc:
  *(long **)(param_1 + 0xf0) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = 0x60;
  *(undefined8 *)(param_1 + 0x100) = 0x10;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    local_70 = FUN_006ca1e0(auStack_68,param_2);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_006ca2c0(*(undefined8 *)(param_1 + 0x28),&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
  }
  while (param_4 != 0) {
    local_70 = FUN_006ca5f0(auStack_68,param_2);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_006ca6d0(*(undefined8 *)(param_1 + 0x68),&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    param_4 = (int)uVar8 - 1;
    uVar8 = (ulong)param_4;
  }
  return;
}


