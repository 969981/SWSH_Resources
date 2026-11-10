/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eafdc0; name: FUN_00eafdc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eafdc0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 local_28;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined4 *)(param_2 + 9) = 1;
  local_28 = 0xa2fba44c94631d85;
  uVar2 = FUN_00fa2570(&local_28,0);
  *param_2 = uVar2;
  param_2[1] = *(undefined8 *)(param_1 + 0x1a0);
  puVar3 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar5 = *puVar3;
  uVar7 = puVar3[1];
  do {
    uVar8 = uVar5 ^ uVar7;
    iVar6 = (int)uVar7;
    iVar4 = (int)uVar5;
    uVar7 = uVar8 >> 0x1b | uVar8 << 0x25;
    uVar5 = uVar8 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar8 << 0x10;
    uVar1 = iVar4 + iVar6 & 0x1ff;
  } while (0x168 < uVar1);
  *puVar3 = uVar5;
  puVar3[1] = uVar7;
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
  FUN_00fa2640(0x19,0,1,2,param_2,0,0,0);
  return;
}


