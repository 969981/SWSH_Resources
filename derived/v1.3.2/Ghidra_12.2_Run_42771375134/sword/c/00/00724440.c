/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00724440; name: FUN_00724440
 */


void FUN_00724440(long *param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long local_80 [3];
  long local_68;
  
  FUN_006dae20(param_1,5);
  puVar5 = PTR_DAT_02715b20;
  *param_1 = (long)(PTR_DAT_02715b20 + 0x10);
  param_1[9] = (long)(puVar5 + 0xa8);
  param_1[10] = (long)(puVar5 + 0x118);
  param_1[0x20] = (long)(PTR_DAT_02715af8 + 0x10);
  lVar8 = *(long *)(param_2 + 8);
  param_1[0x21] = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x26);
    lVar8 = *(long *)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    lVar11 = *(long *)(param_2 + 0x28);
    param_1[0x24] = *(long *)(param_2 + 0x20);
    param_1[0x25] = lVar11;
    param_1[0x22] = lVar8;
    param_1[0x23] = lVar9;
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x36);
    lVar8 = *(long *)(param_2 + 0x90);
    lVar9 = *(long *)(param_2 + 0x98);
    lVar11 = *(long *)(param_2 + 0xa8);
    param_1[0x34] = *(long *)(param_2 + 0xa0);
    param_1[0x35] = lVar11;
    param_1[0x32] = lVar8;
    param_1[0x33] = lVar9;
  }
  param_1[0x20] = (long)(PTR_DAT_02715b00 + 0x10);
  FUN_0072bc50(param_1 + 0x42,param_2,param_1[1]);
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  puVar5 = PTR_DAT_02710860;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0x70] = lVar8;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0x76] = lVar8;
  param_1[0x77] = 0;
  puVar6 = PTR_DAT_027155e0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7a] = (long)(puVar6 + 0x10);
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x8c] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0x98] = -0x4080000000000000;
  param_1[0x91] = lVar8;
  param_1[0x92] = 0;
  plVar15 = (long *)param_1[1];
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x99] = 0xffffffff;
  param_1[0x9a] = 0xffffffff;
  param_1[0x9b] = 0xffffffff;
  param_1[0x9c] = 0xffffffff;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar15 + 0x10))(plVar15,0x220,0x10);
    if (lVar9 == 0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    FUN_00722610(lVar9,param_1 + 0x20);
    *(long **)(lVar9 + 8) = plVar15;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x220;
    *(undefined8 *)(lVar9 + 0x20) = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar8 = param_1[0x6a];
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      param_1[0x6a] = 0;
    }
    param_1[0x6a] = lVar9;
    plVar15 = (long *)param_1[1];
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar9 = (**(code **)(*plVar15 + 0x10))(plVar15,0x1d0,0x10);
      if (lVar9 == 0) {
        (**(code **)(*plVar15 + 0xb8))(plVar15);
      }
      FUN_0072dec0(lVar9,param_1 + 0x20);
      *(long **)(lVar9 + 8) = plVar15;
      *(long *)(lVar9 + 0x10) = lVar9;
      *(undefined8 *)(lVar9 + 0x18) = 0x1d0;
      *(undefined8 *)(lVar9 + 0x20) = 0x10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      if (param_1[0x6c] != 0) {
        (**(code **)(*(long *)(param_1[0x6c] + 0x48) + 0x18))();
        param_1[0x6c] = 0;
      }
      param_1[0x6c] = lVar9;
      if (param_3 != 0) {
        FUN_00724a70(param_1,param_3);
      }
      local_80[0] = 8;
      FUN_00725f20(param_1,local_80);
      FUN_00724ec0(param_1);
      lVar8 = param_1[0x65];
      lVar9 = param_1[100];
      if (lVar8 - lVar9 != 0) {
        uVar14 = 0;
        do {
          FUN_006cf0a0(local_80,&DAT_0260b880);
          lVar11 = *(long *)(param_1[0x43] + 0x290) + uVar14 * 0x4c0;
          plVar15 = *(long **)(lVar11 + 0xa8);
          plVar2 = *(long **)(lVar11 + 0xb0);
          plVar13 = plVar15;
          if (plVar15 == plVar2) {
            plVar12 = plVar2;
          }
          else {
            plVar12 = plVar15;
            if (*plVar15 != local_80[0]) {
              do {
                plVar12 = plVar12 + 4;
                if (plVar2 == plVar12) {
                  plVar12 = plVar2;
                  plVar13 = plVar2;
                  goto LAB_0072489c;
                }
              } while (*plVar12 != local_80[0]);
              plVar13 = plVar12;
            }
          }
LAB_0072489c:
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (plVar12 != plVar2 && -1 < (int)((ulong)((long)plVar13 - (long)plVar15) >> 5))
          goto LAB_0072490c;
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulong)((lVar8 - lVar9 >> 3) * -0x70a3d70a3d70a3d7));
      }
      pcVar10 = (code *)param_1[0x7d];
      goto joined_r0x00724928;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0072490c:
  do {
    bVar7 = DAT_029f32d8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x29f32d8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_029f32d8 = DAT_029f32d8 + 1;
    }
  } while (cVar3 != '\0');
  *(float *)((long)param_1 + 0x4c4) = (float)bVar7;
  pcVar10 = (code *)param_1[0x7d];
joined_r0x00724928:
  if (pcVar10 != (code *)0x0) {
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    (*pcVar10)(param_1 + 0x80);
  }
  param_1[0x80] = (long)param_1;
  param_1[0x7c] = (long)&LAB_007280d0;
  param_1[0x7d] = (long)&LAB_00728110;
  param_1[0x7e] = (long)&LAB_00728120;
  param_1[0x7f] = (long)&LAB_00728130;
  FUN_006eccd0(*(undefined8 *)(*(long *)PTR_DAT_02710910 + 0x85b0),param_1 + 0x7a);
  lVar9 = param_1[0x21];
  plVar15 = *(long **)(lVar9 + 0x2c0);
  lVar8 = *(long *)(lVar9 + 0x2c8) - (long)plVar15;
  if (lVar8 != 0) {
    uVar14 = 0;
    puVar1 = (undefined4 *)*plVar15;
    lVar11 = plVar15[1] - (long)puVar1;
    while( true ) {
      if (lVar11 != 0) {
        FUN_0072e410(param_1[0x6c],*puVar1,1,2);
        if (1 < (ulong)(lVar11 >> 3)) {
          lVar16 = 8;
          uVar17 = 1;
          do {
            FUN_0072e410(param_1[0x6c],*(undefined4 *)(*plVar15 + lVar16),0,2);
            uVar17 = uVar17 + 1;
            lVar16 = lVar16 + 8;
          } while (uVar17 < (ulong)(lVar11 >> 3));
        }
      }
      FUN_0072e530(param_1[0x6c],uVar14 & 0xffffffff,0);
      uVar14 = uVar14 + 1;
      if ((ulong)((lVar8 >> 3) * 0x6db6db6db6db6db7) <= uVar14) break;
      plVar15 = (long *)(*(long *)(lVar9 + 0x2c0) + uVar14 * 0x38);
      puVar1 = (undefined4 *)*plVar15;
      lVar11 = plVar15[1] - (long)puVar1;
    }
  }
  return;
}


