/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012bd20; name: FUN_0012bd20
 */


void FUN_0012bd20(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d0 [12];
  undefined8 local_c4;
  uint local_bc;
  long *local_b8;
  long local_b0;
  long *local_a8;
  ulong local_a0;
  long lStack_98;
  long local_90;
  undefined1 auStack_88 [8];
  undefined1 *local_80;
  char local_78;
  uint local_6c;
  undefined8 local_68;
  
  local_90 = *(long *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar13 = (ulong)uVar3;
  local_68 = 0;
  local_6c = *(uint *)(param_2 + 0x1c2c);
  uVar7 = uVar3 * 4;
  local_78 = 0x400 < uVar7;
  if (uVar7 < 0x401) {
    local_80 = auStack_d0 + -((ulong)uVar7 + 0xf & 0x1fffffff0);
  }
  else {
                    /* try { // try from 0012bd7c to 0012bd8f has its CatchHandler @ 0012c0c0 */
    local_80 = (undefined1 *)
               FUN_00401b30(auStack_88,uVar7,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/software/src/PxsNphaseImplementationContext.cpp"
                            ,0x198);
  }
  if (uVar3 == 0) {
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    local_a8 = (long *)(param_2 + 0x1c60);
    lVar15 = 0;
    lVar16 = 0;
    local_b8 = (long *)(param_2 + 0x1c70);
    uVar3 = uVar3 - 1;
    local_c4 = 0;
    local_bc = 0;
    uVar14 = 0;
    local_b0 = param_2;
    local_a0 = uVar13;
    lStack_98 = param_1;
    do {
      uVar1 = uVar14 + 1;
      uVar7 = (int)uVar14 + 2;
      uVar2 = (uint)uVar1;
      if (uVar3 <= uVar1) {
        uVar2 = uVar3;
      }
      if (uVar3 <= uVar7) {
        uVar7 = uVar3;
      }
      Hint_Prefetch(*(undefined8 *)(local_90 + (ulong)uVar7 * 8),0,0,0);
      Hint_Prefetch(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 0x20,0,0,0);
      lVar9 = *(long *)(local_90 + (ulong)uVar2 * 8);
      Hint_Prefetch(*(undefined8 *)(lVar9 + 0x30),0,0,0);
      Hint_Prefetch(*(undefined8 *)(lVar9 + 0x38),0,0,0);
      lVar11 = *(long *)(*(long *)(param_2 + 0x1c00) + 8);
      Hint_Prefetch(lVar11 + (ulong)*(uint *)(lVar9 + 0x60) * 0x20,0,0,0);
      Hint_Prefetch(lVar11 + (ulong)*(uint *)(lVar9 + 100) * 0x20,0,0,0);
      lVar9 = *(long *)(local_90 + uVar14 * 8);
      if (lVar9 != 0) {
        lVar11 = *(long *)(param_1 + 0x30) + lVar16;
        *(undefined1 *)(lVar11 + 0x1b) = *(undefined1 *)(lVar11 + 0x19);
        bVar4 = *(byte *)(lVar11 + 0x1a);
                    /* try { // try from 0012be7c to 0012be87 has its CatchHandler @ 0012c0e0 */
        FUN_0012e2d0(param_2,lVar9 + 0x20,*(long *)(param_1 + 0x38) + lVar15,lVar11);
        bVar5 = *(byte *)(lVar11 + 0x1a);
        bVar6 = *(byte *)(lVar11 + 0x19);
        if ((bVar6 == 0) || (-1 < *(char *)(lVar9 + 0x50))) {
          uVar7 = (uint)bVar6;
          if (bVar6 <= local_6c) {
            uVar7 = local_6c;
          }
          local_6c = uVar7;
          if ((uint)*(byte *)(lVar11 + 0x1b) == (uint)bVar6) goto LAB_0012bf2c;
          uVar7 = *(uint *)(*(long *)(local_90 + uVar14 * 8) + 0x58);
                    /* try { // try from 0012bec8 to 0012bfa7 has its CatchHandler @ 0012c0d0 */
          FUN_00190b50(local_b8,uVar7 + 1);
          lVar12 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(*local_b8 + lVar12) = *(uint *)(*local_b8 + lVar12) | 1 << (ulong)(uVar7 & 0x1f)
          ;
          if (*(byte *)(lVar11 + 0x1b) < *(byte *)(lVar11 + 0x19)) {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
          }
          else {
            local_68 = CONCAT44(local_68._4_4_ + 1,(int)local_68);
          }
          param_2 = local_b0;
          if ((bVar5 & 2) != (bVar4 & 2)) goto LAB_0012bf7c;
LAB_0012bf3c:
          if ((bVar4 & 3) == 0) {
            *(byte *)(lVar9 + 0x53) = *(byte *)(lVar9 + 0x53) & 0x40 | *(byte *)(lVar11 + 0x1a);
          }
        }
        else {
          *(int *)(local_80 + (ulong)local_bc * 4) = (int)uVar14;
          local_bc = local_bc + 1;
LAB_0012bf2c:
          if ((bVar5 & 2) == (bVar4 & 2)) goto LAB_0012bf3c;
LAB_0012bf7c:
          *(byte *)(lVar9 + 0x53) = *(byte *)(lVar9 + 0x53) & 0x40 | *(byte *)(lVar11 + 0x1a);
          uVar7 = *(uint *)(*(long *)(local_90 + uVar14 * 8) + 0x58);
          FUN_00190b50(local_a8,uVar7 + 1);
          lVar9 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(*local_a8 + lVar9) = *(uint *)(*local_a8 + lVar9) | 1 << (ulong)(uVar7 & 0x1f);
          param_2 = local_b0;
          if ((bVar5 & 2) == 0) {
            local_c4 = CONCAT44(local_c4._4_4_ + 1,(int)local_c4);
          }
          else {
            local_c4 = CONCAT44(local_c4._4_4_,(int)local_c4 + 1);
          }
        }
        param_1 = lStack_98;
        uVar13 = local_a0;
      }
      lVar16 = lVar16 + 0x20;
      lVar15 = lVar15 + 0x10;
      uVar14 = uVar1;
    } while (uVar1 < uVar13);
    if (local_bc == 0) {
      iVar10 = (int)local_c4;
      iVar8 = local_c4._4_4_;
    }
    else {
                    /* try { // try from 0012c014 to 0012c02b has its CatchHandler @ 0012c0ac */
      FUN_0012c500(param_1,local_80,local_bc,param_2,&local_68,(long)&local_68 + 4,&local_6c);
      iVar10 = (int)local_c4;
      iVar8 = local_c4._4_4_;
    }
  }
  *(int *)(param_2 + 0x1c80) = *(int *)(param_2 + 0x1c80) + iVar10;
  *(int *)(param_2 + 0x1c84) = *(int *)(param_2 + 0x1c84) + iVar8;
  *(int *)(param_2 + 0x1c88) = *(int *)(param_2 + 0x1c88) + (int)local_68;
  *(int *)(param_2 + 0x1c8c) = *(int *)(param_2 + 0x1c8c) + local_68._4_4_;
  *(uint *)(param_2 + 0x1c2c) = local_6c;
  if (local_78 != '\0') {
                    /* try { // try from 0012c084 to 0012c08b has its CatchHandler @ 0012c0bc */
    FUN_00401ce0(&local_80,local_80);
  }
  return;
}


