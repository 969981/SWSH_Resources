/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f4e30; name: FUN_008f4e30
 */


void FUN_008f4e30(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = *param_2;
  *param_2 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (*param_3 == 0) {
    return;
  }
  *(short *)(param_2 + 5) = (short)*(undefined4 *)(*param_3 + 0x58);
  *(undefined2 *)((long)param_2 + 0x2a) = *(undefined2 *)(*param_3 + 0x68);
  *(byte *)((long)param_2 + 0x2d) = *(byte *)(*param_3 + 0x6f) & 0xf;
  *(undefined1 *)((long)param_2 + 0x2c) = *(undefined1 *)(*param_3 + 0x6e);
  *(undefined1 *)((long)param_2 + 0x2e) = *(undefined1 *)(*param_3 + 0x70);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(*param_3 + 0x5c);
  param_2[8] = *(long *)(*param_3 + 0x80);
  bVar2 = FUN_008eacb0(*param_3);
  *(byte *)(param_2 + 9) = bVar2 & 1;
  *(undefined2 *)((long)param_2 + 0x4a) = *(undefined2 *)(*param_3 + 0x6a);
  *(undefined2 *)((long)param_2 + 0x4c) = *(undefined2 *)(*param_3 + 0x6c);
  plVar7 = *(long **)(param_1 + 0x60);
  lVar3 = *(long *)(*param_3 + 0x88);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar4 = FUN_0077d470(lVar3);
  puVar1 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_0077cea0(lVar6,uVar4);
    *(long **)(lVar6 + 8) = plVar7;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x80;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (param_2[1] != 0) {
      (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
      param_2[1] = 0;
    }
    param_2[1] = lVar6;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    plVar7 = *(long **)(param_1 + 0x60);
    lVar3 = *(long *)(*param_3 + 0x90);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar4 = FUN_0077d470(lVar3);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_0077cea0(lVar6,uVar4);
      *(long **)(lVar6 + 8) = plVar7;
      *(long *)(lVar6 + 0x10) = lVar6;
      *(undefined8 *)(lVar6 + 0x18) = 0x80;
      *(undefined8 *)(lVar6 + 0x20) = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      if (param_2[2] != 0) {
        (**(code **)(*(long *)(param_2[2] + 0x48) + 0x18))();
        param_2[2] = 0;
      }
      param_2[2] = lVar6;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      plVar7 = *(long **)(param_1 + 0x60);
      lVar3 = *(long *)(*param_3 + 0x98);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      uVar4 = FUN_0077d470(lVar3);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar5 + 0x80) < 0x10) {
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
        if (lVar6 == 0) {
          (**(code **)(*plVar7 + 0xb8))(plVar7);
        }
        FUN_0077cea0(lVar6,uVar4);
        *(long **)(lVar6 + 8) = plVar7;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0x80;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        if (param_2[3] != 0) {
          (**(code **)(*(long *)(param_2[3] + 0x48) + 0x18))();
          param_2[3] = 0;
        }
        param_2[3] = lVar6;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
        plVar7 = *(long **)(param_1 + 0x60);
        lVar3 = *(long *)(*param_3 + 0xa0);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        uVar4 = FUN_0077d470(lVar3);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar5 + 0x80) < 0x10) {
          *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
          if (lVar6 == 0) {
            (**(code **)(*plVar7 + 0xb8))(plVar7);
          }
          FUN_0077cea0(lVar6,uVar4);
          *(long **)(lVar6 + 8) = plVar7;
          *(long *)(lVar6 + 0x10) = lVar6;
          *(undefined8 *)(lVar6 + 0x18) = 0x80;
          *(undefined8 *)(lVar6 + 0x20) = 8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          if (param_2[4] != 0) {
            (**(code **)(*(long *)(param_2[4] + 0x48) + 0x18))();
            param_2[4] = 0;
          }
          param_2[4] = lVar6;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
          }
          FUN_008eaca0(*param_3);
          FUN_016230d0(&local_80);
          param_2[10] = local_80;
          param_2[0xb] = local_78;
          param_2[0xc] = local_70;
          if (param_2[0xd] != 0) {
            (**(code **)(*(long *)(param_2[0xd] + 0x48) + 0x18))();
            param_2[0xd] = 0;
          }
          param_2[0xd] = local_68;
          *(undefined2 *)((long)param_2 + 0x34) = *(undefined2 *)(*param_3 + 0x72);
          *(undefined2 *)((long)param_2 + 0x36) = *(undefined2 *)(*param_3 + 0x74);
          *(undefined2 *)(param_2 + 7) = *(undefined2 *)(*param_3 + 0x76);
          *(undefined2 *)((long)param_2 + 0x3a) = *(undefined2 *)(*param_3 + 0x78);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


