/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00493330; name: FUN_00493330
 */


float FUN_00493330(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ushort *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 0xec);
  fVar8 = *(float *)(param_1 + 0xf0) - fVar7;
  fVar6 = *(float *)(param_1 + 0xe8);
  if (fVar8 == 0.0) {
    fVar6 = fVar7 + fVar6 + 0.0;
    lVar3 = *(long *)(param_1 + 0x38);
  }
  else {
    lVar3 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
    *(long *)PTR_DAT_02712b80 = lVar3;
    fVar6 = fVar7 + fVar6 +
            (float)((double)fVar8 * DAT_01cd53a0 * (double)(uint)((ulong)lVar3 >> 0x21));
    lVar3 = *(long *)(param_1 + 0x38);
  }
  if (((lVar3 == 0) || (-1 < *(char *)(lVar3 + 1))) &&
     (uVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))((long *)(param_1 + 0x18),0xf),
     (uVar1 & 1) == 0)) {
    return fVar6;
  }
  plVar2 = (long *)(param_1 + 0x18);
  uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,0xf);
  fVar7 = 0.0;
  if ((((uVar1 & 1) != 0) && (uVar1 = FUN_004b3450(plVar2), (uVar1 & 1) != 0)) &&
     ((uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,0xf), (uVar1 & 1) != 0 &&
      ((plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2), plVar2 != (long *)0x0 &&
       (lVar3 = *plVar2, lVar3 != 0)))))) {
    fVar7 = 0.0;
    do {
      puVar4 = *(ushort **)(lVar3 + 0x20);
      if (puVar4 != (ushort *)0x0) {
        uVar1 = 0;
        pfVar5 = (float *)((long)puVar4 + ((ulong)((uint)*puVar4 * 2 + 5) & 0x3fffc));
        do {
          if (puVar4[uVar1 + 1] == 0xf) {
            if (pfVar5 != (float *)0x0) {
              fVar7 = *pfVar5 + fVar7;
            }
            break;
          }
          uVar1 = uVar1 + 1;
          pfVar5 = pfVar5 + 4;
        } while (uVar1 < *puVar4);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != 0);
  }
  if ((*(long *)(param_1 + 0x38) != 0) && (*(char *)(*(long *)(param_1 + 0x38) + 1) < '\0')) {
    fVar8 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,0xf,param_2);
    fVar7 = fVar8 + fVar7;
  }
  return fVar6 + DAT_01d4bec0 * fVar7;
}


