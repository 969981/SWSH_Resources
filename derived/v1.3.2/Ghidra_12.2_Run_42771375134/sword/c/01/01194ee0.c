/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01194ee0; name: FUN_01194ee0
 */


void FUN_01194ee0(long param_1)

{
  ulong uVar1;
  undefined4 local_14;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x80) != '\0')) &&
     ((uVar1 = FUN_010384a0(), (uVar1 & 1) != 0 ||
      (uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0x20)), (uVar1 & 1) != 0)))) {
    if (*(int *)(param_1 + 0x84) == 1) {
      local_14 = FUN_010386e0(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(param_1 + 0x110))(param_1 + 0x130,&local_14);
    }
    else if (*(int *)(param_1 + 0x84) == 0) {
      (**(code **)(param_1 + 0x90))(param_1 + 0xb0);
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}


