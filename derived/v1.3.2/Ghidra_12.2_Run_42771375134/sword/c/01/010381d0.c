/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010381d0; name: FUN_010381d0
 */


void FUN_010381d0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x5e0) != 0) {
    bVar1 = FUN_01038a10(*(long *)(param_1 + 0x5e0),param_3);
    *(byte *)(param_1 + 0x600) = bVar1 & 1;
  }
  *(undefined1 *)(param_1 + 0x601) = *(undefined1 *)(param_2 + 2);
  FUN_01679ef0(*(undefined8 *)(param_1 + 0x5d0),*(undefined1 *)((long)param_2 + 0x12));
  FUN_01679dd0(*(undefined8 *)(param_1 + 0x5d0),*(undefined4 *)(param_2 + 1),
               *(undefined4 *)((long)param_2 + 0xc));
  (**(code **)(**(long **)(param_1 + 0x5d0) + 0x50))(*(long **)(param_1 + 0x5d0),*param_2);
  if (*(char *)((long)param_2 + 0x11) != '\0') {
    FUN_01679b10(*(undefined8 *)(param_1 + 0x5d0));
  }
  if (*(long *)(param_1 + 0x5e0) != 0) {
    FUN_00ffcad0(param_1 + 0x100,1);
  }
  *(undefined1 *)(param_1 + 0x6f1) = 1;
  return;
}


