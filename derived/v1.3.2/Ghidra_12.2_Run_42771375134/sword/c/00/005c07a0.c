/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c07a0; name: FUN_005c07a0
 */


ulong FUN_005c07a0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(FILE **)(param_1 + 0x1048) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 0x1048));
    *(undefined8 *)(param_1 + 0x1048) = 0;
  }
  uVar4 = 0;
  if (*(FILE **)(param_1 + 0x1050) != (FILE *)0x0) {
    uVar2 = fclose(*(FILE **)(param_1 + 0x1050));
    uVar4 = (ulong)uVar2;
    *(undefined8 *)(param_1 + 0x1050) = 0;
  }
  plVar1 = (long *)(param_1 + 0xff0);
  if (((*(byte *)(param_1 + 0x1010) & 1) == 0) && (*plVar1 != 0)) {
    plVar3 = *(long **)(param_1 + 0xfe8);
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x48))
                        (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xff8) = 0;
  plVar1 = (long *)(param_1 + 0x1020);
  *(undefined8 *)(param_1 + 0x1010) = 0;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  if (((*(byte *)(param_1 + 0x1040) & 1) == 0) && (*plVar1 != 0)) {
    plVar3 = *(long **)(param_1 + 0x1018);
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x48))
                        (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined8 *)(param_1 + 0x1040) = 0;
  *(undefined8 *)(param_1 + 0x1038) = 0;
  return uVar4;
}


