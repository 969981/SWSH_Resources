/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c53a0; name: FUN_004c53a0
 */


void FUN_004c53a0(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00404590();
  if ((((*(long *)PTR_DAT_02712d98 == 0) || ((uVar2 & 1) == 0)) ||
      (iVar1 = FUN_004689b0(2), iVar1 != 1)) ||
     ((iVar1 = FUN_0045ea40(*(undefined8 *)(PTR_DAT_02712b90 + 0x58)), iVar1 != 1 ||
      (iVar1 = FUN_00467ee0(), iVar1 != 1)))) {
    return;
  }
  FUN_004a80e0();
  FUN_0047bfa0();
  return;
}


