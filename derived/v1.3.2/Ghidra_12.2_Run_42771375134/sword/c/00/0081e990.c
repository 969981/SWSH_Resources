/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081e990; name: FUN_0081e990
 */


void FUN_0081e990(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*param_2 == 0) {
    if (*param_3 == 1) {
      puVar4 = *(undefined8 **)(*(long *)(param_3 + 10) + 0x20);
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_3 + 2) + 0x10);
    }
    if (puVar4 != (undefined8 *)0x0) {
      if ((*(int *)(puVar4 + 1) == 9) && (pbVar6 = (byte *)*puVar4, pbVar6 != (byte *)0x0)) {
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + 0x10));
        }
        operator_delete(pbVar6);
      }
      operator_delete(puVar4);
      iVar2 = *param_3;
      local_60 = local_48;
      uStack_68 = local_50;
      goto joined_r0x0081ea34;
    }
  }
  iVar2 = *param_3;
  local_60 = local_48;
  uStack_68 = local_50;
joined_r0x0081ea34:
  if (iVar2 == 1) {
    puVar4 = *(undefined8 **)(param_3 + 10);
    local_70 = 0;
    uStack_58 = 0;
    *(undefined8 *)(param_3 + 10) = *puVar4;
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 2);
    local_50 = *(undefined8 *)(param_3 + 4);
    local_48 = *(undefined8 *)(param_3 + 6);
    uVar7 = *(undefined8 *)(param_3 + 8);
    FUN_008229b0();
    puVar4 = (undefined8 *)0x0;
    cVar3 = *(char *)((long)param_2 + 0xc);
    local_70 = uVar5;
    uStack_58 = uVar7;
    uStack_68 = local_50;
    local_60 = local_48;
  }
  local_50 = uStack_68;
  local_48 = local_60;
  if (cVar3 == '\0') {
    FUN_00823bd0(param_2[2],&local_70);
  }
  else {
    FUN_00823e40(param_2[2],puVar4);
  }
  uVar5 = *(undefined8 *)(param_3 + 2);
  *param_1 = *(undefined8 *)param_3;
  param_1[1] = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 4);
  uVar7 = *(undefined8 *)(param_3 + 6);
  uVar1 = *(undefined8 *)(param_3 + 10);
  param_1[4] = *(undefined8 *)(param_3 + 8);
  param_1[5] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  return;
}


