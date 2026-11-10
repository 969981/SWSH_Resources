/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b5800; name: FUN_008b5800
 */


undefined8 FUN_008b5800(long param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  long local_38;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar6)(puVar6);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  plVar4 = *(long **)(puVar6[0xb] + 0x10);
  lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar6[0xb] + 0x1c));
  uVar2 = FUN_0087b890();
  sVar1 = FUN_008783c0(lVar5);
  if (sVar1 == 0) {
    if ((uVar2 & 0xff) != 0) {
      return 0;
    }
  }
  else if ((uVar2 & 0xff) == 4) {
    return 0;
  }
  FUN_0087e920(lVar5,uVar2);
  uVar3 = FUN_0087b880(lVar5,uVar2);
  local_60 = 0xea89adefc6ba7fa7;
  pcStack_58 = "LEARN_SKILL";
  local_50 = 0xb;
  local_48 = 0;
  local_38 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_014af7f0(&local_60,uVar3,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
  FUN_014c7bf0(uVar7,0,lVar5);
  FUN_014c9660(uVar7,1,uVar3);
  FUN_008a6b70(puVar6 + -10,0x2f90d8e06cb6ab72,0,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 1;
}


