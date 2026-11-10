/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01036240; name: FUN_01036240
 */


void FUN_01036240(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  *(bool *)(*(long *)(param_1 + 0x5d0) + 0x142) = iVar1 != 1;
  *(bool *)(*(long *)(param_1 + 0x5d8) + 0x142) = iVar1 != 1;
  uVar3 = 0x3f800000;
  if (1 < *param_2 - 1U) {
    uVar3 = 0;
  }
  FUN_00ffd510(uVar3,param_1 + 0x100,&DAT_02162b18);
  if (*(long *)(param_2 + 2) != 0) {
    uVar2 = FUN_0077d470();
    FUN_00ffd700(param_1 + 0x100,&DAT_02162b20,uVar2,10);
  }
  if (*param_2 == 2) {
    return;
  }
  FUN_010364c0(param_1,2);
  return;
}


