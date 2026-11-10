/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2eac0; name: FUN_00f2eac0
 */


undefined8 FUN_00f2eac0(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_40;
  undefined1 auStack_38 [8];
  
  FUN_00f2cfa0(&local_40);
  if (local_40 == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(local_40 + 0x68) + 0x755) != '\0') {
    lVar3 = FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,auStack_38);
    if (*(long **)(lVar3 + 0x1f0) == *(long **)(lVar3 + 0x1e8)) {
      uVar4 = FUN_00f37330(0x50);
    }
    else {
      uVar4 = FUN_00f37330(**(long **)(lVar3 + 0x1e8) + 0x50);
    }
    if ((uVar4 & 1) == 0) {
      plVar1 = *(long **)(lVar3 + 0x1f0);
      plVar2 = *(long **)(lVar3 + 0x1e8);
      do {
        if (plVar2 == plVar1) goto LAB_00f2eb80;
        lVar3 = *plVar2;
        uVar4 = FUN_00df2390(lVar3 + 0x50);
        plVar2 = plVar2 + 1;
      } while ((uVar4 & 1) == 0);
      uVar4 = FUN_00debf90(lVar3);
      if ((uVar4 & 1) == 0) {
LAB_00f2eb80:
        uVar5 = 1;
        goto LAB_00f2eb84;
      }
    }
  }
  uVar5 = 0;
LAB_00f2eb84:
  (**(code **)(*(long *)(local_40 + 0x48) + 0x18))((long *)(local_40 + 0x48));
  return uVar5;
}


