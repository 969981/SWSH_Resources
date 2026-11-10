/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1aab0; name: FUN_00e1aab0
 */


void FUN_00e1aab0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_00a89ad0(*(undefined8 *)PTR_DAT_027194d8,auStack_28);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)PTR_DAT_027194e0 + 0x50);
    uVar2 = FUN_00da09e0(*(undefined8 *)PTR_DAT_0271e770,7);
    FUN_00e37ce0(lVar1,uVar3,uVar2,*(undefined4 *)(param_1 + 0x360));
  }
  return;
}


