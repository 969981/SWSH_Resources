/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fd520; name: FUN_012fd520
 */


void FUN_012fd520(long param_1,long param_2)

{
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/kw_sync_data.pb.cc"
                 ,0xd81);
  }
  FUN_012fef30(param_1 + 0x18,param_2 + 0x18);
  FUN_012ff050(param_1 + 0x30,param_2 + 0x30);
  FUN_012ff170(param_1 + 0x48,param_2 + 0x48);
  FUN_012ff290(param_1 + 0x60,param_2 + 0x60);
  FUN_012ff3b0(param_1 + 0x78,param_2 + 0x78);
  FUN_012ff4d0(param_1 + 0x90,param_2 + 0x90);
  FUN_012ff5f0(param_1 + 0xa8,param_2 + 0xa8);
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
  }
  return;
}


