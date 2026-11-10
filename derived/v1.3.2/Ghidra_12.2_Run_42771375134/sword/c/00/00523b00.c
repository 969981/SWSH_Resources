/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523b00; name: FUN_00523b00
 */


undefined8
FUN_00523b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,long param_7,undefined8 *param_8,
            undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68);
  uVar1 = param_8[1];
  *puVar2 = *param_8;
  puVar2[1] = uVar1;
  *(undefined4 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68 + 0x1c) =
       param_1;
  *(undefined4 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68 + 0x10) =
       param_2;
  *(undefined4 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68 + 0x5c) =
       param_3;
  *(undefined4 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68 + 100) =
       param_9;
  *(undefined4 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68 + 0x20) =
       param_4;
  *(undefined4 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68 + 0x14) =
       param_5;
  *(undefined4 *)(*(long *)(param_7 + 0x858) + (long)*(int *)(param_7 + 0x860) * 0x68 + 0x18) =
       param_6;
  return 0;
}


