/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e8d90; name: FUN_009e8d90
 */


void FUN_009e8d90(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008fa9d0(uVar2,uVar1);
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  FUN_009e6cc0(param_1);
  return;
}


