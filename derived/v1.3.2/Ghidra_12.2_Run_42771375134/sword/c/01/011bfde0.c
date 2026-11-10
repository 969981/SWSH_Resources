/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011bfde0; name: _INIT_1414
 */


void _INIT_1414(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_02a64f10 & 1) == 0) {
    DAT_02a64f10 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffers/out/data/nesthole_async_data_holder.pb.cc"
                );
    FUN_011c00c0();
    FUN_007e26f0(&DAT_021677b0,0x365);
    FUN_00818650("nesthole_async_data_holder.proto",&LAB_011be7e0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_027256b8;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_027256b0 = plVar2;
    puVar3 = operator_new(0x40);
    puVar3[6] = 0;
    puVar3[7] = 0;
    DAT_02a64f28 = puVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar4 = FUN_011c0b70();
    *DAT_02a64f28 = uVar4;
    uVar4 = FUN_011c13b0();
    DAT_02a64f28[1] = uVar4;
    uVar4 = FUN_011c1bf0();
    DAT_02a64f28[2] = uVar4;
    uVar4 = FUN_011c2430();
    DAT_02a64f28[3] = uVar4;
    uVar4 = FUN_011c2c70();
    DAT_02a64f28[4] = uVar4;
    uVar4 = FUN_011c34b0();
    DAT_02a64f28[5] = uVar4;
    uVar4 = FUN_011c3cf0();
    DAT_02a64f28[6] = uVar4;
    uVar4 = FUN_011c4530();
    DAT_02a64f28[7] = uVar4;
    FUN_008010b0(PTR_LAB_027256c0);
    return;
  }
  return;
}


