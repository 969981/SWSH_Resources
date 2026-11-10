/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f90b0; name: FUN_012f90b0
 */


void FUN_012f90b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if ((DAT_02a6cb00 & 1) == 0) {
    DAT_02a6cb00 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/kw_sync_data.pb.cc"
                );
    FUN_007e26f0(&DAT_0216b0f4,0x894);
    FUN_00818650("kw_sync_data.proto",&LAB_012f94e0);
    plVar3 = operator_new(200);
    *(undefined1 *)(plVar3 + 2) = 0;
    puVar1 = PTR_DAT_02727ca8;
    plVar3[0x17] = 0;
    plVar3[0x18] = 0;
    plVar3[0x15] = 0;
    plVar3[0x16] = 0;
    plVar3[0x13] = 0;
    plVar3[0x14] = 0;
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *(long **)PTR_DAT_02727c68 = plVar3;
    plVar4 = operator_new(0x20);
    puVar1 = PTR_DAT_02727cb0;
    *(undefined4 *)((long)plVar4 + 0x1c) = 0;
    *(undefined8 *)((long)plVar4 + 0x14) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    *(long **)PTR_DAT_02727c70 = plVar4;
    plVar5 = operator_new(0x20);
    puVar1 = PTR_DAT_02727cb8;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0;
    *(undefined8 *)((long)plVar5 + 0x14) = 0;
    *plVar5 = (long)(puVar1 + 0x10);
    plVar5[1] = 0;
    *(long **)PTR_DAT_02727c78 = plVar5;
    plVar6 = operator_new(0x30);
    puVar1 = PTR_DAT_02727cc0;
    *(undefined4 *)((long)plVar6 + 0x2c) = 0;
    *(undefined8 *)((long)plVar6 + 0x24) = 0;
    *(undefined8 *)((long)plVar6 + 0x1c) = 0;
    *(undefined8 *)((long)plVar6 + 0x14) = 0;
    *plVar6 = (long)(puVar1 + 0x10);
    plVar6[1] = 0;
    *(long **)PTR_DAT_02727c80 = plVar6;
    plVar7 = operator_new(0x30);
    puVar1 = PTR_DAT_02727cc8;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    *plVar7 = (long)(puVar1 + 0x10);
    plVar7[1] = 0;
    *(long **)PTR_DAT_02727c88 = plVar7;
    plVar8 = operator_new(0x20);
    puVar1 = PTR_DAT_02727cd0;
    *(undefined4 *)((long)plVar8 + 0x1c) = 0;
    *(undefined8 *)((long)plVar8 + 0x14) = 0;
    *plVar8 = (long)(puVar1 + 0x10);
    plVar8[1] = 0;
    *(long **)PTR_DAT_02727c90 = plVar8;
    plVar9 = operator_new(0x38);
    puVar1 = PTR_DAT_02727cd8;
    *(undefined8 *)((long)plVar9 + 0x2c) = 0;
    *(undefined8 *)((long)plVar9 + 0x24) = 0;
    *(undefined8 *)((long)plVar9 + 0x1c) = 0;
    *(undefined8 *)((long)plVar9 + 0x14) = 0;
    *plVar9 = (long)(puVar1 + 0x10);
    plVar9[1] = 0;
    *(long **)PTR_DAT_02727c98 = plVar9;
    plVar10 = operator_new(0x30);
    *(undefined1 *)(plVar3 + 2) = 1;
    puVar2 = PTR_DAT_02727ce0;
    plVar10[5] = 0;
    puVar1 = PTR_DAT_02727ca0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    *plVar10 = (long)(puVar2 + 0x10);
    plVar10[1] = 0;
    *(long **)puVar1 = plVar10;
    *(undefined1 *)(plVar4 + 2) = 1;
    *(undefined1 *)(plVar5 + 2) = 1;
    *(undefined1 *)(plVar6 + 2) = 1;
    *(undefined1 *)(plVar7 + 2) = 1;
    *(undefined1 *)(plVar8 + 2) = 1;
    puVar1 = PTR_LAB_02727ce8;
    *(undefined1 *)(plVar9 + 2) = 1;
    *(undefined1 *)(plVar10 + 2) = 1;
    FUN_008010b0(puVar1);
    return;
  }
  return;
}


