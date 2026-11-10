/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468a40; name: FUN_00468a40
 */


void FUN_00468a40(void)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = FUN_00404590();
  puVar1 = PTR_DAT_02712e28;
  if ((uVar2 & 1) != 0) {
    if (*(int *)PTR_DAT_02712e28 != -1) {
      FUN_00405710();
      *(undefined4 *)puVar1 = 0xffffffff;
    }
  }
  return;
}


