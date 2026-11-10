/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523b90; name: FUN_00523b90
 */


undefined8
FUN_00523b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined4 *)(*(long *)(param_5 + 0x858) + (long)*(int *)(param_5 + 0x860) * 0x68 + 0x24) =
       param_1;
  *(undefined4 *)(*(long *)(param_5 + 0x858) + (long)*(int *)(param_5 + 0x860) * 0x68 + 0x30) =
       param_2;
  *(undefined4 *)(*(long *)(param_5 + 0x858) + (long)*(int *)(param_5 + 0x860) * 0x68 + 0x28) =
       param_3;
  *(undefined4 *)(*(long *)(param_5 + 0x858) + (long)*(int *)(param_5 + 0x860) * 0x68 + 0x2c) =
       param_4;
  lVar2 = *(long *)(param_5 + 0x858) + (long)*(int *)(param_5 + 0x860) * 0x68;
  uVar1 = *param_6;
  *(undefined8 *)(lVar2 + 0x3c) = param_6[1];
  *(undefined8 *)(lVar2 + 0x34) = uVar1;
  return 0;
}


