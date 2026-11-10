/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f6420; name: FUN_001f6420
 */


void FUN_001f6420(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long local_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_027111a0 + 0x10;
  *param_1 = (long)puVar5;
  if (*(int *)((long)param_1 + 0x2664) != 0) {
                    /* try { // try from 001f6478 to 001f6483 has its CatchHandler @ 001f6c00 */
    for (uVar10 = (ulong)(*(int *)((long)param_1 + 0x2664) - 1);
        (**(code **)(puVar5 + 0x88))(param_1,*(undefined8 *)(param_1[0x4c7] + uVar10 * 8),0),
        (int)uVar10 != 0; uVar10 = uVar10 - 1) {
      puVar5 = (undefined *)*param_1;
    }
  }
  iVar8 = *(int *)((long)param_1 + 0x26e4);
  if (iVar8 != 0) {
    lVar12 = (ulong)(iVar8 - 1) << 3;
    do {
                    /* try { // try from 001f64a8 to 001f64b3 has its CatchHandler @ 001f6bfc */
      (**(code **)(*param_1 + 0x70))(param_1,*(undefined8 *)(param_1[0x4d7] + lVar12),0);
      lVar12 = lVar12 + -8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = *(int *)((long)param_1 + 0x271c);
  if (iVar8 != 0) {
    lVar12 = (ulong)(iVar8 - 1) << 3;
    do {
                    /* try { // try from 001f64e0 to 001f64eb has its CatchHandler @ 001f6bf8 */
      (**(code **)(*param_1 + 0x70))(param_1,*(undefined8 *)(param_1[0x4de] + lVar12),0);
      lVar12 = lVar12 + -8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = (int)param_1[0x4be];
  if (iVar8 != 0) {
    lVar12 = (ulong)(iVar8 - 1) << 3;
    do {
                    /* try { // try from 001f6518 to 001f6523 has its CatchHandler @ 001f6bf4 */
      (**(code **)(*param_1 + 0x70))(param_1,*(undefined8 *)(param_1[0x4bd] + lVar12),0);
      lVar12 = lVar12 + -8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = *(int *)((long)param_1 + 0x262c);
  if (iVar8 != 0) {
    lVar12 = (ulong)(iVar8 - 1) << 3;
    do {
                    /* try { // try from 001f6550 to 001f655b has its CatchHandler @ 001f6bf0 */
      (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_1[0x4c0] + lVar12),0);
      lVar12 = lVar12 + -8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_50 = 0;
  local_48 = 0;
  if (*(int *)((long)param_1 + 0x269c) != 0) {
                    /* try { // try from 001f6574 to 001f657b has its CatchHandler @ 001f6b74 */
    FUN_001ffbc0(&local_50);
  }
  if ((int)param_1[0x4d1] != 0) {
    uVar11 = *(uint *)param_1[0x4d0];
    if (uVar11 == 0xffffffff) {
      uVar3 = 1;
      do {
        uVar9 = uVar3;
        if (*(uint *)((long)param_1 + 0x268c) == uVar9) goto LAB_001f6638;
        uVar11 = ((uint *)param_1[0x4d0])[uVar9];
        uVar3 = uVar9 + 1;
      } while (uVar11 == 0xffffffff);
    }
    else {
      uVar9 = 0;
    }
    do {
      do {
        if ((uint)local_48 < (local_48._4_4_ & 0x7fffffff)) {
          *(undefined8 *)(local_50 + (local_48 & 0xffffffff) * 8) =
               *(undefined8 *)(param_1[0x4ce] + (ulong)uVar11 * 8);
          local_48 = CONCAT44(local_48._4_4_,(uint)local_48 + 1);
        }
        else {
                    /* try { // try from 001f65f4 to 001f65fb has its CatchHandler @ 001f6bb8 */
          FUN_001ffd20(&local_50);
        }
        uVar11 = *(uint *)(param_1[0x4cf] + (ulong)uVar11 * 4);
      } while (uVar11 != 0xffffffff);
      do {
        if (*(int *)((long)param_1 + 0x268c) - 1U == uVar9) goto LAB_001f6638;
        uVar9 = uVar9 + 1;
        uVar11 = *(uint *)(param_1[0x4d0] + (ulong)uVar9 * 4);
      } while (uVar11 == 0xffffffff);
    } while( true );
  }
LAB_001f6638:
  if ((uint)local_48 != 0) {
    uVar10 = 0;
    do {
      plVar4 = *(long **)(local_50 + uVar10 * 8);
      if (*(int *)((long)param_1 + 0x269c) != 0) {
        uVar6 = ((long)plVar4 << 0x20 ^ 0xffffffffffffffffU) + (long)plVar4;
        uVar6 = uVar6 ^ uVar6 >> 0x16;
        uVar6 = uVar6 + (uVar6 << 0xd ^ 0xffffffffffffffff);
        uVar6 = (uVar6 ^ uVar6 >> 8) * 9;
        uVar6 = uVar6 ^ uVar6 >> 0xf;
        uVar6 = uVar6 + (uVar6 << 0x1b ^ 0xffffffffffffffff);
        puVar7 = (uint *)(param_1[0x4d0] +
                         (ulong)(*(int *)((long)param_1 + 0x268c) - 1U &
                                ((uint)(uVar6 >> 0x1f) ^ (uint)uVar6)) * 4);
        uVar11 = *puVar7;
        if (uVar11 != 0xffffffff) {
          do {
            puVar1 = (uint *)(param_1[0x4cf] + (ulong)uVar11 * 4);
            uVar3 = *puVar1;
            if (*(long **)(param_1[0x4ce] + (ulong)uVar11 * 8) == plVar4) {
              *puVar7 = uVar3;
              *(int *)((long)param_1 + 0x269c) = *(int *)((long)param_1 + 0x269c) + -1;
              *(int *)(param_1 + 0x4d3) = (int)param_1[0x4d3] + 1;
              *puVar1 = *(uint *)((long)param_1 + 0x2694);
              *(uint *)((long)param_1 + 0x2694) = uVar11;
              if (plVar4 != (long *)0x0) goto LAB_001f670c;
              goto LAB_001f6718;
            }
            puVar7 = puVar1;
            uVar11 = uVar3;
          } while (uVar3 != 0xffffffff);
        }
      }
      if (plVar4 != (long *)0x0) {
LAB_001f670c:
        (**(code **)(*plVar4 + 0x78))();
      }
LAB_001f6718:
      uVar10 = uVar10 + 1;
    } while (uVar10 < (local_48 & 0xffffffff));
  }
  iVar8 = (int)param_1[0x4d5];
  puVar7 = (uint *)((long)param_1 + 0x112c);
  if ((*(byte *)(param_1 + 0x485) & 4) != 0) {
    puVar7 = (uint *)(param_1 + 0x481);
  }
  uVar11 = *puVar7;
  if (iVar8 != 0) {
    lVar12 = (ulong)(iVar8 - 1) << 3;
    do {
      if (*(long **)(param_1[0x4d4] + lVar12) != (long *)0x0) {
        (**(code **)(**(long **)(param_1[0x4d4] + lVar12) + 0x68))();
      }
      lVar12 = lVar12 + -8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x4d5) = 0;
                    /* try { // try from 001f6788 to 001f67ab has its CatchHandler @ 001f6ba8 */
  FUN_001cc840(param_1 + 2);
  if ((uVar11 >> 0xc & 1) != 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  FUN_00400080(*(undefined4 *)((long)param_1 + 0x28bc));
  lVar12 = local_50;
  if (((-1 < (long)local_48) && ((local_48 & 0x7fffffff00000000) != 0)) && (local_50 != 0)) {
                    /* try { // try from 001f67c4 to 001f67d7 has its CatchHandler @ 001f6b70 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  FUN_003ff6d0(param_1 + 0x519);
  param_1[0x510] = 0;
  puVar2 = PTR_DAT_02710c20;
  param_1[0x509] = 0;
  param_1[0x502] = 0;
  puVar5 = puVar2 + 0x10;
  param_1[0x50e] = (long)puVar5;
  param_1[0x507] = (long)puVar5;
  param_1[0x500] = (long)puVar5;
  param_1[0x4fa] = (long)puVar5;
  param_1[0x4f4] = (long)puVar5;
  param_1[0x4ee] = (long)puVar5;
  param_1[0x4fc] = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f0] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0x2764)) &&
      ((*(uint *)((long)param_1 + 0x2764) & 0x7fffffff) != 0)) &&
     (lVar12 = param_1[0x4eb], lVar12 != 0)) {
                    /* try { // try from 001f6838 to 001f684b has its CatchHandler @ 001f6b6c */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  FUN_003ffb20(param_1[0x4e9]);
  lVar12 = param_1[0x4e9];
  if (lVar12 != 0) {
                    /* try { // try from 001f685c to 001f686f has its CatchHandler @ 001f6ba4 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  FUN_003ffb20(param_1[0x4e8]);
  lVar12 = param_1[0x4e8];
  if (lVar12 != 0) {
                    /* try { // try from 001f6880 to 001f6893 has its CatchHandler @ 001f6ba0 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  FUN_003ffb20(param_1[0x4e7]);
  lVar12 = param_1[0x4e7];
  if (lVar12 != 0) {
                    /* try { // try from 001f68a4 to 001f68b7 has its CatchHandler @ 001f6b9c */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (*(uint *)((long)param_1 + 0x270c) != 0) {
    uVar10 = 0;
    do {
      uVar11 = *(uint *)(param_1[0x4e0] + uVar10 * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar11 = *(uint *)(param_1[0x4df] + (ulong)uVar11 * 4);
        } while (uVar11 != 0xffffffff);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != *(uint *)((long)param_1 + 0x270c));
  }
  lVar12 = param_1[0x4dd];
  if (lVar12 != 0) {
                    /* try { // try from 001f68f8 to 001f690b has its CatchHandler @ 001f6b98 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (*(uint *)((long)param_1 + 0x26d4) != 0) {
    uVar10 = 0;
    do {
      uVar11 = *(uint *)(param_1[0x4d9] + uVar10 * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar11 = *(uint *)(param_1[0x4d8] + (ulong)uVar11 * 4);
        } while (uVar11 != 0xffffffff);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != *(uint *)((long)param_1 + 0x26d4));
  }
  lVar12 = param_1[0x4d6];
  if (lVar12 != 0) {
                    /* try { // try from 001f694c to 001f695f has its CatchHandler @ 001f6b94 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x26ac)) &&
      ((*(uint *)((long)param_1 + 0x26ac) & 0x7fffffff) != 0)) &&
     (lVar12 = param_1[0x4d4], lVar12 != 0)) {
                    /* try { // try from 001f6978 to 001f698b has its CatchHandler @ 001f6b68 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (*(uint *)((long)param_1 + 0x268c) != 0) {
    uVar10 = 0;
    do {
      uVar11 = *(uint *)(param_1[0x4d0] + uVar10 * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar11 = *(uint *)(param_1[0x4cf] + (ulong)uVar11 * 4);
        } while (uVar11 != 0xffffffff);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != *(uint *)((long)param_1 + 0x268c));
  }
  lVar12 = param_1[0x4cd];
  if (lVar12 != 0) {
                    /* try { // try from 001f69cc to 001f69df has its CatchHandler @ 001f6b90 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (*(uint *)((long)param_1 + 0x2654) != 0) {
    uVar10 = 0;
    do {
      uVar11 = *(uint *)(param_1[0x4c9] + uVar10 * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar11 = *(uint *)(param_1[0x4c8] + (ulong)uVar11 * 4);
        } while (uVar11 != 0xffffffff);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != *(uint *)((long)param_1 + 0x2654));
  }
  lVar12 = param_1[0x4c6];
  if (lVar12 != 0) {
                    /* try { // try from 001f6a20 to 001f6a33 has its CatchHandler @ 001f6b8c */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (*(uint *)((long)param_1 + 0x261c) != 0) {
    uVar10 = 0;
    do {
      uVar11 = *(uint *)(param_1[0x4c2] + uVar10 * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar11 = *(uint *)(param_1[0x4c1] + (ulong)uVar11 * 4);
        } while (uVar11 != 0xffffffff);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != *(uint *)((long)param_1 + 0x261c));
  }
  lVar12 = param_1[0x4bf];
  if (lVar12 != 0) {
                    /* try { // try from 001f6a74 to 001f6a87 has its CatchHandler @ 001f6b88 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x25f4)) &&
      ((*(uint *)((long)param_1 + 0x25f4) & 0x7fffffff) != 0)) &&
     (lVar12 = param_1[0x4bd], lVar12 != 0)) {
                    /* try { // try from 001f6aa0 to 001f6ab3 has its CatchHandler @ 001f6b64 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  if (*(uint *)((long)param_1 + 0x25d4) != 0) {
    uVar10 = 0;
    do {
      uVar11 = *(uint *)(param_1[0x4b9] + uVar10 * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar11 = *(uint *)(param_1[0x4b8] + (ulong)uVar11 * 4);
        } while (uVar11 != 0xffffffff);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != *(uint *)((long)param_1 + 0x25d4));
  }
  lVar12 = param_1[0x4b6];
  if (lVar12 != 0) {
                    /* try { // try from 001f6af4 to 001f6b07 has its CatchHandler @ 001f6b84 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
  }
  FUN_001f6290(param_1 + 0x4ab);
  puVar5 = PTR_DAT_02711188;
  param_1[0x4a5] = 0;
  param_1[0x49e] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  puVar2 = puVar2 + 0x10;
  param_1[0x4a3] = (long)puVar2;
  param_1[0x49c] = (long)puVar2;
  FUN_0039a640(param_1 + 0x486);
  FUN_001f5160(param_1 + 2);
  return;
}


