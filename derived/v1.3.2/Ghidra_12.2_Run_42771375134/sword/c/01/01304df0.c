/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01304df0; name: FUN_01304df0
 */


void FUN_01304df0(long param_1,long param_2)

{
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_spiece.pb.cc"
                 ,0x1ae);
  }
  if (*(char *)(param_2 + 0x11) != '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(float *)(param_2 + 0x14) != 0.0) {
    *(float *)(param_1 + 0x14) = *(float *)(param_2 + 0x14);
  }
  if (*(float *)(param_2 + 0x18) != 0.0) {
    *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18);
  }
  if (*(float *)(param_2 + 0x1c) != 0.0) {
    *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 0x1c);
  }
  if (*(float *)(param_2 + 0x20) != 0.0) {
    *(float *)(param_1 + 0x20) = *(float *)(param_2 + 0x20);
  }
  return;
}


