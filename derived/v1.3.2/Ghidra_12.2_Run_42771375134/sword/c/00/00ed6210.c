/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed6210; name: FUN_00ed6210
 */


undefined8 FUN_00ed6210(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x6d8);
  if (*(long *)(param_1 + 0x6d0) == lVar2) {
    return 0;
  }
  uVar1 = *(undefined4 *)(lVar2 + -0x10);
  uVar4 = *(undefined8 *)(lVar2 + -0x28);
  param_2[3] = *(undefined8 *)(lVar2 + -0x18);
  uVar3 = *(undefined8 *)(lVar2 + -0x20);
  param_2[1] = uVar4;
  param_2[2] = uVar3;
  *param_2 = *(undefined8 *)(lVar2 + -0x30);
  *(undefined4 *)(param_2 + 4) = uVar1;
  param_2[3] = param_2[3];
  param_2[2] = param_2[2] & 0xffffffff;
  return 1;
}


