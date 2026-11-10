/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3add0; name: FUN_00e3add0
 */


/* WARNING: Removing unreachable block (ram,0x00e3b470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3add0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  ushort *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar11 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar11 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar11);
    lVar15 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00ddb420(param_1,param_2,param_3,lVar15,0x7f00);
  puVar5 = PTR_DAT_0271f7a0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)((long)param_1 + 0x3f4) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  puVar6 = PTR_DAT_0271f778;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x1b0);
  param_1[10] = (long)(puVar5 + 0x1f0);
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)((long)param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  *(undefined1 *)((long)param_1 + 0x46a) = 0;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  *(undefined4 *)((long)param_1 + 0x464) = 0;
  puVar7 = PTR_DAT_0271f780;
  puVar5 = PTR_DAT_0271f770;
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)puVar6;
  puVar6 = PTR_DAT_0271f788;
  *(undefined4 *)((long)param_1 + 0x474) = *(undefined4 *)puVar5;
  uVar21 = *(undefined4 *)puVar7;
  *(undefined4 *)(param_1 + 0x8f) = uVar21;
  puVar7 = PTR_DAT_0271f798;
  puVar5 = PTR_DAT_0271f790;
  *(undefined4 *)((long)param_1 + 0x47c) = *(undefined4 *)puVar6;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)puVar5;
  uVar22 = *(undefined4 *)puVar7;
  param_1[0x91] = 0x3e4ccccd3dcccccd;
  *(undefined4 *)(param_1 + 0x92) = 0x28;
  *(undefined4 *)(param_1 + 0x94) = 0x43b90000;
  *(undefined4 *)((long)param_1 + 0x484) = uVar22;
  param_1[0x97] = DAT_02a5b068;
  lVar15 = DAT_02a5b060;
  *(undefined4 *)(param_1 + 0x98) = 0x44480000;
  puVar5 = PTR_DAT_0271f768;
  param_1[0x96] = lVar15;
  param_1[0x9b] = *(long *)(puVar5 + 8);
  lVar15 = *(long *)puVar5;
  param_1[0x9c] = 0x900000014;
  *(undefined4 *)(param_1 + 0x9d) = 2;
  *(undefined4 *)(param_1 + 0xbb) = uVar21;
  *(undefined4 *)((long)param_1 + 0x5dc) = 0x1e;
  *(undefined4 *)(param_1 + 0xbc) = 9;
  *(undefined1 *)((long)param_1 + 0x4ec) = 0;
  param_1[0xa3] = 0;
  param_1[0xa1] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa2] = 0;
  param_1[0xa0] = 0;
  param_1[0x9e] = 0;
  param_1[0xac] = 0;
  param_1[0xaa] = 0;
  param_1[0xa8] = 0;
  param_1[0xa6] = 0;
  param_1[0xab] = 0;
  param_1[0xa9] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)((long)param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0x9a] = lVar15;
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xba) = 0x42c80000;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)((long)param_1 + 0x5d4) = 0x41a00000;
  *(undefined1 *)((long)param_1 + 0x5e4) = 0;
  *(undefined8 *)((long)param_1 + 0x5ed) = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0xf;
  *(undefined4 *)((long)param_1 + 0x5fc) = 8;
  param_1[0xbd] = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)((long)param_1 + 0x609) = 0;
  *(undefined8 *)((long)param_1 + 0x604) = 0;
  plVar16 = (long *)param_1[0x74];
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc6] = 0;
  param_1[0xc3] = -0x340d631b7bddd9bb;
  *(undefined4 *)((long)param_1 + 0x624) = 0x428c0000;
  *(undefined4 *)(param_1 + 0xc5) = 0x43110000;
  *(undefined4 *)((long)param_1 + 0x62c) = 0x41200000;
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    if (*(long *)(lVar15 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x60))();
      *(undefined8 *)(lVar15 + 0x58) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = *piVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar16[0x27] = plVar16[0x27] & 0xfffffffffffffffcU | 0x10;
  plVar17 = plVar16 + 0xf;
  (**(code **)(*plVar17 + 0x10))(plVar17);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    piVar12 = (int *)(lVar15 + 0x54);
    do {
      iVar2 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x60) = 0;
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = (long *)param_1[0x74];
  if (plVar16 == (long *)0x0) {
    _DAT_00000138 = _DAT_00000138 & 0xfffffffffffffff3 | 8;
  }
  else {
    lVar15 = plVar16[0xb];
    if (*(long *)(lVar15 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x60))();
      *(undefined8 *)(lVar15 + 0x58) = uVar8;
    }
    piVar12 = (int *)(lVar15 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = *piVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar16[0x27] = plVar16[0x27] & 0xfffffffffffffff3U | 8;
    lVar15 = plVar16[0xb];
    piVar12 = (int *)(lVar15 + 0x54);
    do {
      iVar2 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x60) = 0;
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  (**(code **)(*param_1 + 0x180))(param_1,0);
  param_1[0x83] = param_1[0x97];
  param_1[0x80] = param_1[0x94];
  param_1[0x81] = param_1[0x95];
  param_1[0x82] = param_1[0x96];
  param_1[0x86] = param_1[0x96];
  param_1[0x87] = param_1[0x97];
  param_1[0x84] = param_1[0x94];
  param_1[0x85] = param_1[0x95];
  param_1[0x8b] = param_1[0x83];
  param_1[0x89] = param_1[0x81];
  param_1[0x8a] = param_1[0x82];
  param_1[0x88] = param_1[0x80];
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0x80);
  lVar9 = DAT_02a5b068;
  lVar15 = DAT_02a5b060;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 5) {
    piVar12 = (int *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2];
    piVar12 = (int *)0x0;
    if (uVar11 != 0) {
      puVar1 = (uint *)((long)param_4 + uVar11);
      piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  fVar19 = *(float *)PTR_FloatPi_02715160;
  fVar20 = *(float *)PTR_FloatDegree180_027194f0;
  puVar14 = (ushort *)((long)piVar12 - (long)*piVar12);
  if (*puVar14 < 7) {
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    uVar22 = 0;
    if ((ulong)puVar14[3] != 0) {
      uVar22 = *(undefined4 *)((long)piVar12 + (ulong)puVar14[3]);
    }
    if ((8 < *puVar14) && ((ulong)puVar14[4] != 0)) {
      uVar21 = *(undefined4 *)((long)piVar12 + (ulong)puVar14[4]);
    }
  }
  param_1[0x77] = (ulong)*(uint *)(param_1 + 0x80);
  param_1[0x76] = 0;
  param_1[0x79] = lVar9;
  param_1[0x78] = lVar15;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(float *)((long)param_1 + 0x3d4) = (fVar19 / fVar20) * -15.0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((long)param_1 + 0x3dc) = uVar22;
  puVar5 = PTR_DAT_02710848;
  *(undefined4 *)(param_1 + 0x7c) = uVar21;
  lVar15 = *(long *)(*(long *)puVar5 + 0x60);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar9 = param_1[0x72];
  param_1[0x72] = 0;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  plVar16 = (long *)param_1[1];
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar16;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,800,0x10);
  if (lVar10 == 0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  FUN_006d6c40(lVar10,param_1 + 9,1);
  *(long **)(lVar10 + 8) = plVar16;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 800;
  *(undefined8 *)(lVar10 + 0x20) = 0x10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  FUN_006d1120(lVar10);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (param_1[0x72] != 0) {
    (**(code **)(*(long *)(param_1[0x72] + 0x48) + 0x18))();
    param_1[0x72] = 0;
  }
  param_1[0x72] = lVar10;
  pcVar13 = *(code **)(lVar10 + 0x2a8);
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x2b0) = 0;
    *(undefined8 *)(lVar10 + 0x2b8) = 0;
    *(undefined8 *)(lVar10 + 0x2a0) = 0;
    *(undefined8 *)(lVar10 + 0x2a8) = 0;
    (*pcVar13)(lVar10 + 0x2c0);
  }
  *(long **)(lVar10 + 0x2c0) = param_1;
  *(undefined1 **)(lVar10 + 0x2a0) = &LAB_00e3e3f0;
  *(undefined1 **)(lVar10 + 0x2a8) = &LAB_00e3e480;
  *(undefined1 **)(lVar10 + 0x2b0) = &LAB_00e3e490;
  *(undefined1 **)(lVar10 + 0x2b8) = &LAB_00e3e4a0;
  lVar10 = param_1[0x72];
  lVar18 = *(long *)(lVar15 + 0x128);
  lVar9 = nn::os::GetCurrentThread();
  plVar16 = (long *)(lVar10 + 0x158);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x14c));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e3b490;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e3b490:
  lVar18 = *(long *)(lVar18 + 0x298);
  lVar9 = lVar18;
  if (*(long *)(lVar18 + 0x120) != 0) {
    lVar9 = *(long *)(lVar18 + 0x120);
  }
  if (*(long *)(lVar18 + 0x128) != 0) {
    lVar18 = *(long *)(lVar18 + 0x128);
  }
  FUN_006d15e0(lVar10,lVar9,lVar18);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x14c));
  if (lVar15 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e3b4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  return;
}


