/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130e120; name: FUN_0130e120
 */


void FUN_0130e120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_02727e38;
  *param_5 = 1;
  puVar3 = PTR_DAT_02727e40;
  *(undefined4 *)(param_5 + 0x14) = *(undefined4 *)puVar2;
  *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)puVar3;
  uVar1 = *(undefined4 *)PTR_DAT_02727e48;
  *(undefined4 *)(param_5 + 0x18) = 0;
  *(undefined4 *)(param_5 + 0x10) = param_2;
  *(undefined4 *)(param_5 + 8) = uVar1;
  *(undefined4 *)(param_5 + 4) = param_1;
  *(undefined4 *)(param_5 + 0x20) = param_4;
  *(undefined4 *)(param_5 + 0x1c) = param_3;
  return;
}


