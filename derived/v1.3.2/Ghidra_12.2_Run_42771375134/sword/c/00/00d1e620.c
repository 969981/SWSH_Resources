/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d1e620; name: FUN_00d1e620
 */


bool FUN_00d1e620(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  long local_28;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00d1a020(&local_28);
  }
  puVar3 = (undefined8 *)FUN_00d11ca0(local_28 + 0xf8,param_1 + 0x60);
  uVar4 = *puVar3;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00d1bae0(&local_28,uVar4);
  lVar1 = local_28;
  if (*(long *)(param_1 + 0x90) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00d1a020(&local_28);
  }
  puVar3 = (undefined8 *)FUN_00d11ca0(local_28 + 0xf8,param_1 + 0x60);
  uVar4 = *puVar3;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00d1bc50(&local_28,uVar4);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0xa4) != '\0')) {
    if (local_28 != 0) {
      bVar2 = *(char *)(local_28 + 0xa4) != '\0';
      goto LAB_00d1e720;
    }
    bVar5 = true;
  }
  else {
    bVar2 = false;
    bVar5 = false;
    if (local_28 == 0) goto LAB_00d1e734;
LAB_00d1e720:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    bVar5 = bVar2;
  }
  if (lVar1 == 0) {
    return bVar5;
  }
LAB_00d1e734:
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return bVar5;
}


