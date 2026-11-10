/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008daa50; name: FUN_008daa50
 */


void FUN_008daa50(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00931990(*(undefined8 *)(param_1 + 8));
  FUN_008dce90(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (short)*(undefined4 *)(param_1 + 0x78));
  return;
}


