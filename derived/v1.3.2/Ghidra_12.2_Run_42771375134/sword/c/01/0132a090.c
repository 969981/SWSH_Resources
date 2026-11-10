/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a090; name: FUN_0132a090
 */


void FUN_0132a090(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_30 [16];
  
  if ((*(long *)(param_1 + 0x68) == 0) || (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0')) {
LAB_0132a100:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar1 = param_1 + 0x170;
  uVar2 = FUN_012b4090(lVar1);
  if ((uVar2 & 1) == 0) {
    FUN_012b4da0(auStack_30,*(undefined8 *)(*(long *)(param_1 + 0x68) + 400),
                 *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180));
    FUN_012b4070(lVar1,auStack_30);
    uVar2 = FUN_012b4090(lVar1);
    if ((uVar2 & 1) == 0) goto LAB_0132a100;
  }
  return;
}


