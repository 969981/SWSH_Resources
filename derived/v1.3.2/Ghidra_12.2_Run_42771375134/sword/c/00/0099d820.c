/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099d820; name: FUN_0099d820
 */


void FUN_0099d820(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  char local_a0 [8];
  undefined8 local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined2 local_70;
  char local_6e;
  char local_68;
  undefined7 uStack_67;
  
  FUN_0093b2e0(param_3[3]);
  lVar6 = FUN_0093b2f0(param_3[3]);
  if (lVar6 != 0) {
    do {
      local_98 = param_3[1];
      lStack_90 = param_3[2];
      local_80._0_5_ = CONCAT14(1,*(undefined4 *)*param_3);
      local_88 = lVar6;
      FUN_00942450(param_1);
      uVar7 = FUN_00925e40();
      FUN_00966da0(uVar7,&local_68,&local_98);
      cVar3 = local_68;
      puVar1 = (undefined4 *)*param_3;
      puVar2 = (undefined4 *)param_3[1];
      uVar7 = param_3[2];
      uVar5 = FUN_00880d20(*puVar2);
      uVar4 = FUN_00880d80(*puVar2);
      FUN_008ec700(uVar4,uVar7,&local_68);
      local_80 = CONCAT71(uStack_67,local_68);
      local_74 = *puVar1;
      local_88 = CONCAT44(local_88._4_4_,uVar5);
      local_78 = 5;
      local_70 = 0x100;
      local_6e = cVar3;
      local_98 = uVar7;
      lStack_90 = lVar6;
      FUN_00942450(param_1);
      uVar7 = FUN_00925400();
      FUN_00967420(uVar7,local_a0,&local_98);
      if (local_a0[0] != '\0' || cVar3 != '\0') {
        lVar6 = FUN_00942400(param_1);
        FUN_0093af10(lVar6 + 0x10);
      }
      lVar6 = FUN_0093b2f0(param_3[3]);
    } while (lVar6 != 0);
  }
  return;
}


