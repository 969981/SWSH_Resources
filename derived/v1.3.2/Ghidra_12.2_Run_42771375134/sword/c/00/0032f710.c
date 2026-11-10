/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032f710; name: FUN_0032f710
 */


void FUN_0032f710(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 local_80 [2];
  code *local_70;
  undefined8 local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_48;
  undefined1 local_44 [4];
  
  FUN_002171b0(local_80);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = (ulong)uVar2;
  if (uVar2 != 0) {
    if (*(char *)(*(long *)(param_1 + 8) + (ulong)(uVar2 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*param_3 + 0x20))
                (param_3,*(undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uVar2 - 1) * 0x10));
      uVar3 = (ulong)*(uint *)(param_1 + 0x10);
      *(undefined1 *)(*(long *)(param_1 + 8) + (ulong)(*(uint *)(param_1 + 0x10) - 1) * 0x10 + 8) =
           1;
    }
  }
  uVar2 = local_58;
  local_60 = local_80[0];
  local_58 = local_58 & 0xffffff00;
  if ((uint)uVar3 < (*(uint *)(param_1 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 0x10);
    puVar1[1] = CONCAT44(uStack_54,uVar2) & 0xffffffffffffff00;
    *puVar1 = local_80[0];
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    FUN_00327960(param_1,&local_60);
  }
  (*local_70)(&local_60,param_2);
  if (*(int *)(param_1 + 0x10) == 0) {
    pcVar4 = "bad__repx__name";
  }
  else {
    pcVar4 = *(char **)(*(long *)(param_1 + 8) + (ulong)(*(int *)(param_1 + 0x10) - 1) * 0x10);
  }
  local_50 = local_60;
  local_48 = local_58;
  FUN_0031b3b0(param_4,&local_50);
  local_44[0] = 0;
  (**(code **)*param_4)(param_4,local_44,1);
  (**(code **)(*param_3 + 0x10))(param_3,pcVar4,param_4[4]);
  param_4[3] = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = *(int *)(param_1 + 0x10) - 1;
    if (*(char *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 0x10 + 8) != '\0') {
      (**(code **)(*param_3 + 0x28))(param_3);
      uVar2 = *(int *)(param_1 + 0x10) - 1;
    }
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  return;
}


