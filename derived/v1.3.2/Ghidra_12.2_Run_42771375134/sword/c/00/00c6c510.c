/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6c510; name: FUN_00c6c510
 */


void FUN_00c6c510(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x20);
  lVar12 = *(long *)(param_2 + 0x18);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar12;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x1c9) = *(undefined1 *)(param_2 + 0x2c1);
  *(undefined1 *)(param_1 + 0x1ca) = *(undefined1 *)(param_2 + 0x2c2);
  *(undefined1 *)(param_1 + 0x1cb) = *(undefined1 *)(param_2 + 0x2c3);
  *(undefined1 *)(param_1 + 0x1cc) = *(undefined1 *)(param_2 + 0x2c4);
  *(undefined1 *)(param_1 + 0x1cd) = *(undefined1 *)(param_2 + 0x2c5);
  if ((*(long *)(param_2 + 0x58) == 0) || (*(int *)(*(long *)(param_2 + 0x58) + 0x54) == 0)) {
    plVar9 = (long *)FUN_00ad95d0(&local_68,*(undefined8 *)(param_1 + 0x68));
    if (plVar9 != (long *)0x0) {
      (**(code **)(plVar9[9] + 0x10))();
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    *(long **)(param_1 + 0x100) = plVar9;
    (**(code **)(*plVar9 + 0x10))(&local_68,plVar9);
    if (*(long *)(param_1 + 0x108) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x108) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    *(long *)(param_1 + 0x108) = local_68;
    if (*(char *)(param_2 + 0x25) != '\0') {
      lVar12 = *(long *)(*(long *)(param_1 + 0x100) + 0x170);
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1;
      lVar12 = *(long *)(*(long *)(param_1 + 0x100) + 0x178);
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1;
    }
    if ((*(long *)(param_2 + 0x70) == 0) || (*(int *)(*(long *)(param_2 + 0x70) + 0x54) == 0)) {
      local_80 = *(long *)(param_1 + 0x100);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
      }
      FUN_01025970(&local_80,param_2 + 0x60);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
        lVar12 = *(long *)(param_1 + 0x70);
        goto joined_r0x00c6c890;
      }
    }
    else {
      local_70 = *(long *)(param_1 + 0x100);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      }
      puVar6 = PTR_DAT_02715080;
      lVar12 = *(long *)(param_2 + 0x70);
      if ((lVar12 == 0) || (*(int *)(lVar12 + 0x54) == 0)) {
LAB_00c6c7fc:
        local_78 = 0;
      }
      else {
        piVar1 = (int *)(lVar12 + 0x54);
        pbVar11 = PTR_DAT_02715078;
        iVar13 = *(int *)(lVar12 + 0x54);
        do {
          while( true ) {
            plVar9 = *(long **)(lVar12 + 0x58);
            if ((*pbVar11 & 1) == 0) {
              iVar7 = __cxa_guard_acquire(pbVar11);
              pbVar11 = PTR_DAT_02715078;
              if (iVar7 != 0) {
                uVar10 = FUN_00a87090();
                *(undefined8 *)puVar6 = uVar10;
                __cxa_guard_release(PTR_DAT_02715078);
                pbVar11 = PTR_DAT_02715078;
              }
            }
            while( true ) {
              if (plVar9 == (long *)0x0) goto LAB_00c6c7fc;
              if (plVar9 == (long *)puVar6) break;
              plVar9 = (long *)*plVar9;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar13) break;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              local_78 = 0;
              if (*(long *)(lVar12 + 0x60) != 0) {
                local_78 = *(long *)(lVar12 + 0x60) + -0x50;
              }
              goto LAB_00c6c800;
            }
            local_78 = 0;
            iVar13 = iVar7;
            if (iVar7 == 0) goto LAB_00c6c800;
          }
          ClearExclusiveLocal();
          local_78 = 0;
          iVar13 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00c6c800:
      FUN_01025980(&local_70,&local_78,param_2 + 0x60);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
    }
  }
  else {
    lVar12 = *(long *)(param_2 + 0x58);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(param_1 + 0x108);
    *(long *)(param_1 + 0x108) = lVar12;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      lVar12 = *(long *)(param_1 + 0x70);
      goto joined_r0x00c6c890;
    }
  }
  lVar12 = *(long *)(param_1 + 0x70);
joined_r0x00c6c890:
  if (lVar12 == 0) {
    local_68 = 0;
  }
  else {
    FUN_00c62ba0(&local_68);
  }
  FUN_00cae9b0(local_68,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x78),
               param_1 + 0xa8,param_1 + 200,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


