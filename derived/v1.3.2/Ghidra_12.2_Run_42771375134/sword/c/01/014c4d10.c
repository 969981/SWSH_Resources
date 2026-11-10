/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c4d10; name: FUN_014c4d10
 */


void FUN_014c4d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_0272a370;
  *(undefined8 *)(param_1 + 0x190b0) = param_2;
  *(undefined **)(param_1 + 0x60) = puVar1;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined1 *)(param_1 + 0x1710c) = 1;
  *(undefined4 *)(param_1 + 0x17110) = 3;
  FUN_019931c0(param_1 + 0x17138,PTR_DAT_027155e8,param_1 + 0x58,0,0,0);
  FUN_01994570(param_1 + 0x17138,PTR_LAB_0272a378,param_1 + 0x19050);
  *(undefined1 *)(param_1 + 0x19000) = 0;
  return;
}


