/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c85db0; name: FUN_00c85db0
 */


void FUN_00c85db0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x20);
  lVar16 = *(long *)(param_2 + 0x18);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar16;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x24);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  uVar17 = *(undefined8 *)(param_2 + 0x38);
  uVar14 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0xb0) = uVar17;
  *(undefined8 *)(param_1 + 0xb8) = uVar14;
  *(undefined8 *)(param_1 + 0xa8) = uVar13;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0x78);
  plVar11 = (long *)FUN_00c7cc60(uVar10,0x1f);
  if (*(long *)(param_1 + 200) == *plVar11) {
    puVar12 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x20);
    *(undefined8 *)(param_1 + 200) = *puVar12;
  }
  if ((*(long *)(param_2 + 0x58) == 0) || (*(int *)(*(long *)(param_2 + 0x58) + 0x54) == 0)) {
    plVar11 = (long *)FUN_00ad95d0(&local_78,*(undefined8 *)(param_1 + 0x68));
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xe8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    *(long **)(param_1 + 0xe8) = plVar11;
    (**(code **)(*plVar11 + 0x10))(&local_78,plVar11);
    if (*(long *)(param_1 + 0xf0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xf0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    *(undefined8 *)(param_1 + 0xf0) = local_78;
    if (*(char *)(param_2 + 0x25) != '\0') {
      lVar16 = *(long *)(*(long *)(param_1 + 0xe8) + 0x170);
      *(ulong *)(lVar16 + 0x138) = *(ulong *)(lVar16 + 0x138) | 1;
      lVar16 = *(long *)(*(long *)(param_1 + 0xe8) + 0x178);
      *(ulong *)(lVar16 + 0x138) = *(ulong *)(lVar16 + 0x138) | 1;
    }
    if ((*(long *)(param_2 + 0x70) == 0) || (*(int *)(*(long *)(param_2 + 0x70) + 0x54) == 0)) {
      local_68 = *(long *)(param_1 + 0xe8);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      FUN_01025970(&local_68,param_2 + 0x60);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
    }
    else {
      local_58 = *(long *)(param_1 + 0xe8);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      puVar7 = PTR_DAT_02715080;
      puVar6 = PTR_DAT_02715078;
      lVar16 = *(long *)(param_2 + 0x70);
      if ((lVar16 == 0) || (*(int *)(lVar16 + 0x54) == 0)) {
LAB_00c86078:
        local_60 = 0;
      }
      else {
        piVar1 = (int *)(lVar16 + 0x54);
        iVar15 = *(int *)(lVar16 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar16 + 0x58);
            if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
              uVar13 = FUN_00a87090();
              *(undefined8 *)puVar7 = uVar13;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_00c86078;
              if (plVar11 == (long *)puVar7) break;
              plVar11 = (long *)*plVar11;
            }
            iVar8 = *piVar1;
            if (iVar8 != iVar15) break;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              local_60 = 0;
              if (*(long *)(lVar16 + 0x60) != 0) {
                local_60 = *(long *)(lVar16 + 0x60) + -0x50;
              }
              goto LAB_00c8607c;
            }
            local_60 = 0;
            iVar15 = iVar8;
            if (iVar8 == 0) goto LAB_00c8607c;
          }
          ClearExclusiveLocal();
          local_60 = 0;
          iVar15 = iVar8;
        } while (iVar8 != 0);
      }
LAB_00c8607c:
      FUN_01025980(&local_58,&local_60,param_2 + 0x60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
  }
  else {
    lVar16 = *(long *)(param_2 + 0x58);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xf0) = lVar16;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    }
  }
  local_78 = 0;
  local_70 = 0;
  FUN_00c86210(param_1,&local_78,param_1 + 0xd4,param_1 + 0xd8,param_1 + 0xdc);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  lVar16 = *(long *)(param_1 + 0x70);
  uVar17 = uVar13;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    uVar17 = *(undefined8 *)(param_1 + 0x68);
  }
  uVar14 = local_70;
  uVar10 = local_78;
  uVar3 = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_3 + 8) = 6;
  *(undefined8 *)(param_3 + 0x10) = uVar13;
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(param_3 + 0x20);
  *(long *)(param_3 + 0x20) = lVar16;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_3 + 0x38) = uVar3;
  *(undefined8 *)(param_3 + 0x28) = uVar10;
  *(undefined8 *)(param_3 + 0x30) = uVar14;
  *(undefined8 *)(param_3 + 0x40) = uVar17;
  plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x18);
  *(bool *)param_4 = *(long *)(param_1 + 200) == *plVar11;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  return;
}


