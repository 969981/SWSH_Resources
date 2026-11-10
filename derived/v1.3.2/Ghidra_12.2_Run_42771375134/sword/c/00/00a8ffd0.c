/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8ffd0; name: FUN_00a8ffd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a8ffd0(long *param_1,long param_2,long *param_3,long param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  long local_90;
  long local_88;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  long *local_60;
  undefined8 uStack_58;
  long local_48;
  
  puVar2 = PTR_FloatPi_02715160;
  fVar15 = *(float *)PTR_FloatDegree180_027194f0;
  puVar1 = PTR_DAT_027196d0 + 0x10;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = param_2;
  plVar14 = param_1 + 2;
  *plVar14 = 0;
  *(int *)(param_1 + 5) = param_5;
  fVar16 = *(float *)puVar2;
  param_1[7] = *(long *)(param_4 + 0x48);
  param_1[6] = *(long *)(param_4 + 0x40);
  param_1[9] = *(long *)(param_4 + 0x68);
  param_1[8] = *(long *)(param_4 + 0x60);
  *(float *)(param_1 + 10) = *(float *)(param_4 + 0x80) * (fVar15 / fVar16);
  *(float *)((long)param_1 + 0x54) = (fVar15 / fVar16) * *(float *)(param_4 + 0x2c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_4 + 0x24);
  uVar4 = *(undefined4 *)(param_4 + 0x28);
  *(undefined2 *)((long)param_1 + 0xc1) = 0x101;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar9 = _UNK_01d4a788;
  lVar8 = _DAT_01d4a780;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar4;
  param_1[0x1d] = lVar9;
  param_1[0x1c] = lVar8;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x23) = 0;
  FUN_012b4040(param_1 + 0x24);
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar1 = PTR_DAT_027194a8 + 0x10;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x30] = (long)puVar1;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar2 = PTR_DAT_02710818 + 0x10;
  param_1[0x53] = 0;
  param_1[0x52] = (long)puVar2;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = (long)puVar2;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x9e] = (long)puVar1;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0xc0] = (long)(PTR_DAT_02715b00 + 0x10);
  param_1[0xe2] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar13 = *(ulong *)(lVar8 + 0x80);
  if (param_5 == 0) {
    if (0xf < uVar13) goto LAB_00a90934;
    *(long **)(lVar8 + uVar13 * 8) = param_3;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*param_3 + 0x10))(param_3,0x1b0,0x10);
    if (lVar9 == 0) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    FUN_0070c3a0(lVar9,0xff00);
    *(long **)(lVar9 + 8) = param_3;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar9 + 0x20) = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar9 + 0x58);
      if (*(long *)(lVar8 + 0x58) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x60))();
        *(undefined8 *)(lVar8 + 0x58) = uVar10;
      }
      piVar3 = (int *)(lVar8 + 0x54);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar11 = (long *)*plVar14;
    if (plVar11 != (long *)0x0) {
      lVar8 = plVar11[0xb];
      piVar3 = (int *)(lVar8 + 0x54);
      do {
        iVar7 = *piVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_00a90398;
    }
  }
  else {
    if (0xf < uVar13) {
LAB_00a90934:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + uVar13 * 8) = param_3;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*param_3 + 0x10))(param_3,0x1b0,0x10);
    if (lVar9 == 0) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    FUN_0070c3a0(lVar9,0xfe00);
    *(long **)(lVar9 + 8) = param_3;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar9 + 0x20) = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar9 + 0x58);
      if (*(long *)(lVar8 + 0x58) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x60))();
        *(undefined8 *)(lVar8 + 0x58) = uVar10;
      }
      piVar3 = (int *)(lVar8 + 0x54);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar11 = (long *)*plVar14;
    if (plVar11 != (long *)0x0) {
      lVar8 = plVar11[0xb];
      piVar3 = (int *)(lVar8 + 0x54);
      do {
        iVar7 = *piVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00a90398:
      if (iVar7 == 0) {
        *(undefined8 *)(lVar8 + 0x60) = 0;
        (**(code **)(*plVar11 + 0x18))();
      }
      *plVar14 = 0;
    }
  }
  param_1[2] = lVar9;
  FUN_0070c4f0(lVar9,param_4);
  param_1[0x22] = 0xff000000ff;
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  FUN_00a90940(&local_60,param_3);
  plVar11 = (long *)param_1[3];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    piVar3 = (int *)(lVar8 + 0x54);
    do {
      iVar7 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar11 + 0x18))();
    }
    param_1[3] = 0;
  }
  plVar11 = local_60;
  param_1[3] = (long)local_60;
  plVar12 = (long *)FUN_00a997b0(&local_60,local_60[1]);
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x10))();
  }
  local_60 = plVar12;
  FUN_006d9640(plVar11,&local_60);
  if (local_60 != (long *)0x0) {
    (**(code **)(local_60[9] + 0x18))();
    local_60 = (long *)0x0;
  }
  param_1[4] = (long)plVar12;
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710848;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar9 == 0) {
    uVar13 = FUN_01019900(0,&local_60);
  }
  else {
    plVar11 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar13 = FUN_01019900(lVar9,&local_60);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar9 = local_48;
  if ((uVar13 & 1) != 0) {
    local_48 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN_01025970(&local_48,&local_60);
    lVar9 = 0;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
      lVar9 = local_48;
    }
  }
  local_48 = lVar9;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (param_5 == 1) {
    plVar11 = *(long **)(*(long *)(param_1[1] + 0x4a8) + 0x18);
    if (plVar11 != (long *)0x0) {
      lVar8 = plVar11[0xb];
      if (*(long *)(lVar8 + 0x58) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x60))();
        *(undefined8 *)(lVar8 + 0x58) = uVar10;
      }
      piVar3 = (int *)(lVar8 + 0x54);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_68 = param_1[3];
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    local_70 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    FUN_00a90a30(&local_68,&local_70);
    if (local_70 != (long *)0x0) {
      (**(code **)(local_70[9] + 0x18))();
      local_70 = (long *)0x0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    plVar12 = *(long **)(*(long *)(param_1[1] + 0x4a8) + 0x10);
    if (plVar12 != (long *)0x0) {
      lVar8 = plVar12[0xb];
      if (*(long *)(lVar8 + 0x58) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x60))();
        *(undefined8 *)(lVar8 + 0x58) = uVar10;
      }
      piVar3 = (int *)(lVar8 + 0x54);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_78 = *plVar14;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    local_80 = plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    FUN_00a90a30(&local_78,&local_80);
    if (local_80 != (long *)0x0) {
      (**(code **)(local_80[9] + 0x18))();
      local_80 = (long *)0x0;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar8 = plVar12[0xb];
      piVar3 = (int *)(lVar8 + 0x54);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x60) = 0;
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    if (plVar11 == (long *)0x0) goto LAB_00a907cc;
    lVar8 = plVar11[0xb];
    piVar3 = (int *)(lVar8 + 0x54);
    do {
      iVar7 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 != 0) goto LAB_00a907cc;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    lVar8 = *plVar11;
  }
  else {
    lVar8 = *plVar14;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_60 = (long *)0x0;
    uStack_58 = 0;
    lVar9 = *(long *)(*(long *)puVar1 + 0x68);
    if (lVar9 == 0) {
      uVar13 = FUN_01019900(0,&local_60);
    }
    else {
      plVar11 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar13 = FUN_01019900(lVar9,&local_60);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    lVar9 = local_48;
    if ((uVar13 & 1) != 0) {
      local_48 = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      FUN_01025970(&local_48,&local_60);
      lVar9 = 0;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
        lVar9 = local_48;
      }
    }
    local_48 = lVar9;
    if (lVar8 == 0) goto LAB_00a907cc;
    plVar11 = (long *)(lVar8 + 0x48);
    lVar8 = *plVar11;
  }
  (**(code **)(lVar8 + 0x18))(plVar11);
LAB_00a907cc:
  local_88 = *plVar14;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  local_90 = param_1[3];
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
  }
  FUN_00a90a30(&local_88,&local_90);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  local_48 = CONCAT44(local_48._4_4_,0x80018090);
  local_60 = param_1;
  FUN_00a9a030(param_1[2],*(undefined8 *)(param_1[2] + 8),&local_60,&local_48);
  lVar8 = param_1[0x96];
  *(undefined4 *)((long)param_1 + 0x72c) = 0xff;
  param_1[0xe6] = 0;
  *(undefined1 *)((long)param_1 + 0x171) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0x96] = 0;
  if (lVar8 != 0) {
    FUN_00784490(lVar8);
    (**(code **)(*(long *)param_1[0x97] + 0x18))
              ((long *)param_1[0x97],lVar8,param_1[0x98],param_1[0x99]);
  }
  lVar8 = param_1[0x9a];
  param_1[0x9a] = 0;
  if (lVar8 != 0) {
    FUN_00784490(lVar8);
    (**(code **)(*(long *)param_1[0x9b] + 0x18))
              ((long *)param_1[0x9b],lVar8,param_1[0x9c],param_1[0x9d]);
  }
  lVar8 = param_1[0xe2];
  param_1[0xe2] = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  *(undefined2 *)(param_1 + 0xe3) = 0;
  *(undefined1 *)((long)param_1 + 0x71a) = 0;
  *(undefined8 *)((long)param_1 + 0x71c) = 0x4240000041a00000;
  *(undefined8 *)((long)param_1 + 0x724) = 0x3f80000041200000;
  return;
}


