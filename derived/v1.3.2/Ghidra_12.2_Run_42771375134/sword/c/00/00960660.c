/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00960660; name: FUN_00960660
 */


void FUN_00960660(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_88;
  int local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  int local_60;
  undefined1 local_5c;
  undefined1 auStack_38 [4];
  char local_34 [4];
  
  uVar4 = FUN_008e0a00(*param_3);
  uVar5 = FUN_008e1600(*param_3);
  if (((uVar5 & 1) == 0) && (cVar2 = FUN_00942580(param_1,uVar4), cVar2 != '\x05')) {
    uVar7 = *param_3;
    puVar1 = (undefined4 *)param_3[1];
    uVar4 = *(undefined4 *)(param_3 + 2);
    uVar6 = FUN_009423e0(param_1);
    local_80 = FUN_009280e0(uVar6,uVar7,*puVar1,uVar4,local_34);
    if (local_80 != 0) {
      uVar7 = *param_3;
      if (local_34[0] == '\0') {
        local_5c = 0;
        local_68 = uVar7;
        local_60 = local_80;
        FUN_00942450(param_1);
        uVar7 = FUN_00925bf0();
        FUN_0094bc60(uVar7,&local_88,&local_68);
        if ((char)local_88 == '\0') {
          return;
        }
        uVar7 = *param_3;
        FUN_00943e60(&local_68);
        FUN_00943f20(&local_68,2,0x200);
        uVar3 = FUN_008e0a00(uVar7);
        FUN_00943f60(&local_68,uVar3);
        local_7c = 4;
        local_88 = uVar7;
        local_7b = FUN_008e0a00(uVar7);
      }
      else {
        FUN_00943e60(&local_68);
        FUN_00943f20(&local_68,2,0x200);
        uVar3 = FUN_008e0a00(uVar7);
        FUN_00943f60(&local_68,uVar3);
        local_7c = 4;
        local_88 = uVar7;
        local_7b = FUN_008e0a00(uVar7);
      }
      local_78 = &local_68;
      local_70 = 1;
      FUN_00942450(param_1);
      uVar7 = FUN_00925c00();
      FUN_0094ad90(uVar7,auStack_38,&local_88);
    }
  }
  return;
}


