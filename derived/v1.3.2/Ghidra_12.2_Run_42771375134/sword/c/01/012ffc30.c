/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ffc30; name: FUN_012ffc30
 */


void FUN_012ffc30(long param_1,long param_2)

{
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/kw_sync_data.pb.cc"
                 ,0x9d0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_2 + 0x18) = *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_2 + 0x1c) = *(int *)(param_1 + 0x1c);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_2 + 0x20) = *(int *)(param_1 + 0x20);
  }
  if (*(float *)(param_1 + 0x24) != 0.0) {
    *(float *)(param_2 + 0x24) = *(float *)(param_1 + 0x24);
  }
  if (*(float *)(param_1 + 0x28) != 0.0) {
    *(float *)(param_2 + 0x28) = *(float *)(param_1 + 0x28);
  }
  if (*(float *)(param_1 + 0x2c) != 0.0) {
    *(float *)(param_2 + 0x2c) = *(float *)(param_1 + 0x2c);
  }
  return;
}


