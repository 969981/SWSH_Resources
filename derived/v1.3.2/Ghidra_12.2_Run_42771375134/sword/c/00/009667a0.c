/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009667a0; name: FUN_009667a0
 */


void FUN_009667a0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  uint local_58;
  undefined1 local_54;
  undefined1 auStack_48 [8];
  
  if ((char)param_3[4] != '\0') {
    uVar5 = 0;
    do {
      lVar6 = uVar5 * 8;
      puVar1 = (undefined4 *)param_3[2];
      lVar2 = param_3[3];
      lVar7 = *(long *)(*param_3 + lVar6);
      uVar4 = FUN_009423e0(param_1);
      uVar3 = FUN_0092e190(uVar4,*puVar1,lVar2);
      local_70 = CONCAT44(local_70._4_4_,uVar3);
      local_78 = lVar7;
      FUN_00942450(param_1);
      uVar4 = FUN_00925be0();
      FUN_0094c160(uVar4,auStack_48,&local_78);
      local_68 = *(undefined8 *)(*param_3 + lVar6);
      local_78 = param_3[2];
      local_70 = param_3[3];
      local_60 = CONCAT44(local_60._4_4_,(uint)*(ushort *)(*param_3 + uVar5 * 2 + 0x28));
      FUN_00942450(param_1);
      uVar4 = FUN_009252a0();
      FUN_009669a0(uVar4,auStack_48,&local_78);
      local_78 = param_3[1];
      local_70 = param_3[2];
      local_68 = param_3[3];
      local_60 = *(undefined8 *)(*param_3 + lVar6);
      local_58 = (uint)*(ushort *)(*param_3 + uVar5 * 2 + 0x28);
      local_54 = 0;
      FUN_00942450(param_1);
      uVar4 = FUN_00925d20();
      FUN_00967220(uVar4,auStack_48,&local_78);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_3 + 4));
  }
  local_78 = param_3[1];
  local_70 = param_3[2];
  local_68 = param_3[3];
  FUN_00942450(param_1);
  uVar4 = FUN_00925d30();
  FUN_00966b10(uVar4,auStack_48,&local_78);
  return;
}


