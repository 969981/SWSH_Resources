/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106fee0; name: FUN_0106fee0
 */


undefined * FUN_0106fee0(int param_1,char param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02723cd8;
  puVar2 = PTR_DAT_02723cc8;
  if (param_1 != 0) {
    puVar1 = PTR_DAT_02723cd0;
    puVar2 = PTR_DAT_02723cc0;
  }
  if (param_2 != '\0') {
    puVar2 = puVar1;
  }
  return puVar2;
}


