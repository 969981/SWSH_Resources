/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de8a80; name: FUN_00de8a80
 */


ulong FUN_00de8a80(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 local_38;
  
  switch(param_2) {
  case 1:
    if ((*(float *)(param_1 + 0xa0) < *(float *)(param_1 + 0x78)) &&
       (*(char *)(param_1 + 0xc4) == '\0')) {
      uVar1 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88));
      if ((uVar1 & 1) != 0) {
        plVar5 = *(long **)(param_1 + 0x88);
        if (*(char *)((long)plVar5 + 0x44c) == '\0') {
          pcVar4 = *(code **)(*plVar5 + 0x178);
          puVar2 = PTR_DAT_0271e870;
        }
        else {
          pcVar4 = *(code **)(*plVar5 + 0x1c0);
          puVar2 = (undefined *)((long)plVar5 + 0x44c);
        }
        fVar8 = (float)(*pcVar4)(0,plVar5,puVar2);
        uVar3 = (uint)(fVar8 <= *(float *)PTR_DAT_0271ecc8);
        goto LAB_00de8cd0;
      }
LAB_00de8b24:
      uVar3 = 1;
      goto LAB_00de8cd0;
    }
    break;
  case 2:
    uVar3 = (uint)(*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0));
    goto LAB_00de8cd0;
  case 3:
    if ((*(char *)(param_1 + 0xc4) != '\0') &&
       (uVar1 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88)), (uVar1 & 1) != 0))
    goto LAB_00de8b24;
    uVar3 = (uint)*(byte *)(param_1 + 0xb0);
    if (*(byte *)(param_1 + 0xb0) == 0) goto LAB_00de8cd0;
    uVar1 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88));
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_00e9e440(*(undefined8 *)(param_1 + 0x88));
      return uVar1;
    }
    break;
  case 4:
    uVar1 = FUN_00deb720(param_1);
    return uVar1;
  case 5:
    if (((*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0)) &&
        (uVar1 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88)), (uVar1 & 1) == 0)) &&
       ((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) * DAT_01d4c674 <=
        ABS(*(float *)(param_1 + 0x130)))) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x88) + 0x418);
      if (((plVar5 != *(long **)(*(long *)(param_1 + 0x88) + 0x420)) &&
          (lVar6 = *plVar5, lVar6 != 0)) &&
         (puVar7 = *(undefined8 **)(lVar6 + 0x60), puVar7 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar7)(puVar7);
        lVar6 = FUN_00c781c0();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar6) {
            puVar7 = puVar7 + -10;
            goto LAB_00de8bf0;
          }
        }
      }
      puVar7 = (undefined8 *)0x0;
LAB_00de8bf0:
      local_38 = FUN_0069d2b0(puVar7);
      plVar5 = (long *)FUN_006b92e0(&local_38);
      if ((((*plVar5 == -0x4db9bc4ce1668963) ||
           (uVar1 = FUN_00ea09f0(*(undefined8 *)(param_1 + 0x88)), (uVar1 & 1) != 0)) &&
          (6 < *(uint *)(param_1 + 0xfc))) && (*(uint *)(param_1 + 0x100) < 2)) {
        uVar3 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88));
        uVar3 = uVar3 ^ 1;
        goto LAB_00de8cd0;
      }
    }
    break;
  case 6:
    if (((30.0 <= *(float *)(param_1 + 0x198)) && (*(int *)(param_1 + 0x1a8) != -1)) &&
       (uVar1 = thunk_FUN_00e46320(*(undefined8 *)(param_1 + 0x88)), (uVar1 & 1) == 0)) {
      uVar3 = (uint)((1.0 - *(float *)(param_1 + 0x1a0)) * 30.0 + 30.0 <=
                    *(float *)(param_1 + 0x198));
      goto LAB_00de8cd0;
    }
  }
  uVar3 = 0;
LAB_00de8cd0:
  return (ulong)(uVar3 & 1);
}


