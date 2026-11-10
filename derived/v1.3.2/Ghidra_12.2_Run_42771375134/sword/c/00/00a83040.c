/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a83040; name: FUN_00a83040
 */


void FUN_00a83040(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((*(long **)(param_1 + 0x580) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x580) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x580) + 0x198))(*(long **)(param_1 + 0x580),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x588) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x588) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x588) + 0x198))(*(long **)(param_1 + 0x588),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x590) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x590) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x590) + 0x198))(*(long **)(param_1 + 0x590),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x598) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x598) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x598) + 0x198))(*(long **)(param_1 + 0x598),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x5a0) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x5a0) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x5a0) + 0x198))(*(long **)(param_1 + 0x5a0),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x5a8) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x5a8) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x5a8) + 0x198))(*(long **)(param_1 + 0x5a8),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x5b0) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x5b0) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x5b0) + 0x198))(*(long **)(param_1 + 0x5b0),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x548) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x548) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x548) + 0x198))(*(long **)(param_1 + 0x548),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x550) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x550) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x550) + 0x198))(*(long **)(param_1 + 0x550),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x558) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x558) + 0x198))(*(long **)(param_1 + 0x558),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x560) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x560) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x560) + 0x198))(*(long **)(param_1 + 0x560),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x568) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x568) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x568) + 0x198))(*(long **)(param_1 + 0x568),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x570) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x570) + 400))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x570) + 0x198))(*(long **)(param_1 + 0x570),param_2 & 1);
  }
  if ((*(long **)(param_1 + 0x578) == (long *)0x0) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x578) + 400))(), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a832c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x578) + 0x198))(*(long **)(param_1 + 0x578),param_2 & 1);
  return;
}


