/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d63d0; name: FUN_004d63d0
 */


void FUN_004d63d0(long param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(uint *)(param_1 + 0x54) = (uint)uVar1;
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  FUN_004d7270(param_1 + 0x10,(*(uint5 *)(*(long *)(param_1 + 0xe8) + 0x26b) & 0x1c0000000) == 0);
  if (*(short *)(param_1 + 0x82) != 0) {
    FUN_004d6470(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(undefined4 *)(param_2 + 0x30) = 0x11;
  }
  return;
}


