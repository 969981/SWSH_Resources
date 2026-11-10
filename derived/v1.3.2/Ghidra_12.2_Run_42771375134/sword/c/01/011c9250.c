/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c9250; name: FUN_011c9250
 */


uint FUN_011c9250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = FUN_011cb330(auStack_58,*(undefined8 *)(param_1 + 8));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(long *)(param_1 + 0x60) = lVar4;
  FUN_011c9700(lVar4,param_2);
  puVar1 = PTR_DAT_02710860;
  plVar8 = *(long **)(param_1 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0xb8,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_00866220(lVar5,plVar8,0,0,0);
    *(long **)(lVar5 + 8) = plVar8;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0xb8;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = lVar5;
    plVar8 = *(long **)(param_1 + 8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0xb8,8);
      if (lVar5 == 0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_00866220(lVar5,plVar8,0,0,0);
      *(long **)(lVar5 + 8) = plVar8;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0xb8;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      pcVar7 = *(code **)(param_1 + 0x98);
      *(long *)(param_1 + 0x70) = lVar5;
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        (*pcVar7)(param_1 + 0xb0);
      }
      *(long *)(param_1 + 0xb0) = param_1;
      plVar8 = *(long **)(param_1 + 8);
      *(undefined1 **)(param_1 + 0x90) = &LAB_011cc220;
      *(undefined1 **)(param_1 + 0x98) = &LAB_011cc230;
      *(undefined1 **)(param_1 + 0xa0) = &LAB_011cc240;
      *(undefined1 **)(param_1 + 0xa8) = &LAB_011cc250;
      uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x50,8);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar4 + 0x80) < 0x10) {
        *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        FUN_011cc9b0(uVar6,plVar8);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        lVar4 = *(long *)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = uVar6;
        if (lVar4 != 0) {
          FUN_011cb250(param_1 + 0x128);
          uVar6 = *(undefined8 *)(param_1 + 0x120);
        }
        *(long **)(param_1 + 0x128) = plVar8;
        *(undefined8 *)(param_1 + 0x130) = 0x50;
        *(undefined8 *)(param_1 + 0x138) = 8;
        uVar3 = FUN_011cc9e0(uVar6,param_1 + 0x80);
        plVar8 = *(long **)(param_1 + 8);
        uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x80,8);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar4 + 0x80) < 0x10) {
          *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          local_48 = 0;
          FUN_011da3c0(uVar6,plVar8,&local_48,1);
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          lVar4 = *(long *)(param_1 + 0x148);
          *(undefined8 *)(param_1 + 0x148) = uVar6;
          if (lVar4 != 0) {
            FUN_012b2690(lVar4);
            (**(code **)(**(long **)(param_1 + 0x150) + 0x18))
                      (*(long **)(param_1 + 0x150),lVar4,*(undefined8 *)(param_1 + 0x158),
                       *(undefined8 *)(param_1 + 0x160));
          }
          *(long **)(param_1 + 0x150) = plVar8;
          *(undefined8 *)(param_1 + 0x158) = 0x80;
          plVar8 = *(long **)(param_1 + 8);
          *(undefined8 *)(param_1 + 0x160) = 8;
          uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1a8,8);
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar4 + 0x80) < 0x10) {
            *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
            FUN_011d4d10(uVar6,plVar8);
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
            lVar4 = *(long *)(param_1 + 0x2b0);
            *(undefined8 *)(param_1 + 0x2b0) = uVar6;
            if (lVar4 != 0) {
              FUN_012b25b0(param_1 + 0x2b8);
            }
            *(undefined8 *)(param_1 + 0x2c0) = 0x1a8;
            *(long **)(param_1 + 0x2b8) = plVar8;
            *(undefined8 *)(param_1 + 0x2c8) = 8;
            lVar4 = FUN_011cc260(auStack_50,*(undefined8 *)(param_1 + 8));
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x58) + 0x10))();
            }
            if (*(long *)(param_1 + 0x410) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x410) + 0x58) + 0x18))();
              *(undefined8 *)(param_1 + 0x410) = 0;
            }
            *(long *)(param_1 + 0x410) = lVar4;
            FUN_011d4920(lVar4);
            bVar2 = FUN_00ecee70();
            *(byte *)(param_1 + 0x419) = bVar2 & 1;
            *(undefined1 *)(param_1 + 0x418) = 1;
            return uVar3 & 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


