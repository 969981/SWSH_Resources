/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080db00; name: FUN_0080db00
 */


void FUN_0080db00(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_18);
  if ((uVar1 & 1) == 0) {
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  param_1[1] = local_18;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + *(int *)(param_1 + 2);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


