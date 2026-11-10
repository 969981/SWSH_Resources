/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6be0; name: FUN_00fc6be0
 */


undefined1 FUN_00fc6be0(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  lVar2 = FUN_00a89ad0(*(undefined8 *)PTR_DAT_027194d8,auStack_18);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 2;
    if (*(long *)(lVar2 + 0x3a8) != 0x674edc539f9f74a6) {
      uVar1 = *(long *)(lVar2 + 0x3a8) == 0x5ea5c3539ab81c81;
    }
  }
  return uVar1;
}


