/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01170550; name: FUN_01170550
 */


undefined8 FUN_01170550(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_60;
  long local_58;
  
  if (param_2 % 10 - 1 < 2) {
    return 0;
  }
  lVar1 = *(long *)PTR_DAT_027104b0;
  if (lVar1 != 0) {
    if (param_1 == 0) {
      local_60 = 0;
      local_58 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x58);
      if (lVar3 == 0) {
        local_58 = param_1 + 0x78;
        local_60 = 0;
      }
      else {
        plVar2 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        local_60 = lVar3;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        local_58 = param_1 + 0x78;
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    FUN_007b58c0(lVar1,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  plVar2 = *(long **)(param_1 + 0x80);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x170,0x10);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e1890(lVar1);
}


