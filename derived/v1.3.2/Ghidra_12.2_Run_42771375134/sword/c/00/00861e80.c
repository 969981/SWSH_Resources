/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00861e80; name: FUN_00861e80
 */


undefined8 FUN_00861e80(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  string sVar1;
  ulong uVar2;
  undefined8 uVar3;
  string *psVar4;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  undefined4 local_60;
  ulong local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  psVar4 = *(string **)(param_2 + 0x30);
  sVar1 = *psVar4;
  if (((byte)sVar1 & 1) == 0) {
    if ((byte)sVar1 >> 1 == 0) {
      return 1;
    }
  }
  else if (*(long *)(psVar4 + 8) == 0) {
    return 1;
  }
  if (((byte)sVar1 & 1) == 0) {
    sVar1 = psVar4[1];
  }
  else {
    sVar1 = **(string **)(psVar4 + 0x10);
  }
  if (sVar1 != (string)0x2e) {
    return 1;
  }
  local_30 = param_3;
  uStack_28 = param_4;
  std::string::string((string *)&local_48,psVar4,1,0xffffffffffffffff,(allocator *)psVar4);
  local_68 = local_38;
  local_70 = local_40;
  local_60 = *(undefined4 *)(param_2 + 0x20);
  local_40 = 0;
  local_38 = (void *)0x0;
  local_78 = local_48;
  local_48 = 0;
  uVar2 = FUN_00862570(param_1 + 0x30,&local_78,&local_30);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((uVar2 & 1) == 0) {
    FUN_00801270(&local_78,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_database.cc"
                 ,0xa0);
    uVar3 = FUN_00800f30(&local_78,"Extension conflicts with extension already in database: extend "
                        );
    uVar3 = FUN_00800f60(uVar3,*(undefined8 *)(param_2 + 0x30));
    uVar3 = FUN_00800f30(uVar3,&DAT_01d1e5af);
    uVar3 = FUN_00800f60(uVar3,*(undefined8 *)(param_2 + 0x18));
    uVar3 = FUN_00800f30(uVar3,&DAT_01cebabc);
    uVar3 = FUN_00801220(uVar3,*(undefined4 *)(param_2 + 0x20));
    uVar3 = FUN_00800f30(uVar3,&DAT_01d14bd9);
    FUN_00800fa0(&local_48,uVar3);
    FUN_00801290(&local_78);
    return 0;
  }
  return 1;
}


