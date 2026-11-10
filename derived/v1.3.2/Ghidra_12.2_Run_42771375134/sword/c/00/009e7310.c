/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e7310; name: FUN_009e7310
 */


void FUN_009e7310(long param_1,undefined1 *param_2,undefined1 param_3,undefined4 param_4,
                 undefined2 param_5,byte param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *(char *)(param_1 + 0xc0) = (char)param_4;
  *(undefined1 *)(param_1 + 0xc2) = param_3;
  *(undefined2 *)(param_1 + 0xcc) = param_5;
  *(byte *)(param_1 + 0xce) = param_6 & 1;
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_008df3f0(uVar2,param_4);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  uVar1 = FUN_008f94e0(param_4);
  *(undefined1 *)(param_1 + 0xc1) = uVar1;
  *(undefined1 *)(param_1 + 0x174) = *param_2;
  *(undefined1 *)(param_1 + 0x175) = param_2[1];
  *(undefined1 *)(param_1 + 0x176) = param_2[2];
  *(undefined1 *)(param_1 + 0x177) = param_2[3];
  return;
}


