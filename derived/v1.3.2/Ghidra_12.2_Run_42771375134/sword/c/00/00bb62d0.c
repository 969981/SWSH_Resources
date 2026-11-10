/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb62d0; name: FUN_00bb62d0
 */


void FUN_00bb62d0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_40 [24];
  long local_28;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar1 = FUN_016b8190();
  uVar4 = (uint)((ulong)uVar1 >> 0x20);
  if (uVar4 < 2) {
    if (uVar4 == 0) goto LAB_00bb6314;
  }
  else if (((int)uVar1 == 0) && ((int)(uVar4 - 2) < 6)) {
LAB_00bb6314:
    if (*(int *)(param_1 + 0x68c) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x618) != 2) {
      return;
    }
    uVar2 = FUN_00bbadc0(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar3 = 3;
    goto LAB_00bb6384;
  }
  if (*(int *)(param_1 + 0x68c) != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x618) == 2) && (*(char *)(param_1 + 0x620) != '\0')) {
    return;
  }
  uVar2 = FUN_00bba420(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar3 = 2;
LAB_00bb6384:
  *(undefined4 *)(param_1 + 0x608) = uVar3;
  FUN_006cf0a0(auStack_40,&DAT_02637c78);
  FUN_016d3620(auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  FUN_016d20d0();
  return;
}


