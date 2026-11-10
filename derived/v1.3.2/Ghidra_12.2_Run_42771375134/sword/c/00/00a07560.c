/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a07560; name: FUN_00a07560
 */


void FUN_00a07560(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  uVar6 = puVar5[0x9f];
  FUN_006cf0a0(auStack_50,PTR_DAT_02718dc0);
  lVar3 = FUN_00a077f0(uVar6,auStack_50);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_006cf0a0(auStack_50,PTR_DAT_02718dc8);
    lVar3 = FUN_00a07940(uVar6,auStack_50);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      FUN_006cf0a0(auStack_50,PTR_DAT_02718d08);
      lVar3 = FUN_00a02eb0(uVar6,auStack_50);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)(param_1 + 0x88);
      *(long *)(param_1 + 0x88) = lVar3;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        FUN_006cf0a0(auStack_50,PTR_DAT_02718d00);
        lVar3 = FUN_0089c480(uVar6,auStack_50);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        lVar4 = *(long *)(param_1 + 0x90);
        *(long *)(param_1 + 0x90) = lVar3;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        }
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        if (*(long *)(param_1 + 0x90) != 0) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


