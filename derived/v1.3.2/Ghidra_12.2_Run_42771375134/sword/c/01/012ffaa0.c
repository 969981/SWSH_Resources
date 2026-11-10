/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ffaa0; name: FUN_012ffaa0
 */


void FUN_012ffaa0(long param_1,long param_2)

{
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/kw_sync_data.pb.cc"
                 ,0x298);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_2 + 0x18) = *(int *)(param_1 + 0x18);
  }
  return;
}


