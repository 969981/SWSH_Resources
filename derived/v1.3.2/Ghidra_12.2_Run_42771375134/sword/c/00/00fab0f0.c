/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fab0f0; name: FUN_00fab0f0
 */


void FUN_00fab0f0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  local_28 = DAT_02664f18;
  local_38 = DAT_02664f08;
  puStack_30 = PTR_s_speak_02664f10;
  if (*(long *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_01679c20(*(undefined8 *)(param_1 + 0x68));
    plVar2 = *(long **)(param_1 + 0x80);
    if (iVar1 == 4) {
      FUN_006cf0a0(auStack_58,&local_38);
      iVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,auStack_58,0);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (iVar1 == *(int *)(param_1 + 0x1d8)) {
        return;
      }
      plVar2 = *(long **)(param_1 + 0x80);
      FUN_006cf0a0(auStack_58,&local_38);
      (**(code **)(*plVar2 + 400))(plVar2,auStack_58,*(undefined4 *)(param_1 + 0x1d8));
    }
    else {
      FUN_006cf0a0(auStack_58,&local_38);
      (**(code **)(*plVar2 + 400))(plVar2,auStack_58,0);
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  return;
}


