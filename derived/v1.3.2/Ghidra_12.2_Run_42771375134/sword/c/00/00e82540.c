/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e82540; name: FUN_00e82540
 */


bool FUN_00e82540(long *param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_38 [8];
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return false;
    }
    plVar6 = (long *)*puVar1;
    if ((plVar6 != (long *)0x0 && plVar6[0x34] == *param_1) &&
       (uVar3 = (**(code **)(*plVar6 + 0x88))(plVar6), (uVar3 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar5 = plVar6 + 9;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar4 = FUN_00d78f10(plVar6,auStack_38);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x363) = param_2 & 1;
  }
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return lVar4 != 0;
}


