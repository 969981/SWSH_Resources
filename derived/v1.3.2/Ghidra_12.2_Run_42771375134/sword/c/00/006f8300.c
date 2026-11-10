/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f8300; name: FUN_006f8300
 */


undefined4 FUN_006f8300(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x60);
  if (param_2 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x6c);
  }
  puVar1 = (undefined4 *)(param_1 + 0x60);
  if (param_2 != 1) {
    puVar1 = puVar2;
  }
  puVar2 = (undefined4 *)(param_1 + 0x78);
  if (param_2 != 2) {
    puVar2 = puVar1;
  }
  return *puVar2;
}


