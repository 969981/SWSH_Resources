/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1ab30; name: FUN_00e1ab30
 */


uint FUN_00e1ab30(void)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  lVar2 = FUN_00a89ad0(*(undefined8 *)PTR_DAT_027194d8,auStack_18);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_00e38a30();
  return uVar1 & 1;
}


