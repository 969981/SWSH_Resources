/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ea9f0; name: FUN_014ea9f0
 */


void FUN_014ea9f0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_DAT_02710860;
  if (param_2 == 0) {
    return;
  }
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x60,8);
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    FUN_011f5930(lVar3,param_1);
    *(long **)(lVar3 + 8) = param_1;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x60;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = FUN_008ea4d0(auStack_58,param_1);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_01524b60(lVar4,lVar2);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x80,8);
      if (lVar6 == 0) {
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      FUN_0077d050(lVar6,0xd);
      *(long **)(lVar6 + 8) = param_1;
      *(long *)(lVar6 + 0x10) = lVar6;
      *(undefined8 *)(lVar6 + 0x18) = 0x80;
      *(undefined8 *)(lVar6 + 0x20) = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar6 == 0) {
        FUN_0077d520(0,param_2 + 0x3c);
        FUN_01524b70(lVar4,0);
        FUN_011f5e20(lVar3,lVar4);
        FUN_01524ba0(lVar4,param_2 + 0x3c);
      }
      else {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0077d520(lVar6,param_2 + 0x3c);
        FUN_01524b70(lVar4,lVar6);
        FUN_011f5e20(lVar3,lVar4);
        FUN_01524ba0(lVar4,param_2 + 0x3c);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x90,8);
        if (lVar4 == 0) {
          (**(code **)(*param_1 + 0xb8))(param_1);
        }
        FUN_00883c20(lVar4,param_1);
        *(long **)(lVar4 + 8) = param_1;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x90;
        *(undefined8 *)(lVar4 + 0x20) = 8;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        if (lVar4 == 0) {
          FUN_00885160(0,param_2 + 0x56);
          FUN_011f5c20(lVar3,0);
          FUN_00884e90(0,param_2 + 0x56);
        }
        else {
          plVar7 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_00885160(lVar4,param_2 + 0x56);
          FUN_011f5c20(lVar3,lVar4);
          FUN_00884e90(lVar4,param_2 + 0x56);
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        if (lVar3 == 0) {
          return;
        }
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


