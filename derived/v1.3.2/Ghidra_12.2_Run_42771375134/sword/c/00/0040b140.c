/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b140; name: FUN_0040b140
 */


void FUN_0040b140(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_3;
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
    lVar2 = param_1[3];
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 4;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_1 + 0x44) & 0xf8;
  uVar1 = 0;
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 0x80) = param_1;
    uVar1 = *(undefined4 *)(*(long *)(param_1[3] + 0x78) + 0x10);
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


