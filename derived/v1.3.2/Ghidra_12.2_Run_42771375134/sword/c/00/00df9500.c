/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df9500; name: FUN_00df9500
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00df9500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  FUN_00a658b0(&local_30,param_1 + 0x50);
  if (local_30 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(local_30 + 0x668);
  local_28 = *(long *)(local_30 + 0x670);
  if (local_28 == -0x340d631b7bddd9bb) {
    local_28 = *(long *)(local_30 + 0x678);
  }
  else {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
    local_28 = *(long *)(local_30 + 0x678);
  }
  if (local_28 == -0x340d631b7bddd9bb) {
    local_28 = *(long *)(local_30 + 0x680);
  }
  else {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
    local_28 = *(long *)(local_30 + 0x680);
  }
  if (local_28 == -0x340d631b7bddd9bb) {
    local_28 = *(long *)(local_30 + 0x688);
  }
  else {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
    local_28 = *(long *)(local_30 + 0x688);
  }
  if (local_28 == -0x340d631b7bddd9bb) {
    local_28 = *(long *)(local_30 + 0x690);
  }
  else {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
    local_28 = *(long *)(local_30 + 0x690);
  }
  if (local_28 == -0x340d631b7bddd9bb) {
    local_28 = *(long *)(local_30 + 0x698);
  }
  else {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
    local_28 = *(long *)(local_30 + 0x698);
  }
  if (local_28 == -0x340d631b7bddd9bb) {
    local_28 = *(long *)(local_30 + 0x6a0);
  }
  else {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
    local_28 = *(long *)(local_30 + 0x6a0);
  }
  if (local_28 == -0x340d631b7bddd9bb) {
    local_28 = *(long *)(local_30 + 0x6a8);
  }
  else {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
    local_28 = *(long *)(local_30 + 0x6a8);
  }
  if (local_28 != -0x340d631b7bddd9bb) {
    FUN_00e01410(*(undefined8 *)(param_1 + 0xa0),&local_28);
  }
  FUN_00dfaab0(param_1,1);
  FUN_00e8fec0(local_30);
  uVar2 = 0;
  uVar3 = 0;
  if ((*(long *)(local_30 + 0x3a8) != 0) && (*(int *)(*(long *)(local_30 + 0x3a8) + 0x54) != 0)) {
    FUN_00deff50(&local_28,local_30 + 0x3a8);
    uVar3 = *(undefined8 *)(local_28 + 0xb8);
    uVar2 = *(undefined8 *)(local_28 + 0xb0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  uVar1 = *(undefined8 *)(local_30 + 0x3c0);
  *(ulong *)(param_1 + 0xb8) =
       CONCAT44((float)((ulong)uVar3 >> 0x20) +
                (float)((ulong)*(undefined8 *)(local_30 + 0x3c8) >> 0x20),
                (float)uVar3 + (float)*(undefined8 *)(local_30 + 0x3c8));
  *(ulong *)(param_1 + 0xb0) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar1 >> 0x20),
                (float)uVar2 + (float)uVar1);
  FUN_00dfb690(param_1,1);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


