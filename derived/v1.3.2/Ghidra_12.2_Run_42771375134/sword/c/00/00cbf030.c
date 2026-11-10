/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbf030; name: FUN_00cbf030
 */


void FUN_00cbf030(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_98;
  char *local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  local_68 = 0x2af4b5e51633368e;
  local_60 = "bin/chara/table/chara_model_data_nx64.bin";
  local_58 = 0x29;
  local_50 = 0;
  FUN_008d48d0(&local_98,&local_68);
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,&local_98,0,
               *(undefined8 *)(param_1 + 0x48),param_2);
  if (*(long *)(param_1 + 0x4e) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4e) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4e) = 0;
  }
  *(long *)(param_1 + 0x4e) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x50) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x4c,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_80 != 0) && (local_98 != 0)) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  local_98 = 0;
  local_90 = (char *)0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  puVar1 = PTR_DAT_02710860;
  plVar4 = *(long **)(param_1 + 0x48);
  local_98 = 0x718ab7443318aff1;
  local_90 = "bin/chara/table/orion_dressup_p2_table.bin";
  local_88 = (undefined1 *)0x2a;
  local_80 = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1b0,0x10);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_00c96ec0(lVar3,&local_98);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(long *)(param_1 + 0x90) = lVar3;
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
      lVar3 = *(long *)(param_1 + 0x90);
    }
    FUN_01029270(lVar3,*(undefined8 *)(param_1 + 0x48),param_2);
    plVar4 = *(long **)(param_1 + 0x48);
    local_98 = 0x75bd2ffded089238;
    local_90 = "bin/chara/table/orion_dressup_p1_table.bin";
    local_88 = (undefined1 *)0x2a;
    local_80 = 0;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1b0,0x10);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_00c96ec0(lVar3,&local_98);
      *(long **)(lVar3 + 8) = plVar4;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x1b0;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x92) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x92) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x92) = 0;
      }
      *(long *)(param_1 + 0x92) = lVar3;
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
        lVar3 = *(long *)(param_1 + 0x92);
      }
      FUN_01029270(lVar3,*(undefined8 *)(param_1 + 0x48),param_2);
      lVar2 = FUN_00cbf780(&local_98,*(undefined8 *)(param_1 + 0x48));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x94) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x94) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x94) = 0;
      }
      *(long *)(param_1 + 0x94) = lVar2;
      FUN_01029270(lVar2,*(undefined8 *)(param_1 + 0x48),param_2);
      lVar2 = FUN_00cbf860(&local_98,*(undefined8 *)(param_1 + 0x48));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x96) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x96) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x96) = 0;
      }
      *(long *)(param_1 + 0x96) = lVar2;
      FUN_01029270(lVar2,*(undefined8 *)(param_1 + 0x48),param_2);
      lVar2 = FUN_00cbf940(&local_98,*(undefined8 *)(param_1 + 0x48));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
      *(long *)(param_1 + 0x98) = lVar2;
      FUN_01029270(lVar2,*(undefined8 *)(param_1 + 0x48),param_2);
      lVar2 = FUN_00cbfa20(&local_98,*(undefined8 *)(param_1 + 0x48));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x9a) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x9a) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x9a) = 0;
      }
      *(long *)(param_1 + 0x9a) = lVar2;
      FUN_01029270(lVar2,*(undefined8 *)(param_1 + 0x48),param_2);
      lVar2 = FUN_00cbfb00(&local_98,*(undefined8 *)(param_1 + 0x48));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x9c) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x9c) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x9c) = 0;
      }
      *(long *)(param_1 + 0x9c) = lVar2;
      FUN_01029270(lVar2,*(undefined8 *)(param_1 + 0x48),param_2);
      lVar2 = FUN_00cbfbe0(&local_98,*(undefined8 *)(param_1 + 0x48));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x9e) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x9e) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x9e) = 0;
      }
      *(long *)(param_1 + 0x9e) = lVar2;
      FUN_01029270(lVar2,*(undefined8 *)(param_1 + 0x48),param_2);
      lVar2 = FUN_00cbfcc0(&local_98,*(undefined8 *)(param_1 + 0x48));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      *(long *)(param_1 + 0xa0) = lVar2;
      FUN_00cbffa0(lVar2,*(undefined8 *)(param_1 + 0x48),param_2);
      *param_1 = 3;
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


