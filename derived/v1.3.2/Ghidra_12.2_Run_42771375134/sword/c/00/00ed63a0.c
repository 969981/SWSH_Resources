/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed63a0; name: FUN_00ed63a0
 */


void FUN_00ed63a0(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  float fVar4;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  iVar1 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
  if (iVar1 == param_2) {
    return;
  }
  if (param_2 - 1U < 2) {
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e8a0,param_2);
      goto joined_r0x00ed6434;
    }
    pcVar3 = *(code **)(*param_1 + 600);
  }
  else {
    if (param_2 != 0) goto joined_r0x00ed6434;
    pcVar3 = *(code **)(*param_1 + 0x260);
  }
  (*pcVar3)(param_1);
joined_r0x00ed6434:
  if ((param_3 & 1) == 0) {
    return;
  }
  if (param_2 == 2) {
    if (*(char *)((long)param_1 + 0x44c) == '\0') {
      pcVar3 = *(code **)(*param_1 + 0x178);
      puVar2 = PTR_DAT_0271e870;
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x1c0);
      puVar2 = (undefined *)((long)param_1 + 0x44c);
    }
    fVar4 = (float)(*pcVar3)(0,param_1,puVar2);
    if (*(float *)PTR_DAT_0271ecc8 <= fVar4) {
      return;
    }
    local_50 = 0x4d1e146afda47076;
    local_48 = "ra_wait01_loop";
    local_40 = 0xe;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    if (*(char *)((long)param_1 + 0x44c) == '\0') {
      pcVar3 = *(code **)(*param_1 + 0x178);
      puVar2 = PTR_DAT_0271e870;
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x1c0);
      puVar2 = (undefined *)((long)param_1 + 0x44c);
    }
    fVar4 = (float)(*pcVar3)(0,param_1,puVar2);
    if (*(float *)PTR_DAT_0271ecc8 <= fVar4) {
      return;
    }
    local_50 = 0x248cb78e45b7cfed;
    local_48 = "rl_wait";
    local_40 = 7;
  }
  local_38 = 0;
  (**(code **)(*param_1 + 0x1e8))(DAT_01d4bfc8,0x40a00000,param_1,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


