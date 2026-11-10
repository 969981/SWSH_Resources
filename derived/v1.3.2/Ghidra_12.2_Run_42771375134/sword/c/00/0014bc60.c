/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014bc60; name: _INIT_75
 */


void _INIT_75(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_02710e00;
  puVar1 = PTR_DAT_02710df8;
  if ((*PTR_DAT_02710e00 & 1) == 0) {
    *(undefined8 *)(PTR_DAT_02710df8 + 8) = 0xbeb851eabeb851ea;
    *(undefined8 *)puVar1 = 0xbeb851eabeb851ea;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


