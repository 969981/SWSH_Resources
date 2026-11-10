/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006de730; name: FUN_006de730
 */


void FUN_006de730(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long local_60;
  undefined1 local_58;
  
  *param_1 = (long)(PTR_DAT_027154b0 + 0x10);
  FUN_006ceee0(param_1 + 1,0);
  plVar12 = param_1 + 0x14;
  *plVar12 = (long)(PTR_DAT_02710528 + 0x10);
  lVar7 = FUN_007606c0();
  lVar8 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar7 + 0x10);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 4));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_006de7d8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_006de7d8:
  puVar1 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar12;
  *(long *)(puVar1 + 0x800) = *(long *)(puVar1 + 0x800) + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
  param_1[0x1c] = 0;
  puVar1 = PTR_DAT_027154b8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  puVar6 = PTR_DAT_02715188;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = (long)(puVar1 + 0x10);
  param_1[0x15] = 0;
  *(long **)puVar6 = plVar12;
  param_1[0x1d] = *param_2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar7 = param_2[2];
  lVar8 = param_2[3];
  param_1[0x24] = 0;
  param_1[0x25] = (long)&DAT_01fca056;
  param_1[0x26] = 0;
  param_1[0x27] = (long)&DAT_01fca056;
  param_1[0x28] = (long)(param_1 + 0x23);
  puVar1 = PTR_DAT_027154c0 + 0x10;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x14a) = 0;
  param_1[0x22] = lVar8 + lVar7;
  param_1[0x23] = (long)puVar1;
  *(char *)((long)param_1 + 0x14b) = (char)param_2[6];
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  FUN_006ceef0(param_1 + 1);
  FUN_006d0870(*(undefined4 *)((long)param_2 + 0x34),param_2[7]);
  lVar8 = *(long *)puVar6;
  plVar9 = (long *)FUN_0075eca0();
  *(long **)(lVar8 + 0x10) = plVar9;
  *(long *)(lVar8 + 0x20) = param_2[1];
  lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,param_2[1],8);
  *(long *)(lVar8 + 0x18) = lVar7;
  if (lVar7 == 0) {
    (**(code **)(**(long **)(lVar8 + 0x10) + 0xb8))();
    lVar7 = *(long *)(lVar8 + 0x18);
  }
  FUN_00760770(lVar7,lVar7 + 0xb8,param_2[1] + -0xb8,0);
  *(long *)(lVar8 + 8) = lVar7;
  lVar8 = *(long *)puVar6;
  plVar9 = (long *)FUN_0075eca0();
  *(long **)(lVar8 + 0x30) = plVar9;
  *(long *)(lVar8 + 0x40) = param_2[4];
  lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,param_2[4],8);
  *(long *)(lVar8 + 0x38) = lVar7;
  if (lVar7 == 0) {
    (**(code **)(**(long **)(lVar8 + 0x30) + 0xb8))();
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  FUN_00760770(lVar7,lVar7 + 0xb8,param_2[4] + -0xb8,0);
  *(long *)(lVar8 + 0x28) = lVar7;
  local_58 = 1;
  local_60 = param_2[5];
  FUN_006d37c0(&local_60);
  lVar7 = FUN_006df5c0(&local_60,param_1[0x1d]);
  puVar1 = PTR_DAT_027153d8;
  puVar10 = *(undefined8 **)PTR_DAT_027153d8;
  *(long *)PTR_DAT_027153d8 = lVar7;
  if (puVar10 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar10[1];
    uVar11 = puVar10[4];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*plVar9 + 0x18))(plVar9,uVar2,uVar3,uVar11);
    lVar7 = *(long *)puVar1;
  }
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = lVar7 + 0x48;
  }
  FUN_006cef90(lVar8);
  if ((char)param_2[6] != '\0') {
    nn::hid::InitializeNpad();
    local_60 = 0x2000000000;
    nn::hid::SetSupportedNpadIdType((uint *)&local_60,2);
    nn::hid::SetSupportedNpadStyleSet(7);
  }
  lVar7 = FUN_006df6a0(&local_60,param_1[0x1d]);
  puVar1 = PTR_DAT_027153c0;
  puVar10 = *(undefined8 **)PTR_DAT_027153c0;
  *(long *)PTR_DAT_027153c0 = lVar7;
  if (puVar10 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar10[1];
    uVar11 = puVar10[4];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*plVar9 + 0x18))(plVar9,uVar2,uVar3,uVar11);
    lVar7 = *(long *)puVar1;
  }
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = lVar7 + 0x48;
  }
  FUN_006cef90(lVar8);
  lVar7 = FUN_006df780(&local_60,param_1[0x1d]);
  puVar1 = PTR_DAT_02715490;
  puVar10 = *(undefined8 **)PTR_DAT_02715490;
  *(long *)PTR_DAT_02715490 = lVar7;
  if (puVar10 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar10[1];
    uVar11 = puVar10[4];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    (**(code **)*puVar10)(puVar10);
    (**(code **)(*plVar9 + 0x18))(plVar9,uVar2,uVar3,uVar11);
    lVar7 = *(long *)puVar1;
  }
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = lVar7 + 0x48;
  }
  FUN_006cef90(lVar8);
  return;
}


