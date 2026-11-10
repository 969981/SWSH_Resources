/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106ff20; name: FUN_0106ff20
 */


undefined * FUN_0106ff20(int param_1,char param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02723cf8;
  puVar2 = PTR_DAT_02723ce8;
  if (param_1 != 0) {
    puVar1 = PTR_DAT_02723cf0;
    puVar2 = PTR_DAT_02723ce0;
  }
  if (param_2 != '\0') {
    puVar2 = puVar1;
  }
  return puVar2;
}


