/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00802cb0; name: FUN_00802cb0
 */


void FUN_00802cb0(long param_1,long *param_2,undefined8 param_3)

{
  size_t sVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  size_t sVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  void *local_58;
  void *local_50;
  undefined8 uStack_48;
  
  lVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
  plVar4 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  pbVar7 = *(byte **)(lVar3 + 8);
  sVar5 = strlen(PTR_s_google_protobuf_Any_02716f50);
  sVar1 = (ulong)(*pbVar7 >> 1);
  if ((*pbVar7 & 1) != 0) {
    sVar1 = *(size_t *)(pbVar7 + 8);
  }
  if ((((sVar5 == sVar1) &&
       (iVar2 = std::string::compare
                          ((ulong)pbVar7,0,(char *)0xffffffffffffffff,
                           (ulong)PTR_s_google_protobuf_Any_02716f50), iVar2 == 0)) &&
      (*(char *)(param_1 + 9) != '\0')) &&
     (uVar8 = FUN_008037c0(param_1,param_2,param_3), (uVar8 & 1) != 0)) {
    return;
  }
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_58 = (void *)0x0;
  (**(code **)(*plVar4 + 0x80))(plVar4,param_2,&local_58);
  if (*(char *)(param_1 + 8) == '\0') {
    if (local_50 == local_58) goto LAB_00802de0;
  }
  else {
    FUN_00809790(local_58,local_50);
    if (local_50 == local_58) goto LAB_00802de0;
  }
  uVar8 = 0;
  do {
    FUN_00803da0(param_1,param_2,plVar4,*(undefined8 *)((long)local_58 + uVar8 * 8),param_3);
    uVar8 = uVar8 + 1;
  } while (uVar8 < (ulong)((long)local_50 - (long)local_58 >> 3));
LAB_00802de0:
  if (*(char *)(param_1 + 7) == '\0') {
    uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
    FUN_00802e60(param_1,uVar6,param_3);
  }
  if (local_58 != (void *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  return;
}


