/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00967420; name: FUN_00967420
 */


void FUN_00967420(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_a0;
  undefined1 auStack_98 [40];
  char local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  byte local_47;
  undefined4 local_44;
  undefined1 uStack_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined1 local_38;
  
  *param_2 = 0;
  FUN_00943e60(auStack_98);
  uVar2 = FUN_009423e0(param_1);
  FUN_0092bbd0(uVar2,*(undefined4 *)(param_3 + 2),*param_3,param_3[1],auStack_98);
  local_a0 = param_3[3];
  uVar2 = FUN_009423e0(param_1);
  FUN_0092bc80(uVar2,*param_3,param_3[1],*(undefined4 *)(param_3 + 2),&local_a0);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = *(undefined4 *)(param_3 + 2);
  local_48 = *(undefined1 *)(param_3 + 4);
  local_44 = *(undefined4 *)((long)param_3 + 0x24);
  uStack_3f = *(undefined2 *)(param_3 + 5);
  uStack_3d = *(undefined1 *)((long)param_3 + 0x2a);
  uStack_40 = 0;
  local_50 = local_a0;
  FUN_00942450(param_1);
  uVar2 = FUN_00924ff0();
  FUN_00944d40(uVar2,local_70,&local_68);
  if (local_70[0] == '\0') {
    local_68 = *param_3;
    uStack_60 = param_3[1];
    local_58 = *(undefined4 *)(param_3 + 2);
    local_48 = 1;
    local_50 = local_a0;
    bVar1 = FUN_00943f10(auStack_98);
    local_47 = ~bVar1 & 1;
    uStack_40 = SUB81(auStack_98,0);
    uStack_3f = (undefined2)((ulong)auStack_98 >> 8);
    uStack_3d = (undefined1)((ulong)auStack_98 >> 0x18);
    uStack_3c = (undefined4)((ulong)auStack_98 >> 0x20);
    local_38 = 0;
    FUN_00942450(param_1);
    uVar2 = FUN_00924fe0();
    FUN_00944340(uVar2,local_70,&local_68);
    *param_2 = 1;
  }
  return;
}


