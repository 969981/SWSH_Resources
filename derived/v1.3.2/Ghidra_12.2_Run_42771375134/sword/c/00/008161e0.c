/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008161e0; name: FUN_008161e0
 */


undefined8 FUN_008161e0(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  ulong local_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  ulong local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  uVar3 = FUN_008166b0();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  pcVar1 = "serializing";
  if (param_3 != 1) {
    pcVar1 = (char *)0x0;
  }
  local_38 = 0;
  pcVar2 = "parsing";
  if (param_3 != 0) {
    pcVar2 = pcVar1;
  }
  local_30 = 0;
  local_28 = (undefined1 *)0x0;
  if (param_4 != 0) {
    FUN_0080f330(&local_68," \'%s\'",param_4);
    if ((local_38 & 1) != 0) {
      *local_28 = 0;
      local_30 = 0;
      if ((local_38 & 1) != 0) {
        operator_delete(local_28);
      }
    }
    local_30 = local_60;
    local_28 = puStack_58;
    local_38 = local_68;
  }
  FUN_00801270(&local_68,2,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format_lite.cc"
               ,0x216);
  uVar4 = FUN_00800f30(&local_68,"String field");
  uVar4 = FUN_00800f60(uVar4,&local_38);
  uVar4 = FUN_00800f30(uVar4," contains invalid ");
  uVar4 = FUN_00800f30(uVar4,"UTF-8 data when ");
  uVar4 = FUN_00800f30(uVar4,pcVar2);
  uVar4 = FUN_00800f30(uVar4," a protocol ");
  uVar4 = FUN_00800f30(uVar4,"buffer. Use the \'bytes\' type if you intend to send raw ");
  uVar4 = FUN_00800f30(uVar4,"bytes. ");
  FUN_00800fa0(auStack_70,uVar4);
  FUN_00801290(&local_68);
  if ((local_38 & 1) != 0) {
    operator_delete(local_28);
  }
  return 0;
}


