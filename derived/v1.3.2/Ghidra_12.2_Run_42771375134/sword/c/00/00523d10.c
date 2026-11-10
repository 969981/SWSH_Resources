/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523d10; name: FUN_00523d10
 */


undefined8
FUN_00523d10(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x868) + (long)*(int *)(param_3 + 0x870) * 0x34;
  uVar1 = *param_4;
  *(undefined8 *)(lVar2 + 0xc) = param_4[1];
  *(undefined8 *)(lVar2 + 4) = uVar1;
  *(undefined4 *)(*(long *)(param_3 + 0x868) + (long)*(int *)(param_3 + 0x870) * 0x34 + 0x24) =
       param_5;
  *(undefined4 *)(*(long *)(param_3 + 0x868) + (long)*(int *)(param_3 + 0x870) * 0x34 + 0x28) =
       param_1;
  *(undefined4 *)(*(long *)(param_3 + 0x868) + (long)*(int *)(param_3 + 0x870) * 0x34 + 0x2c) =
       param_2;
  *(undefined4 *)(*(long *)(param_3 + 0x868) + (long)*(int *)(param_3 + 0x870) * 0x34 + 0x30) =
       param_6;
  return 0;
}


