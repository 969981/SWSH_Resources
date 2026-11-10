/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f650; name: FUN_0106f650
 */


undefined4 FUN_0106f650(ulong param_1,int param_2,char param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_DAT_02723c88;
  if (param_3 != '\x01') {
    puVar1 = (undefined *)0x0;
  }
  puVar3 = PTR_DAT_02723c90;
  if (param_3 != '\0') {
    puVar3 = puVar1;
  }
  puVar1 = PTR_DAT_02723c98;
  if (param_3 != '\x01') {
    puVar1 = (undefined *)0x0;
  }
  puVar2 = PTR_DAT_02723ca0;
  if (param_3 != '\0') {
    puVar2 = puVar1;
  }
  puVar1 = (undefined *)0x0;
  if (param_2 == 0) {
    puVar1 = puVar2;
  }
  if (param_2 != 1) {
    puVar3 = puVar1;
  }
  return *(undefined4 *)(puVar3 + (param_1 & 0xff) * 4);
}


