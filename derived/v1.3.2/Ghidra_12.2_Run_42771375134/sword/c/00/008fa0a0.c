/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa0a0; name: FUN_008fa0a0
 */


void FUN_008fa0a0(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x150);
  uVar1 = FUN_009c98b0(param_2);
  uVar2 = FUN_008eef90(uVar2,uVar1);
  FUN_008ee870(*(undefined4 *)(param_1 + 0x150),uVar2);
  return;
}


