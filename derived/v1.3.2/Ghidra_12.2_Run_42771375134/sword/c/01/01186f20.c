/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01186f20; name: FUN_01186f20
 */


void FUN_01186f20(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if ((DAT_02a64488 & 1) == 0) {
    DAT_02a64488 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/chika/protocol_buffers/out/data/chika_async_data_holder.pb.cc"
                );
    FUN_011894f0();
    FUN_007e26f0(&DAT_02166654,0x4bc);
    FUN_00818650("chika_async_data_holder.proto",&LAB_01187060);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725178;
    *(undefined1 *)(plVar2 + 2) = 0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725170 = plVar2;
    puVar3 = operator_new(0x68);
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *puVar3 = 0;
    DAT_02a644a0 = puVar3;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    FUN_011870f0(plVar2);
    FUN_008010b0(PTR_FUN_02725180);
    return;
  }
  return;
}


