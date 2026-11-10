/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ad690; name: FUN_011ad690
 */


void FUN_011ad690(long param_1,long param_2)

{
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/accept_privilege.pb.cc"
                 ,0x14e);
  }
  if (*(char *)(param_2 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  return;
}


