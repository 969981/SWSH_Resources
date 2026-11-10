/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134ddb0; name: FUN_0134ddb0
 */


undefined8 FUN_0134ddb0(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [96];
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long local_38;
  
  uVar2 = FUN_012de2f0();
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0134df20(param_1);
    lVar4 = FUN_012de5b0(param_1);
    local_50 = 0xc31ef8e5bc72e7c0;
    puStack_48 = &DAT_01cec7ae;
    local_40 = 4;
    local_38 = 0;
    FUN_01312f40(*(undefined4 *)(*(long *)(lVar4 + 0x108) + 0x1c0),uVar3,&local_50,PTR_DAT_02715088)
    ;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    local_50 = 0xc31ef8e5bc72e7c0;
    puStack_48 = &DAT_01cec7ae;
    local_40 = 4;
    local_38 = 0;
    FUN_01312fc0(uVar3,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_01313040(DAT_01d4c18c,uVar3);
    local_d0 = &LAB_0134e680;
    local_c8 = FUN_0134e760;
    local_c0 = &LAB_0134e770;
    puStack_b8 = &LAB_0134e780;
    FUN_01313410(uVar3,&local_d0);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar1)(auStack_b0);
    }
    local_50 = 0xc31ef8e5bc72e7c0;
    puStack_48 = &DAT_01cec7ae;
    local_40 = 4;
    local_38 = 0;
    FUN_01313060(uVar3,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    uVar3 = 1;
  }
  return uVar3;
}


