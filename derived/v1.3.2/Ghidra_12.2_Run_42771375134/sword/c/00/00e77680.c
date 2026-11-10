/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e77680; name: FUN_00e77680
 */


uint FUN_00e77680(void)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)PTR_DAT_027194d8;
  uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
  if ((uVar2 & 1) == 0) {
    uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
    return (uVar1 ^ 1) & 1;
  }
  return 0;
}


