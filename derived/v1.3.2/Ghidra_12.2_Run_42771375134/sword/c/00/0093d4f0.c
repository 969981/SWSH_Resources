/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093d4f0; name: FUN_0093d4f0
 */


void FUN_0093d4f0(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008f8ca0(*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 0xff) < 2) {
    uVar2 = FUN_00931a20(*(undefined8 *)(param_1 + 0x10));
    uVar2 = FUN_009336d0(uVar2,uVar1);
    FUN_009338c0(uVar2,param_2);
    return;
  }
  return;
}


