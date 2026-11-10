/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7330; name: FUN_011f7330
 */


void FUN_011f7330(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_34 [4];
  
  uVar3 = FUN_011f7a10(param_3);
  *param_1 = uVar3;
  uVar4 = FUN_011f7a20(param_3);
  *(ulong *)(param_1 + 2) = uVar4 & 0xffff;
  uVar4 = FUN_011f7a30(param_3);
  *(ulong *)(param_1 + 4) = uVar4 & 0xff;
  uVar2 = FUN_011f7a50(param_3);
  *(undefined2 *)(param_1 + 6) = uVar2;
  uVar3 = FUN_011f7a10(param_3);
  uVar2 = FUN_011f7a20(param_3);
  FUN_011f6f70(param_1 + 8,param_2,uVar3,uVar2);
  uVar1 = FUN_011f7a30(param_3);
  local_34[0] = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_58 = param_2;
  FUN_011f7880(param_1 + 0x16,uVar1,local_34,&local_58);
  return;
}


