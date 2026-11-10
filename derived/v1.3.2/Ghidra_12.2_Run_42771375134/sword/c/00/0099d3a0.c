/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099d3a0; name: FUN_0099d3a0
 */


void FUN_0099d3a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_3 + 3) == '\0') {
    switch(*(undefined4 *)((long)param_3 + 0x1c)) {
    case 1:
      local_58 = *param_3;
      local_60 = param_3[2];
      local_50 = param_3[5];
      FUN_00942450(param_1);
      uVar1 = FUN_009253c0();
      FUN_0099da20(uVar1,auStack_28,&local_60);
      break;
    case 2:
      local_50 = *param_3;
      local_60 = param_3[1];
      local_58 = param_3[2];
      uStack_48 = param_3[5];
      FUN_00942450(param_1);
      uVar1 = FUN_009253a0();
      FUN_0099e340(uVar1,auStack_28,&local_60);
      break;
    case 3:
      local_58 = *param_3;
      local_60 = param_3[2];
      local_50 = param_3[5];
      FUN_00942450(param_1);
      uVar1 = FUN_009253b0();
      FUN_0099e4d0(uVar1,auStack_28,&local_60);
      break;
    case 5:
      local_50 = *param_3;
      local_60 = param_3[1];
      local_58 = param_3[2];
      uStack_48 = param_3[5];
      FUN_00942450(param_1);
      uVar1 = FUN_00925360();
      FUN_0099d820(uVar1,auStack_28,&local_60);
      break;
    case 10:
      local_58 = *param_3;
      local_60 = param_3[2];
      FUN_00942450(param_1);
      uVar1 = FUN_00925370();
      FUN_0099e090(uVar1,auStack_28,&local_60);
      break;
    case 0xb:
    case 0xd:
      local_58 = *param_3;
      local_60 = param_3[2];
      local_50 = param_3[5];
      FUN_00942450(param_1);
      uVar1 = FUN_009253d0();
      FUN_0099dc30(uVar1,auStack_28,&local_60);
      break;
    case 0xc:
      local_58 = *param_3;
      local_50 = param_3[5];
      local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)param_3[2]);
      FUN_00942450(param_1);
      uVar1 = FUN_00925380();
      FUN_0099d660(uVar1,auStack_28,&local_60);
    }
    uVar3 = *param_3;
    uVar2 = param_3[2];
    uVar1 = FUN_009423e0(param_1);
    FUN_00929080(uVar1,uVar2,uVar3);
  }
  else {
    local_60 = *param_3;
    local_50 = param_3[1];
    local_58 = param_3[2];
    uStack_48 = param_3[4];
    local_40 = param_3[5];
    local_38 = 0;
    FUN_00942450(param_1);
    uVar1 = FUN_00925450();
    FUN_0095e6a0(uVar1,auStack_28,&local_60);
  }
  return;
}


