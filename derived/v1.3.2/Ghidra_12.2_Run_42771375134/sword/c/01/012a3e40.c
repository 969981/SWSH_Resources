/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a3e40; name: FUN_012a3e40
 */


void FUN_012a3e40(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_48 [8];
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar4 = PTR_DAT_02727280;
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
  }
  param_1[1] = (long)plVar8;
  *puVar4 = 1;
  puVar4 = PTR_DAT_02727288;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0x40);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x38] = (long)plVar8;
  param_1[0x39] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0xf8,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_012a6f70(lVar6,0x32);
    *(long **)(lVar6 + 8) = plVar8;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0xf8;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    param_1[0x66] = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
    }
    plVar8 = (long *)param_1[1];
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    param_1[0x67] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = (long)plVar8;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x68,8);
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_012a6430(lVar6,param_1 + 0x66);
      *(long **)(lVar6 + 8) = plVar8;
      *(long *)(lVar6 + 0x10) = lVar6;
      *(undefined8 *)(lVar6 + 0x18) = 0x68;
      *(undefined8 *)(lVar6 + 0x20) = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      param_1[0x6d] = lVar6;
      lVar5 = FUN_012a5ae0(auStack_48,param_1[1]);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      param_1[0x6e] = lVar5;
      plVar8 = (long *)param_1[1];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (*(ulong *)(lVar5 + 0x80) < 0x10) {
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,1000,8);
        if (lVar6 == 0) {
          (**(code **)(*plVar8 + 0xb8))(plVar8);
        }
        FUN_012a8180(lVar6,5);
        *(long **)(lVar6 + 8) = plVar8;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 1000;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        puVar3 = PTR_DAT_02727290;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        puVar7 = *(undefined8 **)puVar3;
        *(long *)puVar3 = lVar6;
        if (puVar7 != (undefined8 *)0x0) {
          plVar8 = (long *)puVar7[1];
          uVar1 = puVar7[2];
          uVar2 = puVar7[3];
          uVar9 = puVar7[4];
          (**(code **)*puVar7)();
          (**(code **)(*plVar8 + 0x18))(plVar8,uVar1,uVar2,uVar9);
          lVar6 = *(long *)puVar3;
        }
        lVar5 = 0;
        if (lVar6 != 0) {
          lVar5 = lVar6 + 0x48;
        }
        FUN_006cef90(lVar5);
        FUN_010a0810(param_1 + 0x35,100);
        FUN_010a0810(param_1 + 0x67,5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


