/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047f2d0; name: FUN_0047f2d0
 */


long * FUN_0047f2d0(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00441590(0x503,0,param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(plVar1 + 0x1d) = *(undefined4 *)(param_1 + 0x20);
    FUN_00441be0(plVar1,param_2 + 0x38);
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
    FUN_00441c30(plVar1,*(undefined8 *)(param_2 + 8));
    FUN_0043e8e0(plVar1,*(byte *)(param_2 + 0x188) >> 2 & 1);
    FUN_00441d80(plVar1,*(undefined4 *)(param_2 + 0x90));
    FUN_00441d60(plVar1,*(byte *)(param_2 + 0x188) >> 1 & 1);
    FUN_00441c20(plVar1,*(undefined4 *)(param_2 + 0x80));
    plVar2 = *(long **)(param_2 + 0x18);
    if (plVar2 != (long *)0x0) {
      *(int *)(plVar1 + 0x20) = (int)plVar2[1];
      plVar1[0x1f] = *plVar2;
    }
  }
  return plVar1;
}


