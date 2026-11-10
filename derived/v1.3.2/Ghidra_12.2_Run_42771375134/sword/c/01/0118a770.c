/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0118a770; name: FUN_0118a770
 */


void FUN_0118a770(long param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/chika/protocol_buffers/out/data/chika_command.pb.cc"
                 ,0x335);
  }
  bVar1 = **(byte **)(param_2 + 0x18);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x18) + 8) == 0) {
    return;
  }
  FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


