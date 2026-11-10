/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdc2d0; name: FUN_00bdc2d0
 */


void FUN_00bdc2d0(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1918) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x1924);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x191c);
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    *param_1 = 1;
  }
  return;
}


