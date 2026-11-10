/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2b80; name: FUN_009a2b80
 */


void FUN_009a2b80(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_48;
  
  *param_2 = 0;
  lVar1 = param_3[1];
  uVar4 = FUN_008e1810(*param_3,0x26);
  if (((uVar4 & 1) != 0) && (*(char *)(lVar1 + 0xe) == '\t')) {
    uVar5 = FUN_008e12a0(*param_3,0x10);
    uVar5 = FUN_008ec050(uVar5,0x19);
    uVar3 = FUN_008ec940(uVar5,1);
    uVar5 = *param_3;
    puVar2 = (undefined4 *)param_3[1];
    uVar6 = FUN_009423b0(param_1);
    FUN_00937200(uVar6,uVar5,100);
    uVar5 = FUN_009423b0(param_1);
    FUN_00936040(uVar5,0x113,*puVar2);
    local_70 = *param_3;
    local_64 = 0;
    local_68 = uVar3;
    FUN_00942450(param_1);
    uVar5 = FUN_00925bf0();
    FUN_0094bc60(uVar5,&local_48,&local_70);
    if ((char)local_48 != '\0') {
      uVar5 = *param_3;
      local_48 = FUN_008e1aa0(uVar5,0x26);
      local_63 = FUN_008ed480(&local_48);
      local_64 = 0x2f;
      local_60 = 0;
      local_58 = 0;
      local_70 = uVar5;
      local_68 = uVar3;
      FUN_00942450(param_1);
      uVar5 = FUN_00925c00();
      FUN_0094ad90(uVar5,auStack_78,&local_70);
      local_70 = *param_3;
      local_68 = CONCAT31(local_68._1_3_,1);
      local_60 = 0;
      FUN_00942450(param_1);
      uVar5 = FUN_009251d0();
      FUN_0094af90(uVar5,&local_48,&local_70);
    }
    *param_2 = 1;
  }
  return;
}


