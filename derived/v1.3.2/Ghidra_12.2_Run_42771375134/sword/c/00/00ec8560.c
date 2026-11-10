/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec8560; name: FUN_00ec8560
 */


undefined8 FUN_00ec8560(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  
  lVar5 = *(long *)(*param_2 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x7b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar1 != plVar2; plVar1 = plVar1 + 1)
  {
    lVar3 = FUN_00e813b0(*plVar1 + 0x50);
    if ((lVar3 != 0) && (uVar4 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar4 & 1) == 0))
    goto LAB_00ec85fc;
  }
  lVar3 = 0;
LAB_00ec85fc:
  uVar4 = FUN_00e054d0();
  if ((uVar4 & 1) != 0) {
    FUN_006c5d20(auStack_70,lVar3 + 0x220);
    uVar4 = FUN_00e03ea0(lVar6,auStack_50);
    if ((uVar4 & 1) != 0) {
      FUN_00e03c70(lVar6,0);
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return 0;
}


