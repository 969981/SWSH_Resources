/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013887e0; name: FUN_013887e0
 */


void FUN_013887e0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_b0 [6];
  long local_98;
  char *local_90 [5];
  undefined8 uStack_68;
  undefined8 local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  lVar1 = (long)*(int *)(param_1 + 0x228);
  lVar2 = *(long *)(param_1 + lVar1 * 8 + 0x1e8);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_007946a0(lVar2,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = (long)*(int *)(param_1 + 0x228);
  }
  local_38 = 1;
  local_90[2] = (char *)0x1;
  local_90[3] = (char *)0x9aba34968b546d4f;
  local_90[4] = "Play_Camp_Cooking_TrueLove_hit_2People";
  uStack_68 = 0x26;
  local_60 = 0xa3587c42a7359674;
  local_90[0] = (char *)0xcbf29ce484222645;
  local_90[1] = "";
  local_58 = "Play_Camp_Cooking_TrueLove_hit_3People";
  uStack_50 = 0x26;
  local_48 = 0xcbf29ce484222645;
  puStack_40 = &DAT_0216c5c8;
  if (*local_90[lVar1 * 3 + 1] != '\0') {
    FUN_006cf0a0(local_b0,local_90 + lVar1 * 3);
    FUN_012d6d40(local_b0);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
  }
  if (*(code **)(param_1 + 0x160) != (code *)0x0) {
    local_b0[0] = *(undefined4 *)(param_1 + 0x7c);
    (**(code **)(param_1 + 0x160))(param_1 + 0x180,local_b0);
  }
  lVar1 = FUN_013879c0(*(undefined8 *)(param_1 + 200),local_b0);
  if (lVar1 != 0) {
    FUN_01389830(lVar1,*(undefined1 *)(param_1 + 0x80));
  }
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined1 *)(param_1 + 0x224) = 0;
  FUN_012dc480(param_1,0);
  return;
}


