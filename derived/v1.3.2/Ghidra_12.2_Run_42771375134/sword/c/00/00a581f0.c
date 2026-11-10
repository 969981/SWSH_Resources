/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a581f0; name: FUN_00a581f0
 */


void FUN_00a581f0(long param_1,undefined8 param_2,byte param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  short local_40 [2];
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  
  *(undefined4 *)(param_1 + 0x20) = param_4;
  switch(param_4) {
  case 0:
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    FUN_0077d4d0(*(undefined8 *)(param_1 + 0x40),param_2);
    FUN_00ffa3d0(uVar2,0);
    local_36 = 0;
    local_3c = 0;
    local_40[0] = (ushort)(param_3 & 1) << 8;
    local_38 = 0;
    FUN_00a5a320(uVar2,*(undefined8 *)(param_1 + 0x40),local_40);
    return;
  case 1:
    FUN_00a5ae90(*(undefined8 *)(param_1 + 0x30),0);
    uVar1 = *(uint *)(param_1 + 0x20);
    if (3 < uVar1) goto switchD_00a58230_default;
    goto LAB_00a58284;
  case 2:
    FUN_00a5ae90(*(undefined8 *)(param_1 + 0x30),1);
    uVar1 = *(uint *)(param_1 + 0x20);
    break;
  case 3:
    FUN_00a5ae90(*(undefined8 *)(param_1 + 0x30),2);
    uVar1 = *(uint *)(param_1 + 0x20);
    break;
  default:
    goto switchD_00a58230_default;
  }
  if (uVar1 < 4) {
LAB_00a58284:
                    /* WARNING: Could not recover jumptable at 0x00a58294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_02155168 + *(int *)(&DAT_02155168 + (ulong)uVar1 * 4)))();
    return;
  }
switchD_00a58230_default:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


