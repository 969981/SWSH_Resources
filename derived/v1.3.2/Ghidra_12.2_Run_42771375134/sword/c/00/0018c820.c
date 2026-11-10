/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018c820; name: FUN_0018c820
 */


void FUN_0018c820(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_170 [40];
  long *local_148;
  int local_13c;
  int local_f8;
  undefined8 *local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long lStack_b0;
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined1 auStack_98 [56];
  
  local_c8 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  local_b8 = (ulong)uVar1;
  uVar2 = *(uint *)(param_1 + 3);
  local_13c = (int)param_1[5];
  lStack_b0 = param_1[6];
  local_c0 = param_1[7];
  puVar10 = (undefined8 *)param_1[10];
  *(undefined4 *)(puVar10 + 1) = 0;
  if (uVar1 != 0) {
    lVar6 = local_c8 + 0x100;
    uVar5 = local_b8;
    do {
      Hint_Prefetch(lVar6,0,0,0);
      *(undefined4 *)(lVar6 + -0xe4) = 0;
      *(undefined4 *)(lVar6 + -0xf4) = 0;
      lVar6 = lVar6 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_148 = param_1;
  local_d0 = puVar10;
  if (uVar2 == 0) {
    local_f8 = local_13c + -1;
    *(undefined4 *)(puVar10 + 1) = 0x20;
                    /* WARNING: Subroutine does not return */
    memset((void *)*puVar10,0,0x80);
  }
  plVar9 = (long *)param_1[2];
  uVar1 = uVar2 * 8;
  local_a0 = 0x400 < uVar1;
  if (uVar1 < 0x401) {
    puVar3 = auStack_170 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
  }
  else {
                    /* try { // try from 0018c8cc to 0018c8e3 has its CatchHandler @ 0018f11c */
    puVar3 = (undefined1 *)
             FUN_00401b30(auStack_98,uVar1,
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDynamics/src/DyConstraintPartition.cpp"
                          ,0x275);
  }
  local_a8 = puVar3;
  if (uVar2 == 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    plVar7 = plVar9;
    do {
      lVar8 = *plVar7;
      lVar4 = lVar6 * 8;
      lVar6 = lVar6 + 2;
      *(long *)(puVar3 + lVar4) = lVar8;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined4 *)(lVar8 + 0xc) = 0;
      lVar8 = plVar7[10];
      plVar7 = plVar7 + 0x14;
      *(long *)((long)(puVar3 + lVar4) + 8) = lVar8;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined4 *)(lVar8 + 0xc) = 0;
    } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar6);
  }
  if ((uVar2 & 1) != 0) {
    lVar4 = plVar9[lVar6 * 10];
    *(long *)(puVar3 + lVar6 * 8) = lVar4;
    *(undefined4 *)(lVar4 + 0x1c) = 0;
    *(undefined4 *)(lVar4 + 0xc) = 0;
  }
  *(undefined4 *)(puVar10 + 1) = 0x20;
                    /* try { // try from 0018ccec to 0018ccf7 has its CatchHandler @ 0018f12c */
                    /* WARNING: Subroutine does not return */
  memset((void *)*puVar10,0,0x80);
}


