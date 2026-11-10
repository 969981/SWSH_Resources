/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bc590; name: FUN_009bc590
 */


void FUN_009bc590(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  if ((DAT_02a4fda0 & 1) == 0) {
    DAT_02a4fda0 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/battle_command.pb.cc"
                );
    FUN_007e26f0(&DAT_01d219e9,0xa2);
    FUN_00818650("battle_command.proto",&LAB_009bc750);
    plVar2 = operator_new(0x30);
    *plVar2 = (long)(PTR_DAT_02718748 + 0x10);
    plVar2[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar2 + 2) = 0;
    if (*(long *)puVar1 != 2) {
      local_28 = 0;
      local_38 = PTR_DAT_02716670 + 0x10;
      puStack_30 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_38);
      FUN_00801390(&local_38);
    }
    *(undefined8 *)((long)plVar2 + 0x14) = 0;
    plVar2[4] = *(long *)PTR_DAT_02716d10;
    plVar2[5] = 0;
    *(long **)PTR_DAT_02718738 = plVar2;
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_02718750;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)PTR_DAT_02718740 = plVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_02718758);
  }
  return;
}


