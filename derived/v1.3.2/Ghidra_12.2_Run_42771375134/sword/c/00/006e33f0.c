/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e33f0; name: FUN_006e33f0
 */


void FUN_006e33f0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  ulong local_48;
  
  if (*(char *)(param_2 + 2) == '\0') {
    DAT_029ef6e8 = *(undefined8 *)(param_1 + 8);
    nn::fs::SetAllocator
              ((_func_void_ptr_ulong *)PTR_LAB_02715540,
               (_func_void_void_ptr_ulong *)PTR_LAB_02715548);
  }
  nn::fs::QueryMountRomCacheSize(&local_48);
  uVar2 = local_48;
  plVar6 = *(long **)(param_1 + 8);
  pvVar3 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,local_48,8);
  lVar5 = *(long *)(param_1 + 0x50);
  *(void **)(param_1 + 0x50) = pvVar3;
  if (lVar5 != 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),lVar5,*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
    pvVar3 = *(void **)(param_1 + 0x50);
  }
  *(long **)(param_1 + 0x58) = plVar6;
  *(ulong *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = 8;
  nn::fs::MountRom("data",pvVar3,local_48);
  puVar1 = PTR_DAT_02710860;
  plVar6 = *(long **)(param_1 + 8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x390,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_006e5f80(lVar4,*param_2);
    *(long **)(lVar4 + 8) = plVar6;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x390;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    *(long *)(param_1 + 0x138) = lVar4;
    FUN_006d0560(lVar4,"FileManager",2,0x10);
    plVar6 = *(long **)(param_1 + 8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x390,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_006e5f80(lVar4,*param_2);
      *(long **)(lVar4 + 8) = plVar6;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x390;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x140) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      *(long *)(param_1 + 0x140) = lVar4;
      FUN_006d0560(lVar4,"FileManagerParallel",1,0x10);
      FUN_006e3720(local_78,"system_resource/");
      FUN_006e4c50(PTR_DAT_02710908,local_78);
      if ((local_60 != 0) && (local_78[0] != 0)) {
        (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
      }
      local_78[0] = 0;
      local_78[1] = 0xcbf29ce484222645;
      local_68 = &DAT_01d38550;
      local_60 = 0;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      FUN_006e3850(param_1);
      *(undefined8 *)(param_1 + 0x16c) = 0;
      *(undefined8 *)(param_1 + 0x164) = 0;
      *(undefined8 *)(param_1 + 0x15c) = 0;
      *(undefined8 *)(param_1 + 0x14c) = 0;
      *(undefined8 *)(param_1 + 0x154) = 0;
      *(undefined1 *)(param_1 + 0x148) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


