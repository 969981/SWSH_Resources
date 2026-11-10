/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00760910; name: FUN_00760910
 */


void FUN_00760910(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 local_a0 [2];
  char *local_98;
  char *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a0[0] = 0xdd;
  local_98 = 
  "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflib3/src/mem/tlsf_pool_resource.cpp";
  local_90 = "do_dump_no_lock";
  local_88 = &DAT_01d38550;
  local_80 = 1;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uVar4 = FUN_00760750();
  nn::diag::detail::LogImpl((LogMetaData *)local_a0,"[gfl::mem] dump %s begin\n",uVar4);
  lVar5 = FUN_0075ffb0(param_1 + 0x28);
  uVar13 = 0;
  do {
    lVar6 = FUN_0075f240(lVar5);
    lVar7 = FUN_0075f230(lVar5);
    uVar8 = FUN_0075f5c0(lVar5);
    uVar4 = FUN_0075f220(lVar5);
    plVar9 = (long *)FUN_0075edb0();
    uVar3 = FUN_0075f670(lVar5);
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar3);
    if (puVar10 == (undefined8 *)0x0) {
      uVar15 = 0;
      uVar16 = 0;
      uVar12 = 0;
      uVar14 = 0;
    }
    else {
      uVar15 = (uint)*(ushort *)(puVar10 + 2);
      uVar16 = *puVar10;
      uVar12 = puVar10[1];
      uVar14 = (uint)*(ushort *)((long)puVar10 + 0x12);
    }
    lVar11 = FUN_0075f310(lVar5);
    local_a0[0] = 0xe2;
    local_98 = 
    "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflib3/src/mem/tlsf_pool_resource.cpp";
    local_90 = "operator()";
    local_88 = &DAT_01d38550;
    local_80 = 1;
    puVar1 = &DAT_01d17aae;
    if ((uVar8 & 1) == 0) {
      puVar1 = &DAT_01ce77a5;
    }
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    nn::diag::detail::LogImpl
              ((LogMetaData *)local_a0,
               "idx[%d] using[%s] addr[%zx] size[%zu]:[%zu]\n  %s(%d)\n  %s(%d)\n",uVar13,puVar1,
               uVar4,lVar7,lVar6 - lVar7,uVar16,uVar15,uVar12,uVar14);
    uVar13 = (ulong)((int)uVar13 + 1);
    bVar2 = lVar11 != lVar5;
    lVar5 = lVar11;
  } while (bVar2);
  local_a0[0] = 0xe5;
  local_78 = 0;
  local_98 = 
  "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflib3/src/mem/tlsf_pool_resource.cpp";
  local_90 = "do_dump_no_lock";
  local_88 = &DAT_01d38550;
  local_80 = 1;
  local_70 = 0;
  uStack_68 = 0;
  uVar4 = FUN_00760750(param_1);
  nn::diag::detail::LogImpl((LogMetaData *)local_a0,"[gfl::mem] dump %s end\n",uVar4);
  return;
}


