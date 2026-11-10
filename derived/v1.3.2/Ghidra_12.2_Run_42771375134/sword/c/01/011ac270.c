/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ac270; name: FUN_011ac270
 */


void FUN_011ac270(long param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/battle_team.pb.cc"
                 ,0x15b);
  }
  bVar1 = **(byte **)(param_2 + 0x18);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_011ac2c0;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x18) + 8) == 0) goto LAB_011ac2c0;
  FUN_00860e40(param_1 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
LAB_011ac2c0:
  bVar1 = **(byte **)(param_2 + 0x20);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x20) + 8) == 0) {
    return;
  }
  FUN_00860e40(param_1 + 0x20,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


