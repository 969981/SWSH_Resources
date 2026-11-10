/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057b990; name: FUN_0057b990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 *param_10,undefined8 *param_11,ulong param_12,long param_13
                 ,long param_14,undefined4 param_15)

{
  undefined4 *puVar1;
  
  _DAT_02760a18 = *param_10;
  _DAT_02760a20 = param_10[1];
  _DAT_02760a28 = *param_11;
  _DAT_02760a30 = param_11[1];
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,2);
  if (param_13 != 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_13);
  }
  if (param_14 == 0) {
    puVar1 = (undefined4 *)(param_9 + 0x1a6f8);
    if ((param_12 & 1) == 0) {
      puVar1 = (undefined4 *)(param_9 + 0x1a6f4);
    }
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_14);
    puVar1 = (undefined4 *)(param_9 + 0x1a700);
    if ((param_12 & 1) == 0) {
      puVar1 = (undefined4 *)(param_9 + 0x1a6fc);
    }
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),*puVar1);
  if ((param_12 & 1) != 0) {
    FUN_00512d80(0x3f800000,*(undefined4 *)(param_13 + 0x4c),*(undefined4 *)(param_13 + 0x50),
                 &DAT_02760c18);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,5);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,0);
  }
  FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_15);
  return;
}


