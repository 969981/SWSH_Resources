/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaf4d0; name: FUN_00eaf4d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eaf4d0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 local_28;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined4 *)(param_2 + 9) = 0;
  if ((*(long *)(param_1 + 0x6c0) == 0) || (*(int *)(*(long *)(param_1 + 0x6c0) + 0x54) == 0)) {
    uVar4 = 0;
  }
  else if ((*(long *)(param_1 + 0x6d0) == 0) || (*(int *)(*(long *)(param_1 + 0x6d0) + 0x54) == 0))
  {
    uVar4 = 1;
  }
  else if ((*(long *)(param_1 + 0x6e0) == 0) || (*(int *)(*(long *)(param_1 + 0x6e0) + 0x54) == 0))
  {
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
    if ((*(long *)(param_1 + 0x6f0) != 0) &&
       (uVar4 = 3, *(int *)(*(long *)(param_1 + 0x6f0) + 0x54) != 0)) {
      uVar4 = 4;
    }
  }
  local_28 = *(undefined8 *)(param_1 + 0x1a0);
  uVar2 = FUN_00fa2570(&local_28,uVar4);
  *param_2 = uVar2;
  param_2[1] = *(undefined8 *)(param_1 + 0x1a0);
  puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar7 = *puVar5;
  uVar9 = puVar5[1];
  do {
    uVar10 = uVar7 ^ uVar9;
    iVar8 = (int)uVar9;
    iVar6 = (int)uVar7;
    uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
    uVar7 = uVar10 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar10 << 0x10;
    uVar1 = iVar6 + iVar8 & 0x1ff;
  } while (0x168 < uVar1);
  *puVar5 = uVar7;
  puVar5[1] = uVar9;
  FUN_00a92cd0((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
               (float)uVar1,0,0);
  uVar2 = _DAT_01d4a130;
  param_2[5] = _UNK_01d4a138;
  param_2[4] = uVar2;
  param_2[7] = extraout_var_00;
  param_2[6] = CONCAT44(extraout_var,extraout_s0);
  memmove(param_2 + 10,(void *)(param_1 + 0x3a0),0xa0);
  *(undefined1 *)((long)param_2 + 0x2cd) = 0;
  *(undefined4 *)(param_2 + 0x59) = 0;
  lVar3 = FUN_00fa2610(param_2,param_1 + 0x6c0,4,0);
  if (lVar3 != 0) {
    *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + 1;
  }
  return;
}


