/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150e9a0; name: FUN_0150e9a0
 */


void FUN_0150e9a0(undefined4 *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  param_2 = param_2 + (long)param_3 * 0x28;
  *param_1 = *(undefined4 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 100);
  param_1[2] = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x6c);
  *(undefined1 *)((long)param_1 + 0xd) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  param_1[4] = *(undefined4 *)(param_2 + 0x70);
  param_1[5] = 0;
  param_1[6] = uVar1;
  *(undefined8 *)(param_1 + 7) = 0;
  return;
}


