/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8c940; name: FUN_00b8c940
 */


void FUN_00b8c940(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_100 [6];
  undefined1 local_d0;
  undefined1 *local_c0;
  char *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_8a;
  undefined4 local_82;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_76;
  
  FUN_00a5ef50();
  puVar1 = PTR_DAT_0271b1d8 + 0x10;
  param_1[9] = (long)(PTR_DAT_0271b1d8 + 0xae0);
  *param_1 = (long)puVar1;
  FUN_01002fc0(param_1 + 0x408);
  *(undefined4 *)(param_1 + 0x434) = 0;
  param_1[0x443] = 0;
  param_1[0x442] = 0;
  param_1[0x441] = 0;
  param_1[0x440] = 0;
  param_1[0x43f] = 0;
  param_1[0x43e] = 0;
  param_1[0x43d] = 0;
  param_1[0x43c] = 0;
  param_1[0x43b] = 0;
  param_1[0x43a] = 0;
  param_1[0x444] = -0x340d631b7bddd9bb;
  param_1[0x445] = (long)&DAT_01d38550;
  param_1[0x447] = 0;
  param_1[0x446] = 0;
  param_1[0x448] = -0x340d631b7bddd9bb;
  param_1[0x449] = (long)&DAT_01d38550;
  param_1[1099] = 0;
  param_1[0x44a] = 0;
  param_1[0x44c] = -0x340d631b7bddd9bb;
  param_1[0x44d] = (long)&DAT_01d38550;
  param_1[0x44f] = 0;
  param_1[0x44e] = 0;
  *(undefined4 *)(param_1 + 0x450) = 0xffffffff;
  param_1[0x467] = 0;
  param_1[0x466] = 0;
  param_1[0x465] = 0;
  param_1[0x464] = 0;
  param_1[0x457] = 0;
  param_1[0x456] = 0;
  param_1[0x455] = 0;
  param_1[0x454] = 0;
  param_1[0x453] = 0;
  param_1[0x452] = (long)(PTR_DAT_027194a8 + 0x10);
  param_1[0x489] = 0;
  param_1[0x488] = 0;
  param_1[0x487] = 0;
  param_1[0x486] = 0;
  param_1[0x479] = 0;
  param_1[0x478] = 0;
  param_1[0x477] = 0;
  param_1[0x476] = 0;
  param_1[0x475] = 0;
  param_1[0x474] = (long)(PTR_DAT_02715070 + 0x10);
  *(undefined1 *)(param_1 + 999) = 1;
  puVar1 = PTR_DAT_02710860;
  local_8c = 0x1ff;
  local_7c = 0xffff;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (char *)((ulong)local_b8 & 0xffffffffffffff00);
  local_b0 = 0xffffffffffffffff;
  local_78 = 0;
  local_76 = 0x1000100;
  local_82 = 0xffffffff;
  local_8a = 0xffffffffffffffff;
  local_a0 = 0xffffffffffffffff;
  uStack_98 = 0xa000000000335;
  local_90 = 0xffff0000;
  local_a8 = 0x1ffffffff;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_008662a0(lVar3,param_2,&local_c0);
    *(long **)(lVar3 + 8) = param_2;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0xb8;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x38,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_009140a0(lVar2);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar4 = param_1[0x43b];
      param_1[0x43b] = lVar2;
      if (lVar4 != 0) {
        FUN_009140c0(lVar4);
        (**(code **)(*(long *)param_1[0x43c] + 0x18))
                  ((long *)param_1[0x43c],lVar4,param_1[0x43d],param_1[0x43e]);
      }
      param_1[0x43c] = (long)param_2;
      param_1[0x43d] = 0x38;
      param_1[0x43e] = 8;
      local_d0 = 0;
      local_100[0] = lVar3;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x470,0x10);
        if (lVar4 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_008dfab0(lVar4,param_2,0);
        *(long **)(lVar4 + 8) = param_2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x470;
        *(undefined8 *)(lVar4 + 0x20) = 0x10;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        lVar2 = param_1[0x43a];
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
          param_1[0x43a] = 0;
        }
        param_1[0x43a] = lVar4;
        FUN_008dff80(lVar4,local_100);
        FUN_009140f0(param_1[0x43b],param_1[0x43a]);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
        local_8c = 0x1ff;
        local_7c = 0xffff;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (char *)((ulong)local_b8 & 0xffffffffffffff00);
        local_78 = 0;
        local_76 = 0x1000100;
        local_82 = 0xffffffff;
        local_8a = 0xffffffffffffffff;
        local_a0 = 0xffffffffffffffff;
        uStack_98 = 0x700000000033f;
        local_90 = 0xffff0000;
        local_b0 = 0xffffffffffffffff;
        local_a8 = 0x1ffffffff;
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar2 + 0x80) < 0x10) {
          *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
          lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
          if (lVar3 == 0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_008662a0(lVar3,param_2,&local_c0);
          *(long **)(lVar3 + 8) = param_2;
          *(long *)(lVar3 + 0x10) = lVar3;
          *(undefined8 *)(lVar3 + 0x18) = 0xb8;
          *(undefined8 *)(lVar3 + 0x20) = 8;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x38,8);
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar4 + 0x80) < 0x10) {
            *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
            FUN_009140a0(lVar2);
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
            lVar4 = param_1[0x440];
            param_1[0x440] = lVar2;
            if (lVar4 != 0) {
              FUN_009140c0(lVar4);
              (**(code **)(*(long *)param_1[0x441] + 0x18))
                        ((long *)param_1[0x441],lVar4,param_1[0x442],param_1[0x443]);
            }
            param_1[0x441] = (long)param_2;
            param_1[0x442] = 0x38;
            param_1[0x443] = 8;
            local_d0 = 0xc;
            local_100[0] = lVar3;
            lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar2 + 0x80) < 0x10) {
              *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
              lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x470,0x10);
              if (lVar4 == 0) {
                (**(code **)(*param_2 + 0xb8))(param_2);
              }
              FUN_008dfab0(lVar4,param_2,0);
              *(long **)(lVar4 + 8) = param_2;
              *(long *)(lVar4 + 0x10) = lVar4;
              *(undefined8 *)(lVar4 + 0x18) = 0x470;
              *(undefined8 *)(lVar4 + 0x20) = 0x10;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
              if (lVar4 != 0) {
                (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
              }
              if (param_1[0x43f] != 0) {
                (**(code **)(*(long *)(param_1[0x43f] + 0x48) + 0x18))();
                param_1[0x43f] = 0;
              }
              param_1[0x43f] = lVar4;
              FUN_008dff80(lVar4,local_100);
              FUN_009140f0(param_1[0x440],param_1[0x43f]);
              if (lVar3 != 0) {
                (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
              }
              FUN_01001bc0(0x48232cc4d6902eac,param_1 + 0x444);
              local_c0 = &DAT_cc7b5e39ed4396ae;
              local_b8 = "NONE_NONE";
              local_b0 = 9;
              local_a8 = 0;
              FUN_010011e0(&local_c0,param_1 + 0x408);
              if (local_a8 != 0) {
                (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
              }
              *(undefined4 *)((long)param_1 + 0x2186) = 0;
              *(undefined1 *)((long)param_1 + 0x2184) = 0;
              *(undefined4 *)(param_1 + 0x430) = 0;
              *(undefined1 *)((long)param_1 + 0x2194) = 0;
              *(undefined8 *)((long)param_1 + 0x218c) = 0;
              *(undefined2 *)((long)param_1 + 0x21a4) = 4;
              param_1[0x436] = 0x11633c782b9682b6;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


