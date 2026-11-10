/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aae480; name: FUN_00aae480
 */


void FUN_00aae480(long param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined1 auStack_68 [16];
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  
  local_58 = 0xb3236763c32e0e7d;
  local_50 = "g_table";
  local_48 = 7;
  FUN_012b4250(auStack_40,*(long *)(param_1 + 0x3c0) + 0x18f8,&local_58);
  FUN_012b4190(auStack_68,auStack_40,param_2);
  local_58 = 0x9fc50a994755953d;
  local_50 = "minX";
  local_48 = 4;
  FUN_012b4250(auStack_40,auStack_68,&local_58);
  uVar1 = FUN_012b4630(0,auStack_40);
  local_58 = 0x9fc509994755938a;
  local_50 = "minY";
  local_48 = 4;
  FUN_012b4250(auStack_40,auStack_68,&local_58);
  uVar2 = FUN_012b4630(0,auStack_40);
  local_58 = 0x9fc50899475591d7;
  local_50 = "minZ";
  local_48 = 4;
  FUN_012b4250(auStack_40,auStack_68,&local_58);
  uVar3 = FUN_012b4630(0,auStack_40);
  local_58 = 0xe49d46996e3343f3;
  local_50 = "maxX";
  local_48 = 4;
  FUN_012b4250(auStack_40,auStack_68,&local_58);
  uVar4 = FUN_012b4630(0,auStack_40);
  local_58 = 0xe49d45996e334240;
  local_50 = "maxY";
  local_48 = 4;
  FUN_012b4250(auStack_40,auStack_68,&local_58);
  uVar5 = FUN_012b4630(0,auStack_40);
  local_58 = 0xe49d48996e334759;
  local_50 = "maxZ";
  local_48 = 4;
  FUN_012b4250(auStack_40,auStack_68,&local_58);
  uVar6 = FUN_012b4630(0,auStack_40);
  *(ulong *)(param_1 + 0x3a8) = CONCAT44((int)((ulong)uStack_78 >> 0x20),uVar3);
  *(ulong *)(param_1 + 0x3a0) = CONCAT44(uVar2,uVar1);
  *(ulong *)(param_1 + 0x3b8) = CONCAT44((int)((ulong)uStack_88 >> 0x20),uVar6);
  *(ulong *)(param_1 + 0x3b0) = CONCAT44(uVar5,uVar4);
  return;
}


