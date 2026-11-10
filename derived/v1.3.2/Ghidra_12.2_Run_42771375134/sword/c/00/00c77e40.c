/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c77e40; name: FUN_00c77e40
 */


undefined8 FUN_00c77e40(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 local_30 [4];
  uint local_2c;
  undefined8 local_28;
  
  uVar1 = FUN_0069c2b0(*(undefined8 *)(param_1 + 0x10));
  if (*(uint *)(param_1 + 0x194) < uVar1) {
    local_30[0] = 1;
    local_2c = *(uint *)(param_1 + 0x194);
    local_28 = FUN_0069c990(*(undefined8 *)(param_1 + 0x10),local_30);
    plVar2 = (long *)FUN_006b9210(&local_28);
    if (((((*plVar2 == *(long *)(param_1 + 200)) ||
          (plVar2 = (long *)FUN_006b9210(&local_28), *plVar2 == *(long *)(param_1 + 0xe8))) ||
         (plVar2 = (long *)FUN_006b9210(&local_28), *plVar2 == *(long *)(param_1 + 0x108))) ||
        (plVar2 = (long *)FUN_006b9210(&local_28), *plVar2 == *(long *)(param_1 + 0x128))) &&
       (*(float *)(param_1 + 0x1ac) < 2.0)) {
      uVar4 = 1;
      uVar3 = FUN_0069d340(*(undefined8 *)(param_1 + 0x10));
      goto joined_r0x00c77f14;
    }
  }
  uVar4 = 0;
  uVar3 = FUN_0069d340(*(undefined8 *)(param_1 + 0x10));
joined_r0x00c77f14:
  if ((uVar3 & 1) == 0) {
    fVar5 = (float)FUN_0069c560(*(undefined8 *)(param_1 + 0x10));
    *(float *)(param_1 + 0x1ac) =
         *(float *)(param_1 + 0x1ac) + fVar5 * (1.0 / *(float *)PTR_DAT_0271c330);
  }
  return uVar4;
}


