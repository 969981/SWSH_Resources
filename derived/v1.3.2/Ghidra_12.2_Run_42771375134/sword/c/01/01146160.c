/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01146160; name: FUN_01146160
 */


void FUN_01146160(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_DAT_02710860;
  plVar7 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0xd0,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_0117aea0(lVar5,*(undefined1 *)(param_1 + 0x1a2));
    *(long **)(lVar5 + 0x10) = plVar7;
    *(long *)(lVar5 + 0x18) = lVar5;
    *(undefined8 *)(lVar5 + 0x20) = 0xd0;
    *(undefined8 *)(lVar5 + 0x28) = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x50) + 0x10))();
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x50) + 0x18))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(long *)(param_1 + 0x90) = lVar5;
    lVar4 = *(long *)(lVar5 + 0x60);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    *(long *)(param_1 + 0x100) = lVar4;
    lVar4 = *(long *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x98) = 3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lVar4;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    bVar2 = FUN_009fed30(lVar4,5);
    *(byte *)(param_1 + 0x108) = bVar2 & 1;
    uVar3 = FUN_009fe1a0(lVar4,9);
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      plVar6 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x90,8);
      if (plVar6 == (long *)0x0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_00883c20(plVar6,plVar7);
      plVar6[1] = (long)plVar7;
      plVar6[2] = (long)plVar6;
      plVar6[3] = 0x90;
      plVar6[4] = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (plVar6 != (long *)0x0) {
        (**(code **)(plVar6[9] + 0x10))();
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      *(long **)(param_1 + 0xb8) = plVar6;
      (**(code **)(*plVar6 + 0x68))(plVar6,*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x418));
      lVar5 = FUN_008ea4d0(auStack_48,plVar7);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      *(long *)(param_1 + 0xc0) = lVar5;
      FUN_01524b60(lVar5,*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x9e0));
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar5 + 0x80) < 0x10) {
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        plVar6 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x90,8);
        if (plVar6 == (long *)0x0) {
          (**(code **)(*plVar7 + 0xb8))(plVar7);
        }
        FUN_00883c20(plVar6,plVar7);
        plVar6[1] = (long)plVar7;
        plVar6[2] = (long)plVar6;
        plVar6[3] = 0x90;
        plVar6[4] = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (plVar6 != (long *)0x0) {
          (**(code **)(plVar6[9] + 0x10))();
        }
        if (*(long *)(param_1 + 0xd0) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xd0) = 0;
        }
        *(long **)(param_1 + 0xd0) = plVar6;
        (**(code **)(*plVar6 + 0x68))(plVar6,*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x420));
        lVar5 = FUN_008ea4d0(auStack_48,plVar7);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0xd8) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
        *(long *)(param_1 + 0xd8) = lVar5;
        FUN_01524b60(lVar5,*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x9e8));
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


