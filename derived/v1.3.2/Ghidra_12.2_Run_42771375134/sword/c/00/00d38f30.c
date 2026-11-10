/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d38f30; name: FUN_00d38f30
 */


void FUN_00d38f30(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long local_30;
  long local_28;
  
  FUN_01679c40(*param_2,0,0);
  if (*(char *)(param_1 + 900) == '\0') {
    if (*(char *)(param_1 + 0x380) != '\0') {
      cVar1 = *(char *)(param_1 + 0x381);
      goto joined_r0x00d38f80;
    }
    FUN_01679b10(*param_2);
  }
  *(undefined1 *)(param_1 + 0x380) = 1;
  cVar1 = *(char *)(param_1 + 0x381);
joined_r0x00d38f80:
  if (cVar1 != '\0') {
    if (*(long *)(param_1 + 0x90) == 0) {
      local_28 = 0;
    }
    else {
      FUN_00d1a020(&local_28);
    }
    lVar2 = local_28;
    local_60 = 0x131714486cde11ac;
    local_58 = "message_wait";
    local_50 = 0xc;
    FUN_006cf0a0(auStack_48,&local_60);
    FUN_00d67ac0(lVar2,auStack_48);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  return;
}


