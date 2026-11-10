/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eb4b0; name: FUN_007eb4b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007eb4b0(long param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long extraout_x1;
  long lVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte local_a0 [16];
  void *local_90;
  ulong local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  uVar3 = FUN_007eb750(*(undefined8 *)(param_1 + 8),param_2,8);
  if ((uVar3 & 1) != 0) {
    uVar3 = std::string::rfind((char)param_2,0x2e);
    if (uVar3 == 0xffffffffffffffff) {
      FUN_007ebbc0(param_1,param_2,param_2,param_3);
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    std::string::string((string *)&local_58,param_2,0,uVar3,(allocator *)param_2);
    uVar8 = FUN_007e1d20(uVar8,&local_58);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    FUN_007eb4b0(param_1,uVar8,param_3,param_4);
    std::string::string((string *)&local_58,param_2,uVar3 + 1,0xffffffffffffffff,
                        (allocator *)param_2);
    FUN_007ebbc0(param_1,&local_58,param_2,param_3);
    if ((local_58 & 1) == 0) {
      return;
    }
    local_90 = local_48;
    goto LAB_007eb730;
  }
  iVar2 = FUN_007e2eb0(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar2 == 8) {
    return;
  }
  std::operator+("\"",param_2);
  puVar4 = (ulong *)std::string::append((char *)local_a0);
  local_88 = *puVar4;
  local_80 = puVar4[1];
  local_78 = (void *)puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  switch(iVar2) {
  case 1:
  case 4:
  case 6:
    puVar6 = (undefined8 *)(extraout_x1 + 0x10);
    break;
  case 2:
    puVar6 = (undefined8 *)(extraout_x1 + 0x30);
    break;
  case 3:
  case 7:
    lVar5 = *(long *)(extraout_x1 + 0x10);
    goto LAB_007eb654;
  case 5:
    lVar5 = *(long *)(extraout_x1 + 0x18);
LAB_007eb654:
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    break;
  default:
    puVar6 = (undefined8 *)0x0;
    goto LAB_007eb65c;
  }
  puVar6 = (undefined8 *)*puVar6;
LAB_007eb65c:
  pbVar7 = (byte *)*puVar6;
  pbVar1 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar1 = pbVar7 + 1;
  }
  puVar4 = (ulong *)std::string::append((char *)&local_88,(ulong)pbVar1);
  local_70 = *puVar4;
  local_68 = puVar4[1];
  local_60 = (void *)puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (ulong *)std::string::append((char *)&local_70);
  local_58 = *puVar4;
  local_50 = puVar4[1];
  local_48 = (void *)puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_007eaaf0(param_1,param_2,param_3,0,&local_58);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0[0] & 1) != 0) {
LAB_007eb730:
    operator_delete(local_90);
  }
  return;
}


