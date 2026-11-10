/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060ae40; name: FUN_0060ae40
 */


void FUN_0060ae40(void)

{
  undefined8 *puVar1;
  
  puVar1 = malloc(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = &LAB_0060ae80;
    puVar1[2] = &LAB_0060aea0;
    puVar1[3] = &LAB_0060ae90;
  }
  return;
}


