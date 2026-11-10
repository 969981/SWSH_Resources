/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b9b70; name: FUN_001b9b70
 */


ulong * FUN_001b9b70(long param_1,undefined8 param_2,undefined1 *param_3,long *param_4,uint param_5,
                    uint param_6)

{
  undefined2 *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  code *pcVar17;
  undefined2 local_88 [4];
  undefined1 local_80;
  undefined2 *local_78;
  ulong local_70;
  char local_64 [4];
  ulong *local_58;
  
  local_70 = 0x400000000;
  local_80 = 1;
  local_78 = local_88;
  local_58 = (ulong *)((ulong)local_58 & 0xffffffffffff0000);
                    /* try { // try from 001b9bc8 to 001b9bd7 has its CatchHandler @ 001b9ebc */
  FUN_001b9f30(local_88,param_5 & 0xffff,&local_58);
  if ((param_5 & 0xffff) == 1) {
    *local_78 = (short)*(undefined4 *)(*param_4 + 0x48);
  }
  else if ((param_5 & 0xffff) != 0) {
    uVar4 = param_5 & 0xffff;
    if (uVar4 == 1) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      do {
        plVar7 = param_4 + lVar16;
        puVar1 = local_78 + lVar16;
        lVar16 = lVar16 + 2;
        *puVar1 = (short)*(undefined4 *)(*plVar7 + 0x48);
        puVar1[1] = (short)*(undefined4 *)(plVar7[1] + 0x48);
      } while ((ulong)uVar4 - ((ulong)uVar4 & 1) != lVar16);
    }
    if ((param_5 & 1) != 0) {
      local_78[lVar16] = (short)*(undefined4 *)(param_4[lVar16] + 0x48);
    }
  }
                    /* try { // try from 001b9c64 to 001b9c67 has its CatchHandler @ 001b9eb8 */
  FUN_003ff570(*(undefined8 *)(param_1 + 0xae0));
  puVar1 = local_78;
  puVar15 = *(ulong **)(param_1 + 0xad8);
  if (puVar15 == (ulong *)0x0) {
    iVar3 = *(int *)(param_1 + 0xad0);
    if (iVar3 == 0) {
      puVar10 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b9c7c to 001b9d8f has its CatchHandler @ 001b9ec4 */
      plVar7 = (long *)FUN_00400d30();
      pcVar17 = *(code **)(*plVar7 + 0x10);
      plVar8 = (long *)FUN_00400d60();
      uVar9 = (**(code **)(*plVar8 + 0x28))();
      pcVar2 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpShape>::getName() [T = physx::NpShape]"
      ;
      if ((uVar9 & 1) == 0) {
        pcVar2 = "<allocation names disabled>";
      }
      puVar10 = (ulong *)(*pcVar17)(plVar7,iVar3,pcVar2,
                                    "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar4 = *(uint *)(param_1 + 0xac0);
    local_58 = puVar10;
    if (uVar4 < (*(uint *)(param_1 + 0xac4) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0xab8) + (ulong)uVar4 * 8) = puVar10;
      *(uint *)(param_1 + 0xac0) = uVar4 + 1;
    }
    else {
      FUN_001c9410(param_1 + 0x8b0,&local_58);
    }
    if (puVar10 + (ulong)*(uint *)(param_1 + 0xac8) * 0x22 + -0x22 < puVar10) {
      puVar15 = *(ulong **)(param_1 + 0xad8);
    }
    else {
      puVar6 = puVar10 + (ulong)*(uint *)(param_1 + 0xac8) * 0x22 + -0x22;
      puVar14 = *(ulong **)(param_1 + 0xad8);
      do {
        puVar15 = puVar6;
        *puVar15 = (ulong)puVar14;
        puVar6 = puVar15 + -0x22;
        puVar14 = puVar15;
      } while (puVar10 <= puVar15 + -0x22);
      *(ulong **)(param_1 + 0xad8) = puVar15;
    }
  }
  *(ulong *)(param_1 + 0xad8) = *puVar15;
  *(int *)(param_1 + 0xacc) = *(int *)(param_1 + 0xacc) + 1;
  if (puVar15 != (ulong *)0x0) {
    local_58 = (ulong *)CONCAT71(local_58._1_7_,*param_3);
    FUN_00204cd0(puVar15,param_2,&local_58,puVar1,param_5,param_6 & 1);
  }
                    /* try { // try from 001b9d94 to 001b9d97 has its CatchHandler @ 001b9eb4 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xae0));
  puVar5 = PTR_DAT_02711040;
  if (puVar15 != (ulong *)0x0) {
    if ((param_5 & 0xffff) != 0) {
      uVar9 = 0;
      do {
        lVar16 = *(long *)puVar5;
        if (((byte)puVar15[7] >> 1 & 1) == 0) {
                    /* try { // try from 001b9dc4 to 001b9e0b has its CatchHandler @ 001b9ed8 */
          lVar11 = FUN_003f8b10(puVar15 + 10);
        }
        else {
          uVar13 = puVar15[8];
          if (*(short *)(uVar13 + 0x8c) == 1) {
            lVar11 = uVar13 + 0x88;
          }
          else {
            lVar11 = *(long *)(puVar15[6] + 0x2020) + (ulong)*(uint *)(uVar13 + 0x88) * 2;
          }
        }
        FUN_003ff470(*(long *)(*(long *)(lVar16 + 0x50) + (ulong)*(ushort *)(lVar11 + uVar9 * 2) * 8
                              ) + 0x20);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (param_5 & 0xffff));
    }
    local_58 = puVar15;
                    /* try { // try from 001b9e20 to 001b9e4b has its CatchHandler @ 001b9ec0 */
    FUN_003ff570(*(undefined8 *)(param_1 + 8));
    puVar12 = (undefined8 *)FUN_001c7410(param_1 + 0x3f0,&local_58,local_64);
    if (local_64[0] == '\0') {
      *puVar12 = local_58;
    }
    FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  }
  puVar1 = local_78;
  if ((((-1 < (long)local_70) && ((local_70 & 0x7fffffff00000000) != 0)) && (local_88 != local_78))
     && (local_78 != (undefined2 *)0x0)) {
                    /* try { // try from 001b9e70 to 001b9e83 has its CatchHandler @ 001b9eb0 */
    plVar7 = (long *)FUN_00400d30();
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar1);
  }
  return puVar15;
}


