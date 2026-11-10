/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb3b30; name: FUN_00cb3b30
 */


void FUN_00cb3b30(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_70;
  long local_68;
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  
  FUN_008d48d0(&local_70,param_2);
  plVar1 = *(long **)(param_1 + 0x138);
  if (plVar1 < *(long **)(param_1 + 0x140)) {
    uVar4 = *(undefined8 *)(param_1 + 0x148);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    lVar3 = local_50;
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *plVar1 = 0;
    plVar1[1] = -0x340d631b7bddd9bb;
    *(undefined4 *)(plVar1 + 5) = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[2] = (long)&DAT_01d38550;
    plVar1[1] = local_68;
    plVar1[2] = (long)local_60;
    plVar1[3] = local_58;
    local_50 = 0;
    plVar1[4] = lVar3;
    *(undefined4 *)(plVar1 + 5) = local_48;
    if (plVar1[3] == 0) {
      lVar3 = local_70;
    }
    else {
      if (*plVar1 != 0) {
        (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
        *plVar1 = 0;
      }
      lVar3 = local_70;
      local_70 = 0;
    }
    *plVar1 = lVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 0x30;
  }
  else {
    FUN_00cb7390(param_1 + 0x130,&local_70);
  }
  if ((local_58 != 0) && (local_70 != 0)) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  local_70 = 0;
  local_68 = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


