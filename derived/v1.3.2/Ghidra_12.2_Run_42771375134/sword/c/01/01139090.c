/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01139090; name: FUN_01139090
 */


void FUN_01139090(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_68;
  char *pcStack_60;
  undefined8 local_58;
  long local_50 [3];
  long local_38;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    local_50[0] = 0;
  }
  else {
    FUN_01133e40(local_50);
  }
  uVar1 = FUN_01128b40(local_50[0],4);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
    local_50[0] = 0;
  }
  if ((uVar1 & 1) != 0) {
    lVar5 = *(long *)PTR_DAT_027107a8;
    local_68 = 0x735a727b1b14cc53;
    pcStack_60 = "Play_UI_Gnest_join";
    local_58 = 0x12;
    FUN_006cf0a0(local_50,&local_68);
    FUN_008962c0(lVar5 + 0x108,local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    local_50[0] = 0;
  }
  else {
    FUN_01133e40(local_50);
  }
  uVar2 = FUN_01128b40(local_50[0],5);
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
    local_50[0] = 0;
  }
  if (((uVar1 | uVar2) & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    local_50[0] = 0;
    FUN_011ba720();
  }
  else {
    FUN_011303e0(local_50);
    FUN_011ba720(local_50[0]);
  }
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x50) + 0x18))();
    local_50[0] = 0;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    local_50[0] = 0;
    FUN_011ba990(0,0);
  }
  else {
    FUN_011303e0(local_50);
    FUN_011ba990(local_50[0],0);
  }
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x50) + 0x18))();
    local_50[0] = 0;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    local_50[0] = 0;
    FUN_011bad90();
  }
  else {
    FUN_011303e0(local_50);
    FUN_011bad90(local_50[0]);
  }
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x50) + 0x18))();
    local_50[0] = 0;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    local_50[0] = 0;
    lVar3 = *(long *)(param_1 + 0x90);
    lVar5 = local_50[0];
  }
  else {
    FUN_011303e0(local_50);
    lVar3 = *(long *)(param_1 + 0x90);
    lVar5 = local_50[0];
  }
  local_50[0] = lVar5;
  if (lVar3 == 0) {
    local_68 = 0;
  }
  else {
    FUN_01133e40(&local_68);
  }
  uVar4 = FUN_01128b50(local_68);
  FUN_011ba3f0(lVar5,uVar4);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x50) + 0x18))();
  }
  return;
}


