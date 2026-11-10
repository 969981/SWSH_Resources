/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006831f0; name: FUN_006831f0
 */


undefined8 FUN_006831f0(long *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,1);
  *param_2 = uVar2;
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,1);
  param_2[1] = uVar2;
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  *(undefined4 *)(param_2 + 2) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  *(undefined4 *)((long)param_2 + 0x14) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  *(undefined4 *)(param_2 + 3) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  *(undefined4 *)((long)param_2 + 0x1c) = uVar1;
  lVar3 = (**(code **)(*param_1 + 0x88))(param_1);
  (**(code **)(*param_1 + 0x90))(param_1,(param_3 + lVar3) - 1U & -(long)param_3,0);
  return 1;
}


