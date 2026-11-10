/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00548d10; name: FUN_00548d10
 */


undefined8 FUN_00548d10(long param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *__s;
  undefined8 uVar7;
  ulong local_c0 [3];
  undefined8 local_a8;
  undefined4 local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x44) = param_2;
  *(int *)(param_1 + 0x48) = param_3;
  uVar3 = 0xfffffffa;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar7 = 0;
    uVar3 = 0;
    local_c0[1] = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_c0[0] = (ulong)(uint)((param_2 + 4) * param_3);
    local_c0[2] = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    if ((*(uint *)(param_1 + 0x24) >> 9 & 1) != 0) {
      uVar7 = 0x10000;
      uVar3 = 2;
      local_a8 = 0x1000000000000;
      local_c0[2] = 2;
    }
    if ((*(uint *)(param_1 + 0x24) >> 0xb & 1) != 0) {
      uVar3 = 1;
      local_c0[2] = 1;
    }
    uVar2 = 1;
    if (*(uint *)(param_1 + 0xc) != 8) {
      uVar2 = 2;
    }
    if ((*(uint *)(param_1 + 0xc) & 0xfffffffe) == 8) {
      local_a8 = CONCAT44(local_a8._4_4_,uVar2);
    }
    else {
      uVar2 = 0;
    }
    iStack_9c = param_3;
    uVar2 = FUN_006636d0(10,uVar3,uVar2,uVar7);
    local_90 = CONCAT44(local_90._4_4_,uVar2) & 0xfffffffffffffff8 | 2;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    plVar4 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
    plVar4 = (long *)(**(code **)(*plVar4 + 0xf0))(plVar4,0,0);
    *(long **)(param_1 + 0xa0) = plVar4;
    uVar5 = (**(code **)(*plVar4 + 0x40))(plVar4,local_c0);
    if ((uVar5 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x48);
      puVar6 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(ulong)uVar1 * 8 + 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp",0x15f
                                     ,0);
      __s = puVar6;
      if (puVar6 != (ulong *)0x0) {
        __s = puVar6 + 1;
        *puVar6 = (ulong)uVar1;
      }
      *(ulong **)(param_1 + 0x50) = __s;
                    /* WARNING: Subroutine does not return */
      memset(__s,0,(ulong)*(uint *)(param_1 + 0x48) << 3);
    }
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    uVar3 = 0xffffffff;
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",
                   0x158);
      FUN_00517ae0("error : m_pSiGfxMemoryHeap->Create()");
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}


