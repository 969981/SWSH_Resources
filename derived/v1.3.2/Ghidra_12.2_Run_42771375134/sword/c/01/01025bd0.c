/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01025bd0; name: FUN_01025bd0
 */


void FUN_01025bd0(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x7c) != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *param_1 = 1;
  }
  return;
}


