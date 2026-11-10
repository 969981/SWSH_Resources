/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5bdb0; name: FUN_00a5bdb0
 */


void FUN_00a5bdb0(long param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_90 [24];
  long local_78;
  undefined8 local_70;
  byte local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_68 = 0;
  local_40 = 0;
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  local_70 = *param_2;
  local_60 = param_1 + 0x100;
  FUN_006cf0a0(auStack_90,&DAT_0262ffc8);
  uVar4 = FUN_00ff93c0(param_1);
  FUN_00ff8620(&local_38,uVar4,auStack_90,10);
  lVar5 = *(long *)(local_38 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_50 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_48 = 0xc8e9c2e05cb54a73;
  local_40 = 0;
  if (*(byte *)((long)param_2 + 0xc) < 5) {
    local_58 = 0x23d1c0d47b5f6cfd;
    local_68 = *(byte *)((long)param_2 + 0xc);
    FUN_00a0a600(&local_70);
    bVar3 = *(byte *)((long)param_2 + 0xd);
    bVar2 = local_68;
  }
  else {
    bVar3 = *(byte *)((long)param_2 + 0xd);
    bVar2 = local_68;
  }
  local_68 = bVar3;
  if (local_68 < 5) {
    local_58 = 0x4fe05004075d9216;
    FUN_00a0a600(&local_70);
    bVar3 = *(byte *)((long)param_2 + 0xe);
    bVar2 = local_68;
  }
  else {
    bVar3 = *(byte *)((long)param_2 + 0xe);
  }
  local_68 = bVar3;
  if (local_68 < 5) {
    local_58 = 0x4fe05104075d93c9;
    FUN_00a0a600(&local_70);
    iVar1 = *(int *)(param_2 + 1);
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    local_68 = bVar2;
  }
  if (iVar1 - 0xeU < 0x2f) {
                    /* WARNING: Could not recover jumptable at 0x00a5bf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_02155218 + *(int *)(&DAT_02155218 + (ulong)(iVar1 - 0xeU) * 4)))(&UNK_021552d8);
    return;
  }
  FUN_00ffd010(param_1 + 0x100,&DAT_02155488);
  FUN_010364c0(param_1,2);
  return;
}


