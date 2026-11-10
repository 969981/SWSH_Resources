/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073c7b0; name: FUN_0073c7b0
 */


void FUN_0073c7b0(long param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_260 [512];
  
  puVar4 = PTR_LAB_027151a8;
  puVar3 = PTR_DAT_027151a0;
  puVar2 = PTR_DAT_02715198;
  lVar8 = *(long *)(param_1 + 0x5f0);
  while (lVar8 != 3) {
    lVar7 = *(long *)(param_1 + 0x7b8);
    if (*(long *)(param_1 + 0x7c0) == lVar7) goto LAB_0073c9c4;
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
      *(undefined8 *)puVar3 = 0xcbf29ce484222645;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *(undefined1 **)(puVar3 + 8) = &DAT_01d38550;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      FUN_001001c0(puVar4,puVar3,&PTR_LOOP_025db000,lVar8);
      __cxa_guard_release(puVar2);
      uVar9 = *(ulong *)(param_1 + 0x5f0);
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x5f0);
    }
    if (2 < uVar9) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_006fc0c0(param_1 + 0x20 + uVar9 * 0x1f0,lVar7,4,lVar8,puVar3);
    lVar8 = *(long *)(param_1 + 0x5f0) + 1;
    *(long *)(param_1 + 0x5f0) = lVar8;
  }
  lVar8 = *(long *)(param_1 + 0x7b8);
  uVar1 = *param_3;
  if ((ulong)uVar1 < (ulong)((*(long *)(param_1 + 0x7c0) - lVar8 >> 4) * -0x1084210842108421)) {
    iVar5 = *param_2;
    if (((*PTR_DAT_02715198 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_02715198), puVar2 = PTR_DAT_027151a0, iVar6 != 0)) {
      *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
      *(undefined1 **)(puVar2 + 8) = &DAT_01d38550;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715198);
    }
    FUN_006fc0c0(auStack_260,lVar8 + (ulong)uVar1 * 0x1f0,4,iVar5,PTR_DAT_027151a0);
    FUN_007185f0(param_1 + 0x20 + (long)*param_2 * 0x1f0,auStack_260);
    FUN_00784490(auStack_260);
    return;
  }
LAB_0073c9c4:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


