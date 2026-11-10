/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103eaa0; name: FUN_0103eaa0
 */


void FUN_0103eaa0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = **(long **)(param_2 + 0x60);
  lVar2 = (*(long **)(param_2 + 0x60))[1] - lVar6;
  if (lVar2 != 0) {
    lVar7 = **(long **)(param_2 + 0x80);
    lVar3 = (*(long **)(param_2 + 0x80))[1] - lVar7;
    if (lVar3 != 0) {
      uVar8 = (ulong)*(uint *)(param_2 + 0xa4);
      if ((ulong)((lVar2 >> 3) * 0x6db6db6db6db6db7) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      if (*(long *)(lVar6 + uVar8 * 0x38 + 8) == -0x7c0b76891bf9f31c) {
        if ((ulong)((lVar3 >> 3) * 0x6db6db6db6db6db7) <= (ulong)*(uint *)(param_2 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar7 = lVar7 + (ulong)*(uint *)(param_2 + 0xa8) * 0x38;
      }
      else {
        lVar7 = lVar6 + uVar8 * 0x38;
      }
      *param_1 = *(undefined8 *)(lVar7 + 0x18);
      param_1[1] = *(undefined8 *)(lVar7 + 0x20);
      param_1[2] = *(undefined8 *)(lVar7 + 0x28);
      lVar6 = *(long *)(lVar7 + 0x30);
      param_1[3] = lVar6;
      goto joined_r0x0103eb60;
    }
  }
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_02715198), puVar4 = PTR_DAT_027151a0, iVar5 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar4 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar4,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  puVar4 = PTR_DAT_027151a0;
  uVar1 = *(undefined8 *)(PTR_DAT_027151a0 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_027151a0;
  param_1[1] = uVar1;
  lVar6 = *(long *)(puVar4 + 0x18);
  param_1[2] = *(undefined8 *)(puVar4 + 0x10);
  param_1[3] = lVar6;
joined_r0x0103eb60:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0103eb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  return;
}


