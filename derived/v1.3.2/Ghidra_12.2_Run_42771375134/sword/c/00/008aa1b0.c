/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aa1b0; name: FUN_008aa1b0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_008aa1b0(long param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_008aa210:
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar12 != (undefined8 *)0x0) {
      plVar6 = (long *)(**(code **)*puVar12)(puVar12);
      lVar7 = FUN_00897d00();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar7) {
          puVar12 = puVar12 + -10;
          goto LAB_008aa214;
        }
      }
      goto LAB_008aa210;
    }
  }
LAB_008aa214:
  iVar3 = *(int *)(param_1 + 0x98);
  lVar7 = puVar12[0x15];
  *(int *)(param_1 + 0x98) = iVar3 + 1;
  if (iVar3 == 0x3b) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_008ab670(param_1,*(char *)(param_1 + 0xa0) == '\0');
    uVar10 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))
                       (*(long **)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c));
    FUN_008c7410(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(lVar7 + 0x2b));
    uVar4 = FUN_008783b0(uVar10);
    uVar2 = FUN_008783c0(uVar10);
    uVar4 = FUN_014b3460(uVar4,uVar2,0,0);
    *(undefined4 *)(param_1 + 0xa4) = uVar4;
    *(undefined4 *)(param_1 + 0x7c) = 4;
    return;
  }
  if (iVar3 != 0x1c) {
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    plVar6 = (long *)puVar12[1];
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar6;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar6 + 0x10))(plVar6,0xb8,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_00866110(lVar9,plVar6);
    *(long **)(lVar9 + 8) = plVar6;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0xb8;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x250);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    iVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
    if (iVar3 == *(int *)PTR_DAT_027179d8) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0xc);
joined_r0x008aa6dc:
      if (iVar3 != -1) {
        local_70 = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        FUN_015513e0(lVar8,iVar3,&local_70);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
      }
    }
    else {
      if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x10)) {
        iVar3 = *(int *)(PTR_DAT_027179d8 + 0x1c);
        goto joined_r0x008aa6dc;
      }
      if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x20)) {
        iVar3 = *(int *)(PTR_DAT_027179d8 + 0x2c);
        goto joined_r0x008aa6dc;
      }
      if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x30)) {
        iVar3 = *(int *)(PTR_DAT_027179d8 + 0x3c);
        goto joined_r0x008aa6dc;
      }
      if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x40)) {
        iVar3 = *(int *)(PTR_DAT_027179d8 + 0x4c);
        goto joined_r0x008aa6dc;
      }
      if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x50)) {
        iVar3 = *(int *)(PTR_DAT_027179d8 + 0x5c);
        goto joined_r0x008aa6dc;
      }
      if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x60)) {
        iVar3 = *(int *)(PTR_DAT_027179d8 + 0x6c);
        goto joined_r0x008aa6dc;
      }
      if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x70)) {
        iVar3 = *(int *)(PTR_DAT_027179d8 + 0x7c);
        goto joined_r0x008aa6dc;
      }
      iVar3 = -1;
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    plVar6 = *(long **)(lVar13 + 0x58);
    if (plVar6 == (long *)0x0) {
      halt_baddata();
    }
    plVar14 = plVar6 + 9;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    (**(code **)(*plVar6 + 0x28))(plVar6,lVar9);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    uVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
    FUN_008a6e20(puVar12,uVar4,lVar9,1);
    uVar10 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))
                       (*(long **)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c));
    FUN_008a6e20(puVar12,uVar4,uVar10,1);
    FUN_01551410(lVar8,iVar3);
    FUN_008ab280(param_1);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    goto LAB_008aa8f8;
  }
  uVar10 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))
                     (*(long **)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c));
  if (*(int *)(lVar7 + 0x20) == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))();
  }
  puVar15 = (undefined8 *)(param_1 + 0x88);
  uVar4 = FUN_008c8330(*puVar15);
  FUN_008a6e20(puVar12,uVar4,uVar10,1);
  FUN_008a6e20(puVar12,uVar4,lVar8,1);
  FUN_008ab280(param_1);
  iVar3 = FUN_008c8330(*puVar15);
  if (iVar3 == *(int *)PTR_DAT_027179d8) {
    iVar3 = *(int *)(PTR_DAT_027179d8 + 0xc);
joined_r0x008aa700:
    if (iVar3 != -1) {
      lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x250);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      local_68 = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
      }
      FUN_015513b0(lVar9,iVar3,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
    }
  }
  else {
    if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x10)) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0x1c);
      goto joined_r0x008aa700;
    }
    if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x20)) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0x2c);
      goto joined_r0x008aa700;
    }
    if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x30)) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0x3c);
      goto joined_r0x008aa700;
    }
    if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x40)) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0x4c);
      goto joined_r0x008aa700;
    }
    if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x50)) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0x5c);
      goto joined_r0x008aa700;
    }
    if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x60)) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0x6c);
      goto joined_r0x008aa700;
    }
    if (iVar3 == *(int *)(PTR_DAT_027179d8 + 0x70)) {
      iVar3 = *(int *)(PTR_DAT_027179d8 + 0x7c);
      goto joined_r0x008aa700;
    }
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar6 = *(long **)(lVar8 + 0x58);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar14 = plVar6 + 9;
  (**(code **)(*plVar14 + 0x10))(plVar14);
  (**(code **)(*plVar6 + 0x38))(plVar6,*(undefined4 *)(lVar7 + 0x20));
  (**(code **)(*plVar14 + 0x18))(plVar14);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  lVar7 = FUN_00897d00();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar12[0xb];
  uVar11 = *(uint *)(lVar7 + 0x1c);
  if (uVar11 < 6) {
    if (*(uint *)(lVar7 + 0x20) < uVar11) {
      uVar11 = uVar11 - 1 & ((int)(uVar11 - 1) >> 0x1f ^ 0xffffffffU);
      *(uint *)(lVar7 + 0x1c) = uVar11;
    }
    FUN_008c8c50(*puVar15,(ulong)uVar11 << 0x20);
  }
  FUN_00ffa160(*puVar15,0,1);
LAB_008aa8f8:
  FUN_008c7410(*(undefined8 *)(param_1 + 0x88),0);
  puVar1 = PTR_DAT_02710848;
  uVar11 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 == 0) goto LAB_008aa954;
LAB_008aa91c:
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  lVar8 = *(long *)(lVar7 + 0x58);
  if (lVar8 != 0) goto LAB_008aa95c;
  do {
    uVar5 = FUN_00884820(0);
    while( true ) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      if (uVar5 <= uVar11) {
        FUN_008ab450(param_1);
        return;
      }
      FUN_008c9590(*(undefined8 *)(param_1 + 0x88),uVar11);
      uVar11 = uVar11 + 1;
      lVar7 = *(long *)(*(long *)puVar1 + 0x90);
      if (lVar7 != 0) goto LAB_008aa91c;
LAB_008aa954:
      lVar8 = *(long *)(lVar7 + 0x58);
      if (lVar8 == 0) break;
LAB_008aa95c:
      plVar6 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar5 = FUN_00884820(lVar8);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  } while( true );
}


