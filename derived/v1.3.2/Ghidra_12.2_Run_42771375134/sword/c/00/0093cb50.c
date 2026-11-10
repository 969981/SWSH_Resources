/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093cb50; name: FUN_0093cb50
 */


void FUN_0093cb50(long param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_008deea0(uVar2,param_2);
  bVar1 = FUN_008e39d0(uVar2,param_3,param_5,param_6);
  if (param_4 != (byte *)0x0) {
    *param_4 = bVar1 & 1;
  }
  return;
}


