/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecee70; name: FUN_00ecee70
 */


void FUN_00ecee70(void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_027194d8;
  plVar1 = *(long **)(lVar6 + 0xb0);
  plVar2 = *(long **)(lVar6 + 0xb8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar4 = *plVar1;
    uVar3 = FUN_015b5320(lVar4 + 0x50);
    if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar3 & 1) == 0))
    goto LAB_00eceed8;
  }
  lVar4 = 0;
LAB_00eceed8:
  uVar5 = *(undefined8 *)(lVar6 + 0x88);
  FUN_00e821b0();
  FUN_00e81ef0(uVar5,lVar4 + 0xb0,0);
  return;
}


