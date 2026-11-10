/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00443f70; name: FUN_00443f70
 */


int FUN_00443f70(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int local_34;
  
  param_1 = param_1 + 8;
  FUN_0044dd40(param_1);
  uVar1 = *(uint *)(param_2 + 0x18) >> 0x10;
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0xc) & 1;
  }
  iVar2 = FUN_0044e110(param_1,*(undefined4 *)(param_2 + 4),0,uVar1,0,uVar3);
  local_34 = 0;
  if (((iVar2 == 1) &&
      (iVar2 = FUN_0044e400(param_1,param_3,*(undefined4 *)(param_2 + 8),&local_34), iVar2 == 1)) &&
     (iVar2 = 1, *(int *)(param_2 + 8) != local_34)) {
    iVar2 = 2;
  }
  FUN_0044e2c0(param_1);
  return iVar2;
}


