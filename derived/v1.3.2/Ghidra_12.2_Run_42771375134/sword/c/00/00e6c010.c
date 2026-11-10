/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6c010; name: FUN_00e6c010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e6c010(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 0x60) | 1) != 5) {
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 5;
  uVar2 = _UNK_01d49df8;
  uVar1 = _DAT_01d49df0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}


