/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00102a60; name: FUN_00102a60
 */


void FUN_00102a60(undefined8 param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined2 uVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  byte local_44;
  char local_43;
  
  lVar3 = FUN_0075ffb0();
  do {
    local_48 = 0;
    local_58 = 0;
    local_50 = 0;
    local_70 = FUN_0075f240(lVar3);
    local_68 = FUN_0075f230(lVar3);
    local_44 = FUN_0075f5c0(lVar3);
    local_44 = local_44 & 1;
    local_60 = FUN_0075f220(lVar3);
    plVar4 = (long *)FUN_0075edb0();
    uVar2 = FUN_0075f670(lVar3);
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    if (puVar5 == (undefined8 *)0x0) {
      uVar7 = 0;
      uVar1 = 0;
      local_58 = 0;
      local_50 = 0;
    }
    else {
      local_58 = *puVar5;
      uVar1 = *(undefined2 *)(puVar5 + 2);
      local_50 = puVar5[1];
      uVar7 = *(undefined2 *)((long)puVar5 + 0x12);
    }
    local_48 = CONCAT22(uVar7,uVar1);
    lVar6 = FUN_0075f310(lVar3);
    local_43 = lVar6 == lVar3;
    (*(code *)*param_2)(param_2 + 4,&local_70);
    lVar3 = lVar6;
  } while (local_43 == '\0');
  return;
}


