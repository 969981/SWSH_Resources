/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dee640; name: FUN_00dee640
 */


undefined8 FUN_00dee640(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 local_28;
  
  uVar1 = FUN_00c754c0(*(undefined8 *)(param_1 + 0x70),&local_28);
  local_28 = FUN_0069d2b0();
  uVar2 = FUN_006b94c0(&local_28);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  local_28 = FUN_0069d2b0(uVar1);
  plVar3 = (long *)FUN_006b92e0(&local_28);
  lVar5 = *plVar3;
  lVar4 = plVar3[3];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(char *)(param_1 + 0xe3) == '\0') {
    uVar1 = 1;
    if (lVar5 < -0x4379db7ba32590e1) {
      if ((lVar5 == -0x79e6e3a0bc669a0f) || (lVar5 == -0x6a6da842a3e8b9ce)) goto joined_r0x00dee778;
    }
    else if ((lVar5 == -0x4379db7ba32590e1) ||
            ((lVar5 == -0x3fe6a10e43da4cd8 || (lVar5 == 0x5f008d5a90dd45f6))))
    goto joined_r0x00dee778;
  }
  else if (lVar5 == 0x6f3c13bce33a451a) {
    uVar1 = 1;
    goto joined_r0x00dee778;
  }
  uVar1 = 0;
joined_r0x00dee778:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar1;
}


