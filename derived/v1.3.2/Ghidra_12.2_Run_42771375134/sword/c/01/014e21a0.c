/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e21a0; name: FUN_014e21a0
 */


void FUN_014e21a0(long param_1)

{
  ulong uVar1;
  undefined4 local_14;
  
  if (((*(long *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x88) != '\0')) &&
     ((uVar1 = FUN_010384a0(), (uVar1 & 1) != 0 ||
      (uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0x28)), (uVar1 & 1) != 0)))) {
    *(undefined1 *)(param_1 + 0x210) = 1;
    if (*(int *)(param_1 + 0x8c) == 1) {
      local_14 = FUN_010386e0(*(undefined8 *)(param_1 + 0x28));
      (**(code **)(param_1 + 400))(param_1 + 0x1b0,&local_14);
    }
    else if (*(int *)(param_1 + 0x8c) == 0) {
      (**(code **)(param_1 + 0x90))(param_1 + 0xb0);
    }
    (**(code **)(param_1 + 0x110))(param_1 + 0x130);
    *(undefined1 *)(param_1 + 0x210) = 0;
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}


