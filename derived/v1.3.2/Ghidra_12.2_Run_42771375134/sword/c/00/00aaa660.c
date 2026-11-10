/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaa660; name: FUN_00aaa660
 */


void FUN_00aaa660(long param_1,byte param_2)

{
  code *pcVar1;
  long lVar2;
  undefined **local_60;
  byte *pbStack_58;
  long *local_40;
  long local_30;
  byte local_24 [4];
  
  local_24[0] = param_2 & 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_30 = *(long *)(param_1 + 0x4c0);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  pbStack_58 = local_24;
  local_60 = &PTR_LAB_02631998;
  local_40 = (long *)&local_60;
  FUN_00c7a240(lVar2,&local_30,&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar1 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00aaa700;
    pcVar1 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar1)();
LAB_00aaa700:
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


