/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9f350; name: FUN_00e9f350
 */


uint FUN_00e9f350(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar5 = 0x1200000000;
  if (*(char *)(*(long *)PTR_DAT_027194e8 + 0x68) != '\0') {
    uVar3 = FUN_0150e0a0(lVar4);
    uVar5 = 0x1200000000;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0x200000080;
    }
  }
  uVar1 = FUN_01020290(uVar2,uVar5);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar1 & 1;
}


