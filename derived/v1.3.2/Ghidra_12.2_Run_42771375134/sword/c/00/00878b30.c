/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878b30; name: FUN_00878b30
 */


void FUN_00878b30(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00868b70(*(undefined8 *)(param_1 + 0x98));
  uVar2 = (uVar1 & 0xff) - (param_2 & 0xff);
  if ((uVar1 & 0xff) < (param_2 & 0xff)) {
    FUN_0086f780(*(undefined8 *)(param_1 + 0x98),0);
    return;
  }
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  FUN_0086f780(*(undefined8 *)(param_1 + 0x98),uVar2);
  return;
}


