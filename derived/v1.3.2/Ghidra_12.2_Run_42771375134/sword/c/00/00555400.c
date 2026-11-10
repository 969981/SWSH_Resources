/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00555400; name: FUN_00555400
 */


undefined8
FUN_00555400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5,int param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined4 *)(*(long *)(param_5 + 0x1f8) + (long)param_6 * 0x60 + 0x24) = param_1;
  *(undefined4 *)(*(long *)(param_5 + 0x1f8) + (long)param_6 * 0x60 + 0x30) = param_2;
  *(undefined4 *)(*(long *)(param_5 + 0x1f8) + (long)param_6 * 0x60 + 0x28) = param_3;
  *(undefined4 *)(*(long *)(param_5 + 0x1f8) + (long)param_6 * 0x60 + 0x2c) = param_4;
  lVar2 = *(long *)(param_5 + 0x1f8) + (long)param_6 * 0x60;
  uVar1 = *param_7;
  *(undefined8 *)(lVar2 + 0x3c) = param_7[1];
  *(undefined8 *)(lVar2 + 0x34) = uVar1;
  return 0;
}


