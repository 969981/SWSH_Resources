/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f6100; name: FUN_011f6100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f6100(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_a0;
  char acStack_98 [8];
  char local_90 [8];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  puVar4 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar4 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_02725d28;
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
  }
  param_1[1] = lVar5;
  *puVar1 = 1;
  puVar1 = PTR_DAT_02725d30 + 0x40;
  *param_1 = (long)(PTR_DAT_02725d30 + 0x10);
  param_1[9] = (long)puVar1;
  lVar5 = FUN_011f6e10(&local_a0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[10] = lVar5;
  param_1[0xb] = 0;
  plVar9 = (long *)param_1[1];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,0xc0,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    FUN_007c5030(lVar6,&DAT_02168840);
    *(long **)(lVar6 + 8) = plVar9;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0xc0;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    param_1[0xc] = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
    }
    param_1[0xd] = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_007c17c0(auStack_48,&DAT_02168848,&DAT_02168849,&DAT_0216884a,&DAT_0216884b);
    local_a0 = DAT_02168850;
    acStack_98[0] = s_BeaconCommunication_02168858[0];
    acStack_98[1] = s_BeaconCommunication_02168858[1];
    acStack_98[2] = s_BeaconCommunication_02168858[2];
    acStack_98[3] = s_BeaconCommunication_02168858[3];
    acStack_98[4] = s_BeaconCommunication_02168858[4];
    acStack_98[5] = s_BeaconCommunication_02168858[5];
    acStack_98[6] = s_BeaconCommunication_02168858[6];
    acStack_98[7] = s_BeaconCommunication_02168858[7];
    local_80 = DAT_02168870;
    uStack_78 = DAT_02168878;
    local_90[0] = s_BeaconCommunication_02168858[8];
    local_90[1] = s_BeaconCommunication_02168858[9];
    local_90[2] = s_BeaconCommunication_02168858[10];
    local_90[3] = s_BeaconCommunication_02168858[0xb];
    local_90[4] = s_BeaconCommunication_02168858[0xc];
    local_90[5] = s_BeaconCommunication_02168858[0xd];
    local_90[6] = s_BeaconCommunication_02168858[0xe];
    local_90[7] = s_BeaconCommunication_02168858[0xf];
    uStack_88 = ram0x02168868;
    local_60 = DAT_02168890;
    uStack_58 = DAT_02168898;
    local_70 = DAT_02168880;
    uStack_68 = DAT_02168888;
    plVar9 = (long *)param_1[1];
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,0x1a8,8);
      if (lVar6 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_007c2560(lVar6,auStack_48,&local_a0);
      *(long **)(lVar6 + 8) = plVar9;
      *(long *)(lVar6 + 0x10) = lVar6;
      *(undefined8 *)(lVar6 + 0x18) = 0x1a8;
      *(undefined8 *)(lVar6 + 0x20) = 8;
      puVar4 = PTR_DAT_02716b80;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      puVar7 = *(undefined8 **)puVar4;
      *(long *)puVar4 = lVar6;
      if (puVar7 != (undefined8 *)0x0) {
        plVar9 = (long *)puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar10 = puVar7[4];
        (**(code **)*puVar7)();
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar2,uVar3,uVar10);
        lVar6 = *(long *)puVar4;
      }
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar5 = lVar6 + 0x48;
      }
      FUN_006cef90(lVar5);
      FUN_011f6460(param_1);
      if (*(long *)puVar4 != 0) {
        FUN_007c2db0(*(long *)puVar4,param_1 + 0xc);
      }
      lVar5 = *(long *)PTR_DAT_027104b0;
      if (lVar5 != 0) {
        lVar6 = param_1[0xc];
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar8 = *(long *)(lVar5 + 0x1f0);
        *(long *)(lVar5 + 0x1f0) = lVar6;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        lVar5 = *(long *)(lVar5 + 0x58);
        if (lVar5 != 0) {
          lVar6 = param_1[0xc];
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          lVar8 = *(long *)(lVar5 + 0x430);
          *(long *)(lVar5 + 0x430) = lVar6;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


