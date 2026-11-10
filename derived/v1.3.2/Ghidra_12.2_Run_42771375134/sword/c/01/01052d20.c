/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052d20; name: FUN_01052d20
 */


void FUN_01052d20(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_220 [496];
  
  lVar1 = *(long *)(param_1 + 0x148);
  plVar2 = *(long **)(lVar1 + 0x188);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x70))(plVar2,param_2 & 1,0);
    if ((param_2 & 1) == 0) {
      lVar3 = *(long *)(lVar1 + 0xf0);
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x188);
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x1f0);
    FUN_00784060(auStack_220,*(undefined8 *)(lVar3 + 0xb0));
    FUN_01061ee0(uVar4,auStack_220);
    FUN_00784490(auStack_220);
  }
  return;
}


